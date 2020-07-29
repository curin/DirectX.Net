#pragma once

#include "IDXGIDeviceSubObject.h"
#include "DXGI_MAPPED_RECT.h"
#include "DXGI_SURFACE_DESC.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISurface : IDXGIDeviceSubObject
        {
            ::IDXGISurface* _ref;
        public:
            IDXGISurface(IntPtr pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGISurface*)pointer.ToPointer(); }
            IDXGISurface(void* pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGISurface*)pointer; }

            long GetDesc([Out] DXGI_SURFACE_DESC% pDesc)
            {
                pin_ptr<DXGI_SURFACE_DESC> pDes = &pDesc;
                return (_ref)->GetDesc((::DXGI_SURFACE_DESC*)pDes);
            }

            long Map([Out]  DXGI_MAPPED_RECT% pLockedRect, unsigned int MapFlags)
            {
                pin_ptr<DXGI_MAPPED_RECT> pRect = &pLockedRect;
                return (_ref)->Map((::DXGI_MAPPED_RECT*)pRect, MapFlags);
            }

            long Unmap()
            {
                return (_ref)->Unmap();
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGISurface>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISurface);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISurface* () { return (_ref); }
        };
    }
}