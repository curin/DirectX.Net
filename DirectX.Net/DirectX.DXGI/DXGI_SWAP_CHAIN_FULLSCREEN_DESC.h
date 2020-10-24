#pragma once

#include "DXGI_RATIONAL.h"
#include "DXGI_MODE_SCANLINE_ORDER.h"
#include "DXGI_MODE_SCALING.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_SWAP_CHAIN_FULLSCREEN_DESC
        {
            DXGI_RATIONAL RefreshRate;
            DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
            DXGI_MODE_SCALING Scaling;
            [MarshalAs(UnmanagedType::Bool)]
            bool Windowed;
        };
    }
}