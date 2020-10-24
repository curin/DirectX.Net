#pragma once

#include "ID3D12DeviceChild.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12ProtectedSession : public ID3D12DeviceChild
        {
            ::ID3D12ProtectedSession* _ref;
        public:
            ID3D12ProtectedSession(IntPtr pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12ProtectedSession*)pointer.ToPointer(); }
            ID3D12ProtectedSession(void* pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12ProtectedSession*)pointer; }

            long GetStatusFence(Guid riid, [Out] IntPtr% ppFence)
            {
                void** ppOut;

                long ret = _ref->GetStatusFence(ToGUID(riid), ppOut);

                ppFence = IntPtr(*ppOut);
                return ret;
            }

            D3D12_PROTECTED_SESSION_STATUS GetSessionStatus()
            {
                return (D3D12_PROTECTED_SESSION_STATUS)_ref->GetSessionStatus();
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12ProtectedSession>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12ProtectedSession);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12ProtectedSession* () { return (_ref); }
        };
    }
}