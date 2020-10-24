#pragma once

#include "D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RAYTRACING_GEOMETRY_AABBS_DESC
        {
            unsigned long long AABBCount;
            D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE AABBs;
        };
    }
}