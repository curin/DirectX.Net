#pragma once

#include "D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC
        {
            unsigned long long DestAccelerationStructureData;
            D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS Inputs;
            unsigned long long SourceAccelerationStructureData;
            unsigned long long ScratchAccelerationStructureData;
        };
    }
}