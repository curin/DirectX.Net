#pragma once

#include "D3D12_DESCRIPTOR_HEAP_TYPE.h"
#include "D3D12_DESCRIPTOR_HEAP_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DESCRIPTOR_HEAP_DESC
        {
            D3D12_DESCRIPTOR_HEAP_TYPE Type;
            unsigned int NumDescriptors;
            D3D12_DESCRIPTOR_HEAP_FLAGS Flags;
            unsigned int NodeMask;
        };
    }
}