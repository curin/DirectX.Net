#pragma once

#include "D3D12_INDIRECT_ARGUMENT_TYPE.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public value struct D3D12_INDIRECT_ARGUMENT_DESC
        {
            [FieldOffset(0)]
            D3D12_INDIRECT_ARGUMENT_TYPE Type;
            [FieldOffset(EnumSize)]
            unsigned int Slot;
            [FieldOffset(EnumSize)]
            unsigned int RootParameterIndex;
            [FieldOffset(EnumSize + UIntSize)]
            unsigned int DestOffsetIn32BitValues;
            [FieldOffset(EnumSize + (2 * UIntSize))]
            unsigned int Num32BitValuesToSet;
            [FieldOffset(EnumSize)]
            unsigned int RootParameterIndex;
            [FieldOffset(EnumSize)]
            unsigned int RootParameterIndex;
            [FieldOffset(EnumSize)]
            unsigned int RootParameterIndex;
        };
    }
}