#pragma once

#include "../IDXGIObject.h"

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public ref class IDXGIDebug : IUnknown
            {
                ::IDXGIDebug* _ref;
            public:
                IDXGIDebug(IntPtr pointer) : IUnknown(pointer) { _ref = (::IDXGIDebug*)pointer.ToPointer(); }
                IDXGIDebug(void* pointer) : IUnknown(pointer) { _ref = (::IDXGIDebug*)pointer; }

                long ReportLiveObjects(Guid apiid, DXGI_DEBUG_RLO_FLAGS flags)
                {
                    return (_ref)->ReportLiveObjects(ToGUID(apiid), (::DXGI_DEBUG_RLO_FLAGS)flags);
                }

                virtual GUID getGUID() override
                {
                    return DirectX::GetGUID<::IDXGIDebug>((_ref));
                }

                static GUID GetGUID()
                {
                    return __uuidof(::IDXGIDebug);
                }

                static Guid GetGuid()
                {
                    return FromGUID(GetGUID());
                }

                explicit operator ::IDXGIDebug*() { return (_ref); }
            };
        }
    }
}