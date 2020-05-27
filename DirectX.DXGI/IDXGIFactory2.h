#pragma once

#include <dxgi1_2.h>
#include "IDXGIFactory1.h"
#include "DXGI_SWAP_CHAIN_DESC1.h"
#include "DXGI_SWAP_CHAIN_FULLSCREEN_DESC.h"
#include "IDXGIOutput.h"
#include "IDXGISwapChain1.h"

namespace DirectX
{
    namespace DXGI
    {
        long IDXGIFactory2_CreateSwapChainForHwnd(::IDXGIFactory2* _ref, ::IUnknown* pDevice, ::HWND* hWnd, ::DXGI_SWAP_CHAIN_DESC1* pDesc, ::DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
            ::IDXGIOutput* pRestrictToOutput, ::IDXGISwapChain1** ppSwapChain)
        {
            return _ref->CreateSwapChainForHwnd(pDevice, *hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
        }

        long IDXGIFactory2_RegisterStereoStatusWindow(::IDXGIFactory2* _ref, ::HWND* WindowHandle, unsigned int wMsg, unsigned long* pdwCookie) { return _ref->RegisterStereoStatusWindow(*WindowHandle, wMsg, pdwCookie); }
        long IDXGIFactory2_RegisterOcclusionStatusWindow(::IDXGIFactory2* _ref, ::HWND* WindowHandle, unsigned int wMsg, unsigned long* pdwCookie) { return _ref->RegisterOcclusionStatusWindow(*WindowHandle, wMsg, pdwCookie); }

        public ref class IDXGIFactory2 : IDXGIFactory1
        {
            ::IDXGIFactory2* _ref;
        public:
            IDXGIFactory2(IntPtr pointer) : IDXGIFactory1(pointer) { _ref = (::IDXGIFactory2*)pointer.ToPointer(); }
            IDXGIFactory2(void* pointer) : IDXGIFactory1(pointer) { _ref = (::IDXGIFactory2*)pointer; }

            bool IsWindowedStereoEnabled()
            {
                return _ref->IsWindowedStereoEnabled();
            }

            long CreateSwapChainForHwnd(IUnknown^ pDevice, IntPtr hWnd, DXGI_SWAP_CHAIN_DESC1% pDesc, DXGI_SWAP_CHAIN_FULLSCREEN_DESC% pFullscreenDesc,
                IDXGIOutput^ pRestrictToOutput, [Out] IDXGISwapChain1^% ppSwapChain)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC1> pSwapDesc = &pDesc;
                pin_ptr<DXGI_SWAP_CHAIN_FULLSCREEN_DESC> pFullDesc = &pFullscreenDesc;
                ::IDXGISwapChain1** ppOut;
                long ret = IDXGIFactory2_CreateSwapChainForHwnd(_ref, (::IUnknown*)pDevice->Pointer.ToPointer(), (HWND*)hWnd.ToPointer(), (::DXGI_SWAP_CHAIN_DESC1*)pSwapDesc,
                    (::DXGI_SWAP_CHAIN_FULLSCREEN_DESC*)pFullDesc, (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGISwapChain1(ppOut);
                return ret;
            }

            long CreateSwapChainForHwnd(IUnknown^ pDevice, IntPtr hWnd, DXGI_SWAP_CHAIN_DESC1% pDesc, IDXGIOutput^ pRestrictToOutput, [Out] IDXGISwapChain1^% ppSwapChain)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC1> pSwapDesc = &pDesc;
                ::IDXGISwapChain1** ppOut;
                long ret = IDXGIFactory2_CreateSwapChainForHwnd(_ref, (::IUnknown*)pDevice->Pointer.ToPointer(), (HWND*)hWnd.ToPointer(), (::DXGI_SWAP_CHAIN_DESC1*)pSwapDesc, NULL,
                    (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGISwapChain1(ppOut);
                return ret;
            }

            long CreateSwapChainForCoreWindow(IUnknown^ pDevice, IUnknown^ pWindow, DXGI_SWAP_CHAIN_DESC1% pDesc, IDXGIOutput^ pRestrictToOutput, [Out] IDXGISwapChain1^% ppSwapChain)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC1> pSwapDesc = &pDesc;
                ::IDXGISwapChain1** ppOut;
                long ret = _ref->CreateSwapChainForCoreWindow((::IUnknown*)pDevice->Pointer.ToPointer(), (::IUnknown*)pWindow->Pointer.ToPointer(), (::DXGI_SWAP_CHAIN_DESC1*)pSwapDesc, (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGISwapChain1(ppOut);
                return ret;
            }

            long GetSharedResourceAdapterLuid(IntPtr hResource, [Out] LUID% pLuid)
            {
                pin_ptr<LUID> Luid = &pLuid;
                return _ref->GetSharedResourceAdapterLuid(hResource.ToPointer(), (::LUID*)Luid);
            }

            long RegisterStereoStatusWindow(IntPtr WindowHandle, unsigned int wMsg, [Out] unsigned long% pdwCookie)
            {
                pin_ptr<unsigned long> pCookie = &pdwCookie;
                return IDXGIFactory2_RegisterStereoStatusWindow(_ref, (HWND*)WindowHandle.ToPointer(), wMsg, pCookie);
            }

            long RegisterStereoStatusEvent(IntPtr hEvent, [Out] unsigned long% pdwCookie)
            {
                pin_ptr<unsigned long> pCookie = &pdwCookie;
                return _ref->RegisterStereoStatusEvent(hEvent.ToPointer(), pCookie);
            }

            void UnregisterStereoStatus(unsigned long dwCookie)
            {
                _ref->UnregisterStereoStatus(dwCookie);
            }

            long RegisterOcclusionStatusWindow(IntPtr WindowHandle, unsigned int wMsg, [Out] unsigned long% pdwCookie)
            {
                pin_ptr<unsigned long> pCookie = &pdwCookie;
                return IDXGIFactory2_RegisterOcclusionStatusWindow(_ref, (HWND*)WindowHandle.ToPointer(), wMsg, pCookie);
            }

            long RegisterOcclusionStatusEvent(IntPtr hEvent, [Out] unsigned long% pdwCookie)
            {
                pin_ptr<unsigned long> pCookie = &pdwCookie;
                return _ref->RegisterOcclusionStatusEvent(hEvent.ToPointer(), pCookie);
            }

            void UnregisterOcclusionStatus(unsigned long dwCookie)
            {
                _ref->UnregisterOcclusionStatus(dwCookie);
            }

            long CreateSwapChainForComposition(IUnknown^ pDevice, DXGI_SWAP_CHAIN_DESC1% pDesc, IDXGIOutput^ pRestrictToOutput, [Out] IDXGISwapChain1^% ppSwapChain)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC1> pSwapDesc = &pDesc;
                ::IDXGISwapChain1** ppOut;
                long ret = _ref->CreateSwapChainForComposition((::IUnknown*)pDevice->Pointer.ToPointer(), (::DXGI_SWAP_CHAIN_DESC1*)pSwapDesc, (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGISwapChain1(ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIFactory2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory2* () { return (_ref); }
        };
    }
}