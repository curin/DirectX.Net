#pragma once
#include <dxgi1_6.h>
#include "IDXGIFactory6.h"
#include "IDXGIAdapter.h"
#include "IDXGIAdapter1.h"
#include "IDXGIAdapter2.h"
#include "IDXGIAdapter3.h"
#include "IDXGIAdapter4.h"
#include "DXGI_GPU_PREFERENCE.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIFactory7 : IDXGIFactory6
        {
            ::IDXGIFactory7* _ref;
        public:
            IDXGIFactory7(IntPtr pointer) : IDXGIFactory6(pointer) { _ref = (::IDXGIFactory7*)pointer.ToPointer(); }
            IDXGIFactory7(void* pointer) : IDXGIFactory6(pointer) { _ref = (::IDXGIFactory7*)pointer; }

            long RegisterAdaptersChangedEvent(IntPtr hEvent, [Out] unsigned long% pdwCookie)
            {
                pin_ptr<unsigned long> cookie = &pdwCookie;
                return _ref->RegisterAdaptersChangedEvent(hEvent.ToPointer(), cookie);
            }

            long UnregisterAdaptersChangedEvent(unsigned long dwCookie)
            {
                return _ref->UnregisterAdaptersChangedEvent(dwCookie);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIFactory7>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory7);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory7* () { return (_ref); }
        };
    }
}