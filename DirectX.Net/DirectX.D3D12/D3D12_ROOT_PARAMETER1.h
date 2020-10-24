#pragma once

#include "D3D12_ROOT_PARAMETER_TYPE.h"
#include "D3D12_SHADER_VISIBILITY.h"
#include "D3D12_ROOT_CONSTANTS.h"
#include "D3D12_ROOT_DESCRIPTOR_TABLE1.h"
#include "D3D12_ROOT_DESCRIPTOR1.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_ROOT_PARAMETER1
        {
            [FieldOffset(0)]
            D3D12_ROOT_PARAMETER_TYPE ParameterType;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_DESCRIPTOR_TABLE1 DescriptorTable;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_CONSTANTS Constants;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_DESCRIPTOR1 Descriptor;
            [FieldOffset(EnumSize + 3 * UIntSize)]
            D3D12_SHADER_VISIBILITY ShaderVisibility;
        };
    }
}