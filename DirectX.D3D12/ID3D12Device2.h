#pragma once

#include "ID3D12Device1.h"
#include "D3D12_PIPELINE_STATE_STREAM_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12Device2 : public ID3D12Device1
        {
            ::ID3D12Device2* _ref;
        public:
            ID3D12Device2(IntPtr pointer) : ID3D12Device1(pointer) { _ref = (::ID3D12Device2*)pointer.ToPointer(); }
            ID3D12Device2(void* pointer) : ID3D12Device1(pointer) { _ref = (::ID3D12Device2*)pointer; }

            long CreatePipelineState(D3D12_PIPELINE_STATE_STREAM_DESC% pDesc, Guid riid, [Out]IntPtr% ppPipelineState)
            {
                void** ppOut;
                pin_ptr<D3D12_PIPELINE_STATE_STREAM_DESC> desc = &pDesc;

                long ret = _ref->CreatePipelineState((::D3D12_PIPELINE_STATE_STREAM_DESC*)desc, ToGUID(riid), ppOut);

                ppPipelineState = IntPtr(*ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Device2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Device2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Device2* () { return (_ref); }
        };
    }
}