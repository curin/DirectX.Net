#pragma once

#include "D3D12_SUBRESOURCE_RANGE_UINT64.h"
#include "D3D12_SAMPLE_POSITION.h"
#include "D3D12_RESOLVE_MODE.h"
#include "ID3D12GraphicsCommandList.h"
#include "ID3D12Resource.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12GraphicsCommandList1 : public ID3D12GraphicsCommandList
        {
            ::ID3D12GraphicsCommandList1* _ref;
        public:
            ID3D12GraphicsCommandList1(IntPtr pointer) : ID3D12GraphicsCommandList(pointer) { _ref = (::ID3D12GraphicsCommandList1*)pointer.ToPointer(); }
            ID3D12GraphicsCommandList1(void* pointer) : ID3D12GraphicsCommandList(pointer) { _ref = (::ID3D12GraphicsCommandList1*)pointer; }

            void AtomicCopyBufferUINT(ID3D12Resource^ pDstBuffer, unsigned long long DstOffset, ID3D12Resource^ pSrcBuffer, unsigned long long SrcOffset,
                unsigned int Dependencies, array<ID3D12Resource^>^ ppDependentResources, array<D3D12_SUBRESOURCE_RANGE_UINT64>^ pDependentSubresourceRanges)
            {
                pin_ptr<D3D12_SUBRESOURCE_RANGE_UINT64> ranges = &pDependentSubresourceRanges[0];
                ::ID3D12Resource** resources = new ::ID3D12Resource*[ppDependentResources->Length];

                for (int i = 0; i < ppDependentResources->Length; i++)
                    resources[i] = (::ID3D12Resource*)ppDependentResources[i]->Pointer.ToPointer();

                _ref->AtomicCopyBufferUINT((::ID3D12Resource*)pDstBuffer->Pointer.ToPointer(), DstOffset, (::ID3D12Resource*)pSrcBuffer->Pointer.ToPointer(), SrcOffset,
                    Dependencies, resources, (::D3D12_SUBRESOURCE_RANGE_UINT64*)ranges);
            }

            void AtomicCopyBufferUINT(ID3D12Resource^ pDstBuffer, unsigned long long DstOffset, ID3D12Resource^ pSrcBuffer, unsigned long long SrcOffset, 
                array<ID3D12Resource^>^ ppDependentResources, array<D3D12_SUBRESOURCE_RANGE_UINT64>^ pDependentSubresourceRanges)
            {
                pin_ptr<D3D12_SUBRESOURCE_RANGE_UINT64> ranges = &pDependentSubresourceRanges[0];
                ::ID3D12Resource** resources = new ::ID3D12Resource * [ppDependentResources->Length];

                for (int i = 0; i < ppDependentResources->Length; i++)
                    resources[i] = (::ID3D12Resource*)ppDependentResources[i]->Pointer.ToPointer();

                _ref->AtomicCopyBufferUINT((::ID3D12Resource*)pDstBuffer->Pointer.ToPointer(), DstOffset, (::ID3D12Resource*)pSrcBuffer->Pointer.ToPointer(), SrcOffset,
                    ppDependentResources->Length, resources, (::D3D12_SUBRESOURCE_RANGE_UINT64*)ranges);
            }

            void AtomicCopyBufferUINT(ID3D12Resource^ pDstBuffer,  long long DstOffset, ID3D12Resource^ pSrcBuffer, unsigned long long SrcOffset, unsigned int Dependencies,
                IntPtr ppDependentResources, array<D3D12_SUBRESOURCE_RANGE_UINT64>^ pDependentSubresourceRanges)
            {
                pin_ptr<D3D12_SUBRESOURCE_RANGE_UINT64> ranges = &pDependentSubresourceRanges[0];

                _ref->AtomicCopyBufferUINT((::ID3D12Resource*)pDstBuffer->Pointer.ToPointer(), DstOffset, (::ID3D12Resource*)pSrcBuffer->Pointer.ToPointer(), SrcOffset,
                    Dependencies, (::ID3D12Resource**)ppDependentResources.ToPointer(), (::D3D12_SUBRESOURCE_RANGE_UINT64*)ranges);
            }

            void AtomicCopyBufferUINT64(ID3D12Resource^ pDstBuffer, unsigned long long DstOffset, ID3D12Resource^ pSrcBuffer, unsigned long long SrcOffset, 
                unsigned int Dependencies, array<ID3D12Resource^>^ ppDependentResources, array<D3D12_SUBRESOURCE_RANGE_UINT64>^ pDependentSubresourceRanges)
            {
                pin_ptr<D3D12_SUBRESOURCE_RANGE_UINT64> ranges = &pDependentSubresourceRanges[0];
                ::ID3D12Resource** resources = new ::ID3D12Resource * [ppDependentResources->Length];

                for (int i = 0; i < ppDependentResources->Length; i++)
                    resources[i] = (::ID3D12Resource*)ppDependentResources[i]->Pointer.ToPointer();

                _ref->AtomicCopyBufferUINT64((::ID3D12Resource*)pDstBuffer->Pointer.ToPointer(), DstOffset, (::ID3D12Resource*)pSrcBuffer->Pointer.ToPointer(), SrcOffset,
                    Dependencies, resources, (::D3D12_SUBRESOURCE_RANGE_UINT64*)ranges);
            }

            void AtomicCopyBufferUINT64(ID3D12Resource^ pDstBuffer, unsigned long long DstOffset, ID3D12Resource^ pSrcBuffer, unsigned long long SrcOffset,
                array<ID3D12Resource^>^ ppDependentResources, array<D3D12_SUBRESOURCE_RANGE_UINT64>^ pDependentSubresourceRanges)
            {
                pin_ptr<D3D12_SUBRESOURCE_RANGE_UINT64> ranges = &pDependentSubresourceRanges[0];
                ::ID3D12Resource** resources = new ::ID3D12Resource * [ppDependentResources->Length];

                for (int i = 0; i < ppDependentResources->Length; i++)
                    resources[i] = (::ID3D12Resource*)ppDependentResources[i]->Pointer.ToPointer();

                _ref->AtomicCopyBufferUINT64((::ID3D12Resource*)pDstBuffer->Pointer.ToPointer(), DstOffset, (::ID3D12Resource*)pSrcBuffer->Pointer.ToPointer(), SrcOffset,
                    ppDependentResources->Length, resources, (::D3D12_SUBRESOURCE_RANGE_UINT64*)ranges);
            }

            void AtomicCopyBufferUINT64(ID3D12Resource^ pDstBuffer, unsigned long long DstOffset, ID3D12Resource^ pSrcBuffer, unsigned long long SrcOffset, unsigned int Dependencies,
                IntPtr ppDependentResources, array<D3D12_SUBRESOURCE_RANGE_UINT64>^ pDependentSubresourceRanges)
            {
                pin_ptr<D3D12_SUBRESOURCE_RANGE_UINT64> ranges = &pDependentSubresourceRanges[0];

                _ref->AtomicCopyBufferUINT((::ID3D12Resource*)pDstBuffer->Pointer.ToPointer(), DstOffset, (::ID3D12Resource*)pSrcBuffer->Pointer.ToPointer(), SrcOffset,
                    Dependencies, (::ID3D12Resource**)ppDependentResources.ToPointer(), (::D3D12_SUBRESOURCE_RANGE_UINT64*)ranges);
            }

            void OMSetDepthBounds(float Min,float Max)
            {
                _ref->OMSetDepthBounds(Min, Max);
            }

            void SetSamplePositions(unsigned int NumSamplesPerPixel, unsigned int NumPixels, array<D3D12_SAMPLE_POSITION>^ pSamplePositions)
            {
                pin_ptr<D3D12_SAMPLE_POSITION> positions = &pSamplePositions[0];
                _ref->SetSamplePositions(NumSamplesPerPixel, NumPixels, (::D3D12_SAMPLE_POSITION*)positions);
            }

            void ResolveSubresourceRegion(ID3D12Resource^ pDstResource, unsigned int DstSubresource, unsigned int DstX, unsigned int DstY, ID3D12Resource^ pSrcResource,
                unsigned int SrcSubresource, RECT% pSrcRect, DXGI::DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode)
            {
                pin_ptr<RECT> rect = &pSrcRect;
                _ref->ResolveSubresourceRegion((::ID3D12Resource*)pDstResource->Pointer.ToPointer(), DstSubresource, DstX, DstY, (::ID3D12Resource*)pSrcResource->Pointer.ToPointer(),
                    SrcSubresource, (D3D12_RECT*)rect, (::DXGI_FORMAT) Format, (::D3D12_RESOLVE_MODE)ResolveMode);
            }

            void ResolveSubresourceRegion(ID3D12Resource^ pDstResource, unsigned int DstSubresource, unsigned int DstX, unsigned int DstY, ID3D12Resource^ pSrcResource,
                unsigned int SrcSubresource, DXGI::DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode)
            {
                _ref->ResolveSubresourceRegion((::ID3D12Resource*)pDstResource->Pointer.ToPointer(), DstSubresource, DstX, DstY, (::ID3D12Resource*)pSrcResource->Pointer.ToPointer(),
                    SrcSubresource, nullptr, (::DXGI_FORMAT) Format, (::D3D12_RESOLVE_MODE)ResolveMode);
            }

            void SetViewInstanceMask(unsigned int Mask)
            {
                _ref->SetViewInstanceMask(Mask);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12GraphicsCommandList1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12GraphicsCommandList1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12GraphicsCommandList1* () { return (_ref); }
        };
    }
}