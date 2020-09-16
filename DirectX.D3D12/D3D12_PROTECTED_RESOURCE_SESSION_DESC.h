#pragma once

#include "D3D12_PROTECTED_RESOURCE_SESSION_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_PROTECTED_RESOURCE_SESSION_DESC
        {
        public:
            unsigned int NodeMask;
            D3D12_PROTECTED_RESOURCE_SESSION_FLAGS Flags;
        };
    }
}