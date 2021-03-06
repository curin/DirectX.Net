#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_TEX2D_ARRAY_RTV
        {
            unsigned int MipSlice;
            unsigned int FirstArraySlice;
            unsigned int ArraySize;
            unsigned int PlaneSlice;
        };
    }
}