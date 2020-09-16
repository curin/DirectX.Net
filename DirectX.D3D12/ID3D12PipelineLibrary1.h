#pragma once

#include "ID3D12PipelineLibrary.h"
#include "D3D12_PIPELINE_STATE_STREAM_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12PipelineLibrary1 : public ID3D12PipelineLibrary
        {
            ::ID3D12PipelineLibrary1* _ref;
        public:
            ID3D12PipelineLibrary1(IntPtr pointer) : ID3D12PipelineLibrary(pointer) { _ref = (::ID3D12PipelineLibrary1*)pointer.ToPointer(); }
            ID3D12PipelineLibrary1(void* pointer) : ID3D12PipelineLibrary(pointer) { _ref = (::ID3D12PipelineLibrary1*)pointer; }

            long LoadPipeline(String^ pName, D3D12_PIPELINE_STATE_STREAM_DESC% pDesc, Guid riid, [Out] IntPtr% ppPipelineState)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(pName);
                pin_ptr<D3D12_PIPELINE_STATE_STREAM_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->LoadPipeline(wch, (::D3D12_PIPELINE_STATE_STREAM_DESC*)desc, ToGUID(riid), ppOut);

                ppPipelineState = IntPtr(*ppOut);
                return ret;
            }
            
            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12PipelineLibrary1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12PipelineLibrary1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12PipelineLibrary1* () { return (_ref); }
        };
    }
}