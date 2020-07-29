#pragma once
#include <dxgi1_5.h>
#include "IDXGISwapChain3.h"
#include "DXGI_HDR_METADATA_TYPE.h"
#include "DXGI_HDR_METADATA_HDR10PLUS.h"
#include "DXGI_HDR_METADATA_HDR10.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISwapChain4 : IDXGISwapChain3
        {
            ::IDXGISwapChain4* _ref;
        public:
            IDXGISwapChain4(IntPtr pointer) : IDXGISwapChain3(pointer) { _ref = (::IDXGISwapChain4*)pointer.ToPointer(); }
            IDXGISwapChain4(void* pointer) : IDXGISwapChain3(pointer) { _ref = (::IDXGISwapChain4*)pointer; }

            long SetHDRMetaData(DXGI_HDR_METADATA_TYPE Type, unsigned int Size, IntPtr pMetaData)
            {
                return _ref->SetHDRMetaData((::DXGI_HDR_METADATA_TYPE)Type, Size, pMetaData.ToPointer());
            }

            long SetHDRMetaData(unsigned int Size, DXGI_HDR_METADATA_HDR10PLUS pMetaData)
            {
                pin_ptr<DXGI_HDR_METADATA_HDR10PLUS> metadata = &pMetaData;
                return _ref->SetHDRMetaData(::DXGI_HDR_METADATA_TYPE::DXGI_HDR_METADATA_TYPE_HDR10PLUS, sizeof(pMetaData), metadata);
            }

            long SetHDRMetaData(unsigned int Size, DXGI_HDR_METADATA_HDR10 pMetaData)
            {
                pin_ptr<DXGI_HDR_METADATA_HDR10> metadata = &pMetaData;
                return _ref->SetHDRMetaData(::DXGI_HDR_METADATA_TYPE::DXGI_HDR_METADATA_TYPE_HDR10, sizeof(pMetaData), metadata);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGISwapChain3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISwapChain3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISwapChain3* () { return (_ref); }
        };
    }
}