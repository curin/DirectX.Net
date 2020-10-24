#pragma once

#include "D3D12_BUFFER_SRV_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_BUFFER_SRV
        {
            unsigned long long FirstElement;
            unsigned int NumElements;
            unsigned int StructureByteStride;
            D3D12_BUFFER_SRV_FLAGS Flags;
        };
    }
}