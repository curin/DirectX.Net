#pragma once

#include "DXGI_SWAP_CHAIN_DESC.h"
#include "IDXGIObject.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIFactory : IDXGIObject
        {
            ::IDXGIFactory* _ref;
        public:
            IDXGIFactory(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIFactory*)pointer.ToPointer(); }
            IDXGIFactory(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIFactory*)pointer; }

            long EnumAdapters(unsigned int Adapter, [Out]  IDXGIAdapter^% ppAdapter)
            {
                void** ppAdapt;
                long ret = _ref->EnumAdapters(Adapter, (::IDXGIAdapter**)ppAdapt);
                ppAdapter = gcnew IDXGIAdapter(*ppAdapt);
                return ret;
            }

            long MakeWindowAssociation(IntPtr WindowHandle, unsigned int Flags)
            {
                return _ref->MakeWindowAssociation((HWND)WindowHandle.ToPointer(), Flags);
            }

            long GetWindowAssociation([Out] IntPtr% pWindowHandle)
            {
                void** pOut;
                long ret = _ref->GetWindowAssociation((HWND*)pOut);
                pWindowHandle = IntPtr(*pOut);
                return ret;
            }

            long CreateSwapChain(IUnknown^ pDevice, DXGI_SWAP_CHAIN_DESC% pDesc, [Out]  IDXGISwapChain^% ppSwapChain)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC> pDes = &pDesc;
                void** ppOut;
                ::IUnknown* ppUn = (::IUnknown*)pDevice->Pointer.ToPointer();
                long ret = _ref->CreateSwapChain(ppUn, (::DXGI_SWAP_CHAIN_DESC*)pDes, (::IDXGISwapChain**)ppOut);
                ppSwapChain = gcnew IDXGISwapChain(*ppOut);
                return ret;
            }

            long CreateSoftwareAdapter(IntPtr Module, [Out] IDXGIAdapter^% ppAdapter)
            {
                void** ppOut;
                long ret = _ref->CreateSoftwareAdapter((HMODULE)Module.ToPointer(), (::IDXGIAdapter**)ppOut);
                ppAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIFactory>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory* () { return (_ref); }
        };
    }
}