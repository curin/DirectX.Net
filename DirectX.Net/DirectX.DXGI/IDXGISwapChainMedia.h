#pragma once

#include <dxgi1_3.h>
#include "IDXGIObject.h"

#include "DXGI_FRAME_STATISTICS_MEDIA.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISwapChainMedia : public IUnknown
        {
            ::IDXGISwapChainMedia* _ref;
        public:
            IDXGISwapChainMedia(IntPtr pointer) : IUnknown(pointer) { _ref = (::IDXGISwapChainMedia*)pointer.ToPointer(); }
            IDXGISwapChainMedia(void* pointer) : IUnknown(pointer) { _ref = (::IDXGISwapChainMedia*)pointer; }

            long GetFrameStatisticsMedia([Out] DXGI_FRAME_STATISTICS_MEDIA% pStats)
            {
                pin_ptr<DXGI_FRAME_STATISTICS_MEDIA> stats = &pStats;
                return _ref->GetFrameStatisticsMedia((::DXGI_FRAME_STATISTICS_MEDIA*)stats);
            }

            long SetPresentDuration(unsigned int Duration)
            {
                return _ref->SetPresentDuration(Duration);
            }

            long CheckPresentDurationSupport(unsigned int DesiredPresentDuration, [Out] unsigned int% pClosestSmallerPresentDuration,
                [Out] unsigned int% pClosestLargerPresentDuration)
            {
                pin_ptr<unsigned int> closestSmaller = &pClosestSmallerPresentDuration;
                pin_ptr<unsigned int> closestLarger = &pClosestLargerPresentDuration;
                return _ref->CheckPresentDurationSupport(DesiredPresentDuration, closestSmaller, closestLarger);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGISwapChainMedia>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISwapChainMedia);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISwapChainMedia* () { return (_ref); }
        };
    }
}