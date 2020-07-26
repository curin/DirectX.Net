#pragma once

#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        ::D3D12_RESOURCE_DESC* ID3D12Resource_GetDesc(::ID3D12Resource* resource) { return &resource->GetDesc(); }
        public ref class ID3D12Resource : public ID3D12Pageable
        {
            ::ID3D12Resource* _ref;
        public:
            ID3D12Resource(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12Resource*)pointer.ToPointer(); }
            ID3D12Resource(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12Resource*)pointer; }

            long Map(unsigned int Subresource, D3D12_RANGE% pReadRange, [Out] IntPtr% ppData)
            {
                pin_ptr<D3D12_RANGE> readRange = &pReadRange;
                void** ppOut;
                long ret = _ref->Map(Subresource, readRange, ppOut);
                ppData = IntPtr(*ppOut);
                return ret;
            }

            long Map(unsigned int Subresource, [Out] IntPtr% ppData)
            {
                void** ppOut;
                long ret = _ref->Map(Subresource, nullptr, ppOut);
                ppData = IntPtr(*ppOut);
                return ret;
            }

            void Unmap(unsigned int Subresource, D3D12_RANGE% pWrittenRange)
            {
                pin_ptr<D3D12_RANGE> writtenRange = &pWrittenRange;
                _ref->Unmap(Subresource, writtenRange);
            }

            void Unmap(unsigned int Subresource)
            {
                _ref->Unmap(Subresource, nullptr);
            }

            D3D12_RESOURCE_DESC GetDesc()
            {
                return *(D3D12_RESOURCE_DESC*)ID3D12Resource_GetDesc(_ref);
            }

            unsigned long long GetGPUVirtualAddress()
            {
                return _ref->GetGPUVirtualAddress();
            }

            long WriteToSubresource(unsigned int DstSubresource, D3D12_BOX% pDstBox, IntPtr pSrcData, unsigned int SrcRowPitch, unsigned int SrcDepthPitch)
            {
                pin_ptr<D3D12_BOX> box = &pDstBox;
                return _ref->WriteToSubresource(DstSubresource, box, pSrcData.ToPointer(), SrcRowPitch, SrcDepthPitch);
            }

            long WriteToSubresource(unsigned int DstSubresource, IntPtr pSrcData, unsigned int SrcRowPitch, unsigned int SrcDepthPitch)
            {
                return _ref->WriteToSubresource(DstSubresource, nullptr, pSrcData.ToPointer(), SrcRowPitch, SrcDepthPitch);
            }

            long ReadFromSubresource([Out] IntPtr% pDstData, unsigned int DstRowPitch, unsigned int DstDepthPitch, unsigned int SrcSubresource, D3D12_BOX% pSrcBox)
            {
                pin_ptr<D3D12_BOX> box = &pSrcBox;
                void* dst;
                long ret = _ref->ReadFromSubresource(dst, DstRowPitch, DstDepthPitch, SrcSubresource, box);
            }

            long ReadFromSubresource([Out] IntPtr pDstData, unsigned int DstRowPitch, unsigned int DstDepthPitch, unsigned int SrcSubresource)
            {
                void* dst;
                long ret = _ref->ReadFromSubresource(dst, DstRowPitch, DstDepthPitch, SrcSubresource, nullptr);
            }

            long GetHeapProperties([Out] D3D12_HEAP_PROPERTIES% pHeapProperties, [Out]  D3D12_HEAP_FLAGS% pHeapFlags)
            {
                ::D3D12_HEAP_PROPERTIES* props;
                ::D3D12_HEAP_FLAGS* flags;

                long ret = _ref->GetHeapProperties(props, flags);

                if (props == nullptr)
                    pHeapProperties = D3D12_HEAP_PROPERTIES();
                else
                    pHeapProperties = *(D3D12_HEAP_PROPERTIES*)props;

                if (flags == nullptr)
                    pHeapFlags = D3D12_HEAP_FLAGS::D3D12_HEAP_FLAG_NONE;
                else
                    pHeapFlags = *(D3D12_HEAP_FLAGS*)flags;

                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12Resource>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Resource);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Resource* () { return (_ref); }
        };
    }
}