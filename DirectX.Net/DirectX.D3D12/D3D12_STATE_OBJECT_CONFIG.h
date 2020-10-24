#pragma once

#include "D3D12_STATE_OBJECT_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_STATE_OBJECT_CONFIG
        {
            D3D12_STATE_OBJECT_FLAGS Flags;
        };
    }
}