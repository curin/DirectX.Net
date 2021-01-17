#pragma once

#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS.h"
#include "D3D12_ELEMENTS_LAYOUT.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS
        {
            [FieldOffset(0)]
            D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE Type;
            [FieldOffset(EnumSize)]
            D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS Flags;
            [FieldOffset(EnumSize * 2)]
            unsigned int NumDescs;
            [FieldOffset(EnumSize * 2 + UIntSize)]
            D3D12_ELEMENTS_LAYOUT DescsLayout;
            [FieldOffset(EnumSize * 3 + UIntSize)]
            unsigned long long InstanceDescs;
            [FieldOffset(EnumSize * 3 + UIntSize)]
            IntPtr pGeometryDescs;//const D3D12_RAYTRACING_GEOMETRY_DESC*
            [FieldOffset(EnumSize * 3 + UIntSize)]
            IntPtr ppGeometryDescs;//const D3D12_RAYTRACING_GEOMETRY_DESC* const*
        };
    }
}