#pragma once

#include "D3D12_BUFFER_UAV_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_BUFFER_UAV
        {
            unsigned long long FirstElement;
            unsigned int NumElements;
            unsigned int StructureByteStride;
            unsigned long long CounterOffsetInBytes;
            D3D12_BUFFER_UAV_FLAGS Flags;
        };
    }
}