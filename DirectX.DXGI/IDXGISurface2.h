#pragma once

#include <dxgi1_2.h>
#include "IDXGISurface1.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISurface2 : IDXGISurface1
        {
            ::IDXGISurface2* _ref;
        public:
            IDXGISurface2(IntPtr pointer) : IDXGISurface1(pointer) { _ref = (::IDXGISurface2*)pointer.ToPointer(); }
            IDXGISurface2(void* pointer) : IDXGISurface1(pointer) { _ref = (::IDXGISurface2*)pointer; }

            long GetResource(Guid riid, [Out]  IntPtr% ppParentResource, [Out]  unsigned int% pSubresourceIndex)
            {
                void** ppOut;
                pin_ptr<unsigned int> pSubresource = &pSubresourceIndex;
                long ret = _ref->GetResource(ToGUID(riid), ppOut, pSubresource);
                ppParentResource = IntPtr(*ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGISurface2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISurface2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISurface2* () { return (_ref); }
        };
    }
}