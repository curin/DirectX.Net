#pragma once

#include "D3D12_SHADER_CACHE_SUPPORT_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_SHADER_CACHE
        {
            D3D12_SHADER_CACHE_SUPPORT_FLAGS SupportFlags;
        };
    }
}