#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_OUTDUPL_POINTER_POSITION
        {
            POINT Position;
            int Visible;
        };
    }
}