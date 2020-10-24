#pragma once

#include "DXGI_FRAME_PRESENTATION_MODE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_FRAME_STATISTICS_MEDIA
        {
            unsigned int PresentCount;
            unsigned int PresentRefreshCount;
            unsigned int SyncRefreshCount;
            LARGE_INTEGER SyncQPCTime;
            LARGE_INTEGER SyncGPUTime;
            DXGI_FRAME_PRESENTATION_MODE CompositionMode;
            unsigned int ApprovedPresentDuration;
        };
    }
}