#pragma once

#include "D3D12_DESCRIPTOR_RANGE_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DESCRIPTOR_RANGE
        {
            D3D12_DESCRIPTOR_RANGE_TYPE RangeType;
            unsigned int NumDescriptors;
            unsigned int BaseShaderRegister;
            unsigned int RegisterSpace;
            unsigned int OffsetInDescriptorsFromTableStart;
        };
    }
}