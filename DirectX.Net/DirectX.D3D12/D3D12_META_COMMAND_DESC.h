#pragma once

#include "D3D12_GRAPHICS_STATES.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_META_COMMAND_DESC
        {
            Guid Id;
            [MarshalAs(UnmanagedType::BStr)]
            String^ Name;
            D3D12_GRAPHICS_STATES InitializationDirtyState;
            D3D12_GRAPHICS_STATES ExecutionDirtyState;
        };
    }
}