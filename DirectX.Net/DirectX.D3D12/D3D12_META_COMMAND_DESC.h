#pragma once

#include "D3D12_GRAPHICS_STATES.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_META_COMMAND_DESC
        {
            Guid Id;
            UnmanagedConstantWString Name;
            D3D12_GRAPHICS_STATES InitializationDirtyState;
            D3D12_GRAPHICS_STATES ExecutionDirtyState;
        };
    }
}