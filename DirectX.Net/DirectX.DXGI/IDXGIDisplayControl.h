#pragma once

#include <dxgi1_2.h>
#include "IDXGIObject.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDisplayControl : public IUnknown
        {
            ::IDXGIDisplayControl* _ref;
        public:
            IDXGIDisplayControl(IntPtr pointer) : IUnknown(pointer) { _ref = (::IDXGIDisplayControl*)pointer.ToPointer(); }
            IDXGIDisplayControl(void* pointer) : IUnknown(pointer) { _ref = (::IDXGIDisplayControl*)pointer; }

            bool IsStereoEnabled()
            {
                return _ref->IsStereoEnabled();
            }

            void SetStereoEnabled(bool enabled)
            {
                return _ref->SetStereoEnabled(enabled);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIDisplayControl>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDisplayControl);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDisplayControl* () { return (_ref); }
        };
    }
}