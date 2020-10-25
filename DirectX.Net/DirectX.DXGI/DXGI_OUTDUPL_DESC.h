#pragma once

#include "DXGI_MODE_DESC.h"
#include "DXGI_MODE_ROTATION.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_OUTDUPL_DESC
        {
            DXGI_MODE_DESC ModeDesc;
            DXGI_MODE_ROTATION Rotation;
            int DesktopImageInSystemMemory;
        };
    }
}