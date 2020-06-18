#pragma once

#include "D3D12_RESOURCE_BARRIER_TYPE.h"
#include "D3D12_RESOURCE_BARRIER_FLAGS.h"

#include "D3D12_RESOURCE_TRANSITION_BARRIER.h"
#include "D3D12_RESOURCE_ALIASING_BARRIER.h"
#include "D3D12_RESOURCE_UAV_BARRIER.h"

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
            [FieldOffset(sizeof(D3D12_RESOURCE_BARRIER_TYPE))]
            D3D12_RESOURCE_BARRIER_FLAGS Flags;
            [FieldOffset(sizeof(D3D12_RESOURCE_BARRIER_TYPE) + sizeof(D3D12_RESOURCE_BARRIER_FLAGS))] 
            D3D12_RESOURCE_TRANSITION_BARRIER Transition;
            [FieldOffset(sizeof(D3D12_RESOURCE_BARRIER_TYPE) + sizeof(D3D12_RESOURCE_BARRIER_FLAGS))] 
            D3D12_RESOURCE_ALIASING_BARRIER Aliasing;
            [FieldOffset(sizeof(D3D12_RESOURCE_BARRIER_TYPE) + sizeof(D3D12_RESOURCE_BARRIER_FLAGS))] 
            D3D12_RESOURCE_UAV_BARRIER UAV;
        };
    }
}