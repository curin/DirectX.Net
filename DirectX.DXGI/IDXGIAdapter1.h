#pragma once

#include "IDXGIAdapter.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIAdapter1 : IDXGIAdapter
        {
            ::IDXGIAdapter1* _ref;
        public:
            IDXGIAdapter1(IntPtr pointer) : IDXGIAdapter(pointer) { _ref = (::IDXGIAdapter1*)pointer.ToPointer(); }
            IDXGIAdapter1(void* pointer) : IDXGIAdapter(pointer) { _ref = (::IDXGIAdapter1*)pointer; }

            long GetDesc1([Out]  DXGI_ADAPTER_DESC1% pDesc)
            {
                pin_ptr<DXGI_ADAPTER_DESC1> pDes = &pDesc;
                return _ref->GetDesc1((::DXGI_ADAPTER_DESC1*)pDes);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIAdapter1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIAdapter1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIAdapter1* () { return (_ref); }
        };
    }
}