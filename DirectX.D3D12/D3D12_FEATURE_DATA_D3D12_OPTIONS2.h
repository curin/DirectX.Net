#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

#include "D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS2
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool DepthBoundsTestSupported;
            D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER ProgrammableSamplePositionsTier;
        };
    }
}