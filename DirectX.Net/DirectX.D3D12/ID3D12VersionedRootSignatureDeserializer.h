#pragma once

#include "D3D12_VERSIONED_ROOT_SIGNATURE_DESC.h"
#include "D3D_ROOT_SIGNATURE_VERSION.h"
#include "ID3D12Object.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12VersionedRootSignatureDeserializer : public IUnknown
        {
            ::ID3D12VersionedRootSignatureDeserializer* _ref;
        public:
            ID3D12VersionedRootSignatureDeserializer(IntPtr pointer) : IUnknown(pointer) { _ref = (::ID3D12VersionedRootSignatureDeserializer*)pointer.ToPointer(); }
            ID3D12VersionedRootSignatureDeserializer(void* pointer) : IUnknown(pointer) { _ref = (::ID3D12VersionedRootSignatureDeserializer*)pointer; }

            long GetRootSignatureDescAtVersion(D3D_ROOT_SIGNATURE_VERSION convertToVersion, [Out] D3D12_VERSIONED_ROOT_SIGNATURE_DESC% ppDesc)
            {
                const ::D3D12_VERSIONED_ROOT_SIGNATURE_DESC** ppOut;
                long ret = _ref->GetRootSignatureDescAtVersion((::D3D_ROOT_SIGNATURE_VERSION)convertToVersion, ppOut);
                ppDesc = *(D3D12_VERSIONED_ROOT_SIGNATURE_DESC*)ppOut;
                return ret;
            }

            const D3D12_VERSIONED_ROOT_SIGNATURE_DESC GetUnconvertedRootSignatureDesc()
            {
                return *(const D3D12_VERSIONED_ROOT_SIGNATURE_DESC*)_ref->GetUnconvertedRootSignatureDesc();
            }

            virtual GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12VersionedRootSignatureDeserializer>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12VersionedRootSignatureDeserializer);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12VersionedRootSignatureDeserializer* () { return (_ref); }
        };
    }
}