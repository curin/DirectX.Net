#pragma once

#include <dxgi1_2.h>
#include "IDXGIResource.h"
#include "IDXGISurface2.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIResource1 : IDXGIResource
        {
            ::IDXGIResource1* _ref;
        public:
            IDXGIResource1(IntPtr pointer) : IDXGIResource(pointer) { _ref = (::IDXGIResource1*)pointer.ToPointer(); }
            IDXGIResource1(void* pointer) : IDXGIResource(pointer) { _ref = (::IDXGIResource1*)pointer; }

            long CreateSubresourceSurface(unsigned int index, [Out]  IDXGISurface2^% ppSurface)
            {
                ::IDXGISurface2** ppOut;
                long ret = _ref->CreateSubresourceSurface(index, ppOut);
                ppSurface = gcnew IDXGISurface2(*ppOut);
                return ret;
            }

            long CreateSharedHandle(SECURITY_ATTRIBUTES% pAttributes, unsigned long dwAccess, String^ lpName, [Out] IntPtr% pHandle)
            {
                WCHAR* lpNative = (wchar_t*)(Marshal::StringToHGlobalUni(lpName)).ToPointer();
                pin_ptr<SECURITY_ATTRIBUTES> pAtt = &pAttributes;
                void** pOut;
                long ret = _ref->CreateSharedHandle((::SECURITY_ATTRIBUTES*)pAtt, dwAccess, lpNative, pOut);
                Marshal::FreeHGlobal(IntPtr((void*)lpNative));
                pHandle = IntPtr(*pOut);
                return ret;
            }
            long CreateSharedHandle(unsigned long dwAccess, String^ lpName, [Out]  IntPtr% pHandle)
            {
                WCHAR* lpNative = (wchar_t*)(Marshal::StringToHGlobalUni(lpName)).ToPointer();
                void** pOut;
                long ret = _ref->CreateSharedHandle(NULL, dwAccess, lpNative, pOut);
                Marshal::FreeHGlobal(IntPtr((void*)lpNative));
                pHandle = IntPtr(*pOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIResource1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIResource1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIResource1* () { return (_ref); }
        };
    }
}