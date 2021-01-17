#pragma once

#include "D3D12_RAYTRACING_GEOMETRY_TYPE.h"
#include "D3D12_RAYTRACING_GEOMETRY_FLAGS.h"
#include "D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC.h"
#include "D3D12_RAYTRACING_GEOMETRY_AABBS_DESC.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_RAYTRACING_GEOMETRY_DESC
        {
            [FieldOffset(0)]
            D3D12_RAYTRACING_GEOMETRY_TYPE Type;
            [FieldOffset(EnumSize)]
            D3D12_RAYTRACING_GEOMETRY_FLAGS Flags;
            [FieldOffset(EnumSize * 2)]
            D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC Triangles;
            [FieldOffset(EnumSize * 2)]
            D3D12_RAYTRACING_GEOMETRY_AABBS_DESC AABBs;
        };
    }
}