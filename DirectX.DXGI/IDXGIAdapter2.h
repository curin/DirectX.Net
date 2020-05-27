#pragma once

#include <dxgi1_2.h>
#include "IDXGIAdapter1.h"
#include "DXGI_ADAPTER_DESC2.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIAdapter2 : IDXGIAdapter1
        {
            ::IDXGIAdapter2* _ref;
        public:
            IDXGIAdapter2(IntPtr pointer) : IDXGIAdapter1(pointer) { _ref = (::IDXGIAdapter2*)pointer.ToPointer(); }
            IDXGIAdapter2(void* pointer) : IDXGIAdapter1(pointer) { _ref = (::IDXGIAdapter2*)pointer; }

            long GetDesc2([Out]  DXGI_ADAPTER_DESC2% pDesc)
            {
                pin_ptr<DXGI_ADAPTER_DESC2> pDes = &pDesc;
                return _ref->GetDesc2((::DXGI_ADAPTER_DESC2*)pDes);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIAdapter2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIAdapter2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIAdapter2* () { return (_ref); }
        };
    }
}