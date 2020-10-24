#pragma once

#include "DXGI_MODE_ROTATION.h"
#include "DXGI_COLOR_SPACE_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_OUTPUT_DESC1
        {
            [MarshalAs(UnmanagedType::BStr, SizeConst = 128)]
            String^ DeviceName;
            RECT DesktopCoordinates;
            [MarshalAs(UnmanagedType::Bool)]
            bool AttachedToDesktop;
            DXGI_MODE_ROTATION Rotation;
            IntPtr Monitor;
            unsigned int BitsPerColor;
            DXGI_COLOR_SPACE_TYPE ColorSpace;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<float>^ RedPrimary;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<float>^ GreenPrimary;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<float>^ BluePrimary;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<float>^ WhitePoint;
            float MinLuminance;
            float MaxLuminance;
            float MaxFullFrameLuminance;
        };
    }
}