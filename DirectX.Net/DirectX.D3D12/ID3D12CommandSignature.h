#pragma once

#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12CommandSignature : public ID3D12Pageable
        {
            ::ID3D12CommandSignature* _ref;
        public:
            ID3D12CommandSignature(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12CommandSignature*)pointer.ToPointer(); }
            ID3D12CommandSignature(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12CommandSignature*)pointer; }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12CommandSignature>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12CommandSignature);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12CommandSignature* () { return (_ref); }
        };
    }
}