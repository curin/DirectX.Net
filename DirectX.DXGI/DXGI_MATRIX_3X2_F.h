#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_MATRIX_3X2_F
        {
            float _11;
            float _12;
            float _21;
            float _22;
            float _31;
            float _32;
        };
    }
}