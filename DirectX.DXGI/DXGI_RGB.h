#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_RGB
        {
            float Red;
            float Green;
            float Blue;

            DXGI_RGB(float red, float green, float blue)
            {
                Red = red;
                Green = green;
                Blue = blue;
            }
        };
    }
}