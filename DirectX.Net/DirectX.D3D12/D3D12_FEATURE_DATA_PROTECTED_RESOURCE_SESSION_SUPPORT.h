#pragma once

#include "D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT
        {
            unsigned int NodeIndex;
            D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAGS Support;
        };
    }
}