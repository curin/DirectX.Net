#pragma once

#include "D3D12_DESCRIPTOR_RANGE_TYPE.h"
#include "D3D12_DESCRIPTOR_RANGE_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DESCRIPTOR_RANGE1
        {
            D3D12_DESCRIPTOR_RANGE_TYPE RangeType;
            unsigned int NumDescriptors;
            unsigned int BaseShaderRegister;
            unsigned int RegisterSpace;
            D3D12_DESCRIPTOR_RANGE_FLAGS Flags;
            unsigned int OffsetInDescriptorsFromTableStart;
        };
    }
}