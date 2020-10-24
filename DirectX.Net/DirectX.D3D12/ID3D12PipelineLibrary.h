#pragma once

#include "ID3D12DeviceChild.h"
#include "D3D12_GRAPHICS_PIPELINE_STATE_DESC.h"
#include "D3D12_COMPUTE_PIPELINE_STATE_DESC.h"
#include "ID3D12PipelineState.h"
#include <vcclr.h>

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12PipelineLibrary : public ID3D12DeviceChild
        {
            ::ID3D12PipelineLibrary* _ref;
        public:
            ID3D12PipelineLibrary(IntPtr pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12PipelineLibrary*)pointer.ToPointer(); }
            ID3D12PipelineLibrary(void* pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12PipelineLibrary*)pointer; }

            long StorePipeline(String^ pName, ID3D12PipelineState^ pPipeline)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(pName);

                return _ref->StorePipeline(wch, (::ID3D12PipelineState*)pPipeline->Pointer.ToPointer());
            }

            long StorePipeline(ID3D12PipelineState^ pPipeline)
            {
                return _ref->StorePipeline(nullptr, (::ID3D12PipelineState*)pPipeline->Pointer.ToPointer());
            }

            long LoadGraphicsPipeline(String^ pName, D3D12_GRAPHICS_PIPELINE_STATE_DESC% pDesc, Guid riid, [Out] IntPtr% ppPipelineState)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(pName);
                pin_ptr<D3D12_GRAPHICS_PIPELINE_STATE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->LoadGraphicsPipeline(wch, (::D3D12_GRAPHICS_PIPELINE_STATE_DESC*)desc, ToGUID(riid), ppOut);

                ppPipelineState = IntPtr(*ppOut);
                return ret;
            }

            long LoadComputePipeline(String^ pName, D3D12_COMPUTE_PIPELINE_STATE_DESC% pDesc, Guid riid, [Out] IntPtr% ppPipelineState)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(pName);
                pin_ptr<D3D12_COMPUTE_PIPELINE_STATE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->LoadComputePipeline(wch, (::D3D12_COMPUTE_PIPELINE_STATE_DESC*)desc, ToGUID(riid), ppOut);

                ppPipelineState = IntPtr(*ppOut);
                return ret;
            }

            size_t GetSerializedSize()
            {
                return _ref->GetSerializedSize();
            }

            long Serialize(IntPtr pData, size_t DataSizeInBytes)
            {
                return _ref->Serialize(pData.ToPointer(), DataSizeInBytes);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12PipelineLibrary>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12PipelineLibrary);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12PipelineLibrary* () { return (_ref); }
        };
    }
}