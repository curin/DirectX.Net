#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_OUTDUPL_POINTER_SHAPE_INFO
        {
            unsigned int Type;
            unsigned int Width;
            unsigned int Height;
            unsigned int Pitch;
            POINT HotSpot;
        };
    }
}