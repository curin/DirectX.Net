#pragma once

#include "D3D12_COMMAND_LIST_TYPE.h"
#include "D3D12_COMMAND_QUEUE_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_COMMAND_QUEUE_DESC
        {
            D3D12_COMMAND_LIST_TYPE Type;
            int Priority;
            D3D12_COMMAND_QUEUE_FLAGS Flags;
            unsigned int NodeMask;
        };
    }
}