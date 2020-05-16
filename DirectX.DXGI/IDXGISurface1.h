#pragma once

#include "IDXGIDeviceSubObject.h"
#include "IDXGISurface.h"
#include "DXGI_MAPPED_RECT.h"
#include "DXGI_SURFACE_DESC.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISurface1 : IDXGISurface
        {
            ::IDXGISurface1* _ref;
        public:
            IDXGISurface1(IntPtr pointer) : IDXGISurface(pointer) { _ref = (::IDXGISurface1*)pointer.ToPointer(); }
            IDXGISurface1(void* pointer) : IDXGISurface(pointer) { _ref = (::IDXGISurface1*)pointer; }

            long GetDC(bool Discard, [Out]  IntPtr% phdc)
            {
                HDC* ph;
                long ret = (_ref)->GetDC(Discard, ph);
                phdc = IntPtr((void*)*ph);
                return ret;
            }

            long ReleaseDC(RECT% pDirtyRect)
            {
                pin_ptr<RECT> pR = &pDirtyRect;
                return (_ref)->ReleaseDC((::RECT*)pR);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGISurface1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISurface1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISurface1* () { return (_ref); }
        };
    }
}