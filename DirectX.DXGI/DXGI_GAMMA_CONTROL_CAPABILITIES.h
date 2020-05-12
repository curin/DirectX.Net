#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_GAMMA_CONTROL_CAPABILITIES
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool ScaleAndOffsetSupported;
            float MaxConvertedValue;
            float MinConvertedValue;
            unsigned int NumGammaControlPoints;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 1025)]
            array<float>^ ControlPointPositions;
        };
    }
}