#pragma once

#include "IDXGIDeviceSubObject.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIKeyedMutex : IDXGIDeviceSubObject
        {
            ::IDXGIKeyedMutex* _ref;
        public:
            IDXGIKeyedMutex(IntPtr pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGIKeyedMutex*)pointer.ToPointer(); }
            IDXGIKeyedMutex(void* pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGIKeyedMutex*)pointer; }

            long AcquireSync(unsigned long long Key, unsigned long dwMilliseconds)
            {
                return (_ref)->AcquireSync(Key, dwMilliseconds);
            }

            long ReleaseSync(unsigned long long Key)
            {
                return (_ref)->ReleaseSync(Key);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIKeyedMutex>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIKeyedMutex);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIKeyedMutex* () { return (_ref); }
        };
    }
}