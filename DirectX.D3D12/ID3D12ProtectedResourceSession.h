#pragma once

#include "ID3D12ProtectedSession.h"
#include "D3D12_PROTECTED_RESOURCE_SESSION_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        ::D3D12_PROTECTED_RESOURCE_SESSION_DESC* ID3D12ProtectedResourceSession_GetDesc(::ID3D12ProtectedResourceSession* _ref) { return &_ref->GetDesc(); }

        public ref class ID3D12ProtectedResourceSession : public ID3D12ProtectedSession
        {
            ::ID3D12ProtectedResourceSession* _ref;
        public:
            ID3D12ProtectedResourceSession(IntPtr pointer) : ID3D12ProtectedSession(pointer) { _ref = (::ID3D12ProtectedResourceSession*)pointer.ToPointer(); }
            ID3D12ProtectedResourceSession(void* pointer) : ID3D12ProtectedSession(pointer) { _ref = (::ID3D12ProtectedResourceSession*)pointer; }

            D3D12_PROTECTED_RESOURCE_SESSION_DESC GetDesc()
            {
                return *(D3D12_PROTECTED_RESOURCE_SESSION_DESC*)ID3D12ProtectedResourceSession_GetDesc(_ref);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12ProtectedResourceSession>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12ProtectedResourceSession);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12ProtectedResourceSession* () { return (_ref); }
        };
    }
}