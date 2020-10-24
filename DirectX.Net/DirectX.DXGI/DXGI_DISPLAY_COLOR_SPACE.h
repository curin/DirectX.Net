#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_DISPLAY_COLOR_SPACE
        {
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 16)]
            array<float>^ PrimaryCoordinates;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 32)]
            array<float>^ WhitePoints;
        };
    }
}