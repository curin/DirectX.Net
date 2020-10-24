#pragma once

#include <dxgi1_2.h>
#include "IDXGISwapChain.h"
#include "DXGI_SWAP_CHAIN_DESC1.h"
#include "DXGI_PRESENT_PARAMETERS.h"
#include "DXGI_RGBA.h"
#include "DXGI_MODE_ROTATION.h"

namespace DirectX
{
    namespace DXGI
    {
        long DXGISWAPCHAIN1_SETROTATION(::IDXGISwapChain1* swapchain, ::DXGI_MODE_ROTATION* rot) { return swapchain->SetRotation(*rot); }

        public ref class IDXGISwapChain1 : IDXGISwapChain
        {
            ::IDXGISwapChain1* _ref;
        public:
            IDXGISwapChain1(IntPtr pointer) : IDXGISwapChain(pointer) { _ref = (::IDXGISwapChain1*)pointer.ToPointer(); }
            IDXGISwapChain1(void* pointer) : IDXGISwapChain(pointer) { _ref = (::IDXGISwapChain1*)pointer; }

            long GetDesc1([Out] DXGI_SWAP_CHAIN_DESC1% pDesc)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC1> pPtr = &pDesc;
                return _ref->GetDesc1((::DXGI_SWAP_CHAIN_DESC1*)pPtr);
            }

            long GetFullscreenDesc([Out] DXGI_SWAP_CHAIN_FULLSCREEN_DESC% pDesc)
            {
                pin_ptr<DXGI_SWAP_CHAIN_FULLSCREEN_DESC> pPtr = &pDesc;
                return _ref->GetFullscreenDesc((::DXGI_SWAP_CHAIN_FULLSCREEN_DESC*)pPtr);
            }

            long GetHwnd([Out] IntPtr% pHwnd)
            {
                HWND* hwnd;
                long ret = _ref->GetHwnd(hwnd);
                pHwnd = IntPtr(hwnd);
                return ret;
            }

            long GetCoreWindow(Guid refiid, [Out]  IntPtr% ppUnk)
            {
                void** hwnd;
                long ret = _ref->GetCoreWindow(ToGUID(refiid), hwnd);
                ppUnk = IntPtr(*hwnd);
                return ret;
            }

            long Present1(unsigned int SyncInterval, unsigned int PresentFlags, DXGI_PRESENT_PARAMETERS% pPresentParameters)
            {
                pin_ptr<DXGI_PRESENT_PARAMETERS> pPtr = &pPresentParameters;
                return _ref->Present1(SyncInterval, PresentFlags, (::DXGI_PRESENT_PARAMETERS*)pPtr);
            }

            bool IsTemporaryMonoSupported()
            {
                return _ref->IsTemporaryMonoSupported();
            }

            long GetRestrictToOutput([Out]  IDXGIOutput^% ppRestrictToOutput)
            {
                ::IDXGIOutput** pPtr;
                long ret = _ref->GetRestrictToOutput(pPtr);
                ppRestrictToOutput = gcnew IDXGIOutput(*pPtr);
                return ret;
            }

            long SetBackgroundColor(DXGI_RGBA% pColor)
            {
                pin_ptr<DXGI_RGBA> pPtr = &pColor;
                return _ref->SetBackgroundColor((::DXGI_RGBA*)pPtr);
            }

            long GetBackgroundColor([Out]  DXGI_RGBA% pColor)
            {
                pin_ptr<DXGI_RGBA> pPtr = &pColor;
                return _ref->GetBackgroundColor((::DXGI_RGBA*)pPtr);
            }

            long SetRotation(DXGI_MODE_ROTATION Rotation)
            {
                pin_ptr<DXGI_MODE_ROTATION> pPtr = &Rotation;
                return DXGISWAPCHAIN1_SETROTATION(_ref, (::DXGI_MODE_ROTATION*)pPtr);
            }

            long GetRotation([Out]  DXGI_MODE_ROTATION% pRotation)
            {
                pin_ptr<DXGI_MODE_ROTATION> pPtr = &pRotation;
                return _ref->GetRotation((::DXGI_MODE_ROTATION*)pPtr);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGISwapChain1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISwapChain1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISwapChain1* () { return (_ref); }
        };
    }
}