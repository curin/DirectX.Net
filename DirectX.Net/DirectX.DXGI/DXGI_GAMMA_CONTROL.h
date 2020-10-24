#pragma once
#include "DXGI_RGB.h"

using namespace System;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_GAMMA_CONTROL
        {
            DXGI_RGB Scale;
            DXGI_RGB Offset;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst=1025)]
            array<DXGI_RGB>^ GammaCurve;
        };
    }
}