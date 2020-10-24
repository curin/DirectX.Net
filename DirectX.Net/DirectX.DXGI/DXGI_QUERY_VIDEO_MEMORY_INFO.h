#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_QUERY_VIDEO_MEMORY_INFO
        {
            unsigned long long Budget;
            unsigned long long CurrentUsage;
            unsigned long long AvailableForReservation;
            unsigned long long CurrentReservation;
        };
    }
}