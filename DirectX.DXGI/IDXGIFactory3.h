#pragma once
#include <dxgi1_3.h>
#include "IDXGIFactory2.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIFactory3 : IDXGIFactory2
        {
            ::IDXGIFactory3* _ref;
        public:
            IDXGIFactory3(IntPtr pointer) : IDXGIFactory2(pointer) { _ref = (::IDXGIFactory3*)pointer.ToPointer(); }
            IDXGIFactory3(void* pointer) : IDXGIFactory2(pointer) { _ref = (::IDXGIFactory3*)pointer; }

            unsigned int GetCreationFlags()
            {
                return _ref->GetCreationFlags();
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIFactory3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory3* () { return (_ref); }
        };
    }
}