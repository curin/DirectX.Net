#pragma once


using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_FRAME_STATISTICS
        {
            unsigned int PresentCount;
            unsigned int PresentRefreshCount;
            unsigned int SyncRefreshCount;
            LARGE_INTEGER SyncQPCTime;
            LARGE_INTEGER SyncGPUTime;
        };
    }
}