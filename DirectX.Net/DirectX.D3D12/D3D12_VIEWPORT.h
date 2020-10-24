#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_VIEWPORT
        {
            float TopLeftX;
            float TopLeftY;
            float Width;
            float Height;
            float MinDepth;
            float MaxDepth;
        };
    }
}