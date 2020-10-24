#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

#include "D3D12_META_COMMAND_PARAMETER_TYPE.h"
#include "D3D12_META_COMMAND_PARAMETER_FLAGS.h"
#include "D3D12_RESOURCE_STATES.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_META_COMMAND_PARAMETER_DESC
        {
            [MarshalAs(UnmanagedType::BStr)]
            String^ Name;
            D3D12_META_COMMAND_PARAMETER_TYPE Type;
            D3D12_META_COMMAND_PARAMETER_FLAGS Flags;
            D3D12_RESOURCE_STATES RequiredResourceState;
            unsigned int StructureOffset;
        };
    }
}