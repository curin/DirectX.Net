#pragma once
#include <dxgi1_3.h>
#include "IDXGIDevice2.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDevice3 : IDXGIDevice2
        {
            ::IDXGIDevice3* _ref;
        public:
            IDXGIDevice3(IntPtr pointer) : IDXGIDevice2(pointer) { _ref = (::IDXGIDevice3*)pointer.ToPointer(); }
            IDXGIDevice3(void* pointer) : IDXGIDevice2(pointer) { _ref = (::IDXGIDevice3*)pointer; }

            void Trim()
            {
                _ref->Trim();
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIDevice3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDevice3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDevice3* () { return (_ref); }
        };
    }
}