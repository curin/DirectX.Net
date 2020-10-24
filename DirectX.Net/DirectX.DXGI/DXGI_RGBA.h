#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_RGBA
        {
            float r;
            float g;
            float b;
            float a;

            DXGI_RGBA(float red, float green, float blue, float alpha)
            {
                r = red;
                g = green;
                b = blue;
                a = alpha;
            }
        };
    }
}