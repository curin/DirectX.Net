#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RAYTRACING_AABB
        {
            float MinX;
            float MinY;
            float MinZ;
            float MaxX;
            float MaxY;
            float MaxZ;
        };
    }
}