#pragma once

#include "IDXGIObject.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDeviceSubObject : IDXGIObject
        {
            ::IDXGIDeviceSubObject* _ref;
        public:
            IDXGIDeviceSubObject(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIDeviceSubObject*)pointer.ToPointer(); }
            IDXGIDeviceSubObject(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIDeviceSubObject*)pointer; }

            long GetDevice(Guid riid, [Out] IntPtr% ppDevice)
            {
                void** ppPar;
                long ret = (_ref)->GetDevice(ToGUID(riid), ppPar);
                ppDevice = IntPtr(*ppPar);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIDeviceSubObject>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDeviceSubObject);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDeviceSubObject* () { return (_ref); }
        };
    }
}