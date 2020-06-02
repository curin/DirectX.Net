#pragma once

#include "ID3D12Object.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12DeviceChild : public ID3D12Object
        {
            ::ID3D12DeviceChild* _ref;
        public:
            ID3D12DeviceChild(IntPtr pointer) : ID3D12Object(pointer) { _ref = (::ID3D12DeviceChild*)pointer.ToPointer(); }
            ID3D12DeviceChild(void* pointer) : ID3D12Object(pointer) { _ref = (::ID3D12DeviceChild*)pointer; }

            long GetDevice(Guid riid, [Out]  IntPtr% ppvDevice)
            {
                void** ppOut;
                long ret = _ref->GetDevice(ToGUID(riid), ppOut);
                ppvDevice = IntPtr(*ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12DeviceChild>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12DeviceChild);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12DeviceChild* () { return (_ref); }
        };
    }
}