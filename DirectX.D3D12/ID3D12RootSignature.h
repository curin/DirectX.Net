#pragma once

#include "ID3D12DeviceChild.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12RootSignature : public ID3D12DeviceChild
        {
            ::ID3D12RootSignature* _ref;
        public:
            ID3D12RootSignature(IntPtr pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12RootSignature*)pointer.ToPointer(); }
            ID3D12RootSignature(void* pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12RootSignature*)pointer; }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12RootSignature>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12RootSignature);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12RootSignature* () { return (_ref); }
        };
    }
}