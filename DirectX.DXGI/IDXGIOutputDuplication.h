#pragma once

#include <dxgi1_2.h>
#include "IDXGIObject.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutputDuplication : IDXGIObject
        {
            ::IDXGIOutputDuplication* _ref;
        public:
            IDXGIOutputDuplication(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutputDuplication*)pointer.ToPointer(); }
            IDXGIOutputDuplication(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutputDuplication*)pointer; }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutputDuplication>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutputDuplication);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutputDuplication* () { return (_ref); }
        };
    }
}