#pragma once

#include "D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS4
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool MSAA64KBAlignedTextureSupported;
            D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER SharedResourceCompatibilityTier;
            [MarshalAs(UnmanagedType::Bool)]
            bool Native16BitShaderOpsSupported;
        };
    }
}