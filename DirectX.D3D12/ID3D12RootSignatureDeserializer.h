#pragma once

#include "D3D12_ROOT_SIGNATURE_DESC.h"
#include "ID3D12Object.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12RootSignatureDeserializer : public IUnknown
        {
            ::ID3D12RootSignatureDeserializer* _ref;
        public:
            ID3D12RootSignatureDeserializer(IntPtr pointer) : IUnknown(pointer) { _ref = (::ID3D12RootSignatureDeserializer*)pointer.ToPointer(); }
            ID3D12RootSignatureDeserializer(void* pointer) : IUnknown(pointer) { _ref = (::ID3D12RootSignatureDeserializer*)pointer; }

            const D3D12_ROOT_SIGNATURE_DESC GetRootSignatureDesc()
            {
                return *(const D3D12_ROOT_SIGNATURE_DESC*)_ref->GetRootSignatureDesc();
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12RootSignatureDeserializer>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12RootSignatureDeserializer);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12RootSignatureDeserializer* () { return (_ref); }
        };
    }
}