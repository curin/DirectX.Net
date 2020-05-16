#pragma once

#include "DXGI_MODE_ROTATION.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_OUTPUT_DESC
        {
            [MarshalAs(UnmanagedType::BStr, SizeConst = 128)]
            String^ DeviceName;
            RECT DesktopCoordinates;
            [MarshalAs(UnmanagedType::Bool)]
            bool AttachedToDesktop;
            DXGI_MODE_ROTATION Rotation;
            IntPtr Monitor;
        };
    }
}