#pragma once

#include "D3D12_COMMAND_LIST_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY
        {
            D3D12_COMMAND_LIST_TYPE CommandListType;
            unsigned int Priority;
            int PriorityForTypeIsSupported;
        };
    }
}