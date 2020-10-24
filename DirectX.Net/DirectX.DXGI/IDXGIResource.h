#pragma once

#include "IDXGIDeviceSubObject.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIResource : IDXGIDeviceSubObject
        {
            ::IDXGIResource* _ref;
        public:
            IDXGIResource(IntPtr pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGIResource*)pointer.ToPointer(); }
            IDXGIResource(void* pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGIResource*)pointer; }

            long GetSharedHandle([Out] IntPtr% pSharedHandle)
            {
                void** pHandle;
                long ret = (_ref)->GetSharedHandle(pHandle);
                pSharedHandle = IntPtr(pHandle);
                return ret;
            }

            long GetUsage([Out] unsigned int% pUsage)
            {
                pin_ptr<unsigned int> pP = &pUsage;
                return (_ref)->GetUsage(pP);
            }

            long SetEvictionPriority(unsigned int EvictionPriority)
            {
                return (_ref)->SetEvictionPriority(EvictionPriority);
            }

            long GetEvictionPriority([Out] unsigned int% pEvictionPriority)
            {
                pin_ptr<unsigned int> pP = &pEvictionPriority;
                return (_ref)->GetEvictionPriority(pP);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIResource>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIResource);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIResource* () { return (_ref); }
        };
    }
}