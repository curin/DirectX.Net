#pragma once

#include "D3D12_ROOT_DESCRIPTOR_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_ROOT_DESCRIPTOR1
        {
            unsigned int ShaderRegister;
            unsigned int RegisterSpace;
            D3D12_ROOT_DESCRIPTOR_FLAGS Flags;
        };
    }
}