#pragma once

#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12PipelineState : public ID3D12Pageable
        {
            ::ID3D12PipelineState* _ref;
        public:
            ID3D12PipelineState(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12PipelineState*)pointer.ToPointer(); }
            ID3D12PipelineState(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12PipelineState*)pointer; }

            long GetCachedBlob([Out] ID3DBlob^% ppBlob)
            {
                ::ID3DBlob** ppOut;
                long ret = _ref->GetCachedBlob(ppOut);
                ppBlob = gcnew ID3DBlob(*ppOut);
                return ret;
            }
            
            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12PipelineState>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12PipelineState);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12PipelineState* () { return (_ref); }
        };
    }
}