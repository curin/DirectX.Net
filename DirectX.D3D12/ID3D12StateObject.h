#pragma once

#include "ID3D12DeviceChild.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12StateObject : public ID3D12DeviceChild
        {
            ::ID3D12StateObject* _ref;
        public:
            ID3D12StateObject(IntPtr pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12StateObject*)pointer.ToPointer(); }
            ID3D12StateObject(void* pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12StateObject*)pointer; }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12StateObject>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12StateObject);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12StateObject* () { return (_ref); }
        };
    }
}