#pragma once

#include <dxgi1_6.h>
#include "IDXGIAdapter3.h"
#include "IDXGIObject.h"
#include "DXGI_ADAPTER_DESC3.h"

using namespace System;

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIAdapter4 : IDXGIAdapter3
        {
            ::IDXGIAdapter4* _ref;
        public:
            IDXGIAdapter4(IntPtr pointer) : IDXGIAdapter3(pointer) { _ref = (::IDXGIAdapter4*)pointer.ToPointer(); }
            IDXGIAdapter4(void* pointer) : IDXGIAdapter3(pointer) { _ref = (::IDXGIAdapter4*)pointer; }

            long GetDesc3([Out]  DXGI_ADAPTER_DESC3% pDesc)
            {
                pin_ptr<DXGI_ADAPTER_DESC3> desc = &pDesc;
                return _ref->GetDesc3((::DXGI_ADAPTER_DESC3*)desc);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIAdapter4>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIAdapter4);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIAdapter4* () { return (_ref); }
        };
    }
}