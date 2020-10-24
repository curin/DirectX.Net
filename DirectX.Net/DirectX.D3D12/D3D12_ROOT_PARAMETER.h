#pragma once

#include "D3D12_ROOT_PARAMETER_TYPE.h"
#include "D3D12_SHADER_VISIBILITY.h"
#include "D3D12_ROOT_CONSTANTS.h"
#include "D3D12_ROOT_DESCRIPTOR_TABLE.h"
#include "D3D12_ROOT_DESCRIPTOR.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_ROOT_PARAMETER
        {
            [FieldOffset(0)]
            D3D12_ROOT_PARAMETER_TYPE ParameterType;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_DESCRIPTOR_TABLE DescriptorTable;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_CONSTANTS Constants;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_DESCRIPTOR Descriptor;
            [FieldOffset(EnumSize + 3 * UIntSize)]
            D3D12_SHADER_VISIBILITY ShaderVisibility;
        };
    }
}