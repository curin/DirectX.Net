#pragma once

#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_TOOLS_VISUALIZATION_HEADER
        {
            D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE Type;
            unsigned int NumDescs;
        };
    }
}