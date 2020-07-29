#pragma once

#include "DXGI_SWAP_CHAIN_DESC.h"
#include "DXGI_MODE_DESC.h"
#include "DXGI_FORMAT.h"
#include "DXGI_FRAME_STATISTICS.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISwapChain : IDXGIDeviceSubObject
        {
            ::IDXGISwapChain* _ref;
        public:
            IDXGISwapChain(IntPtr pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGISwapChain*)pointer.ToPointer(); }
            IDXGISwapChain(void* pointer) : IDXGIDeviceSubObject(pointer) { _ref = (::IDXGISwapChain*)pointer; }

            long Present(unsigned int SyncInterval, unsigned int Flags)
            {
                return _ref->Present(SyncInterval, Flags);
            }

            long GetBuffer(unsigned int Buffer, Guid riid, [Out] IntPtr% ppSurface)
            {
                void** ppOut;
                long ret = _ref->GetBuffer(Buffer, ToGUID(riid), ppOut);
                ppSurface = IntPtr(*ppOut);
                return ret;
            }

            long SetFullscreenState(bool Fullscreen, IDXGIOutput^ pTarget)
            {
                return _ref->SetFullscreenState(Fullscreen, (::IDXGIOutput*)pTarget);
            }

            long GetFullscreenState([Out] bool% pFullscreen, [Out] IDXGIOutput^% ppTarget)
            {
                void** ppTarg;
                BOOL* pFull;
                long ret = _ref->GetFullscreenState(pFull, (::IDXGIOutput**)ppTarg);
                pFullscreen = pFull;
                ppTarget = gcnew IDXGIOutput(*ppTarg);
                return ret;
            }

            long GetDesc([Out]  DXGI_SWAP_CHAIN_DESC% pDesc)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC> pDes = &pDesc;
                return _ref->GetDesc((::DXGI_SWAP_CHAIN_DESC*)pDes);
            }

            long ResizeBuffers(unsigned int BufferCount, unsigned int Width, unsigned int Height, DXGI_FORMAT NewFormat, unsigned int SwapChainFlags)
            {
                return _ref->ResizeBuffers(BufferCount, Width, Height, (::DXGI_FORMAT)NewFormat, SwapChainFlags);
            }

            long ResizeTarget(DXGI_MODE_DESC% pNewTargetParameters)
            {
                pin_ptr<DXGI_MODE_DESC> pDes = &pNewTargetParameters;
                return _ref->ResizeTarget((::DXGI_MODE_DESC*)pDes);
            }

            long GetContainingOutput([Out] IDXGIOutput^% ppOutput)
            {
                void** ppTarg;
                BOOL* pFull;
                long ret = _ref->GetFullscreenState(pFull, (::IDXGIOutput**)ppTarg);
                ppOutput = gcnew IDXGIOutput(*ppTarg);
                return ret;
            }

            long GetFrameStatistics([Out] DXGI_FRAME_STATISTICS% pStats)
            {
                pin_ptr<DXGI_FRAME_STATISTICS> pStat = &pStats;
                return _ref->GetFrameStatistics((::DXGI_FRAME_STATISTICS*)pStat);
            }

            long GetLastPresentCount([Out] unsigned int% pLastPresentCount)
            {
                pin_ptr<unsigned int> pCount = &pLastPresentCount;
                return _ref->GetLastPresentCount(pCount);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGISwapChain>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISwapChain);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISwapChain* () { return (_ref); }
        };
    }
}