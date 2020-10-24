#pragma once

#include "D3D12_RESOURCE_BARRIER_TYPE.h"
#include "D3D12_RESOURCE_BARRIER_FLAGS.h"

#include "D3D12_RESOURCE_TRANSITION_BARRIER.h"
#include "D3D12_RESOURCE_ALIASING_BARRIER.h"
#include "D3D12_RESOURCE_UAV_BARRIER.h"

#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_RESOURCE_BARRIER
        {
            [FieldOffset(0)] 
            D3D12_RESOURCE_BARRIER_TYPE Type;
            [FieldOffset(EnumSize)]
            D3D12_RESOURCE_BARRIER_FLAGS Flags;
            [FieldOffset(EnumSize << 1)]
            D3D12_RESOURCE_TRANSITION_BARRIER Transition;
            [FieldOffset(EnumSize << 1)]
            D3D12_RESOURCE_ALIASING_BARRIER Aliasing;
            [FieldOffset(EnumSize << 1)]
            D3D12_RESOURCE_UAV_BARRIER UAV;
        };
    }
}