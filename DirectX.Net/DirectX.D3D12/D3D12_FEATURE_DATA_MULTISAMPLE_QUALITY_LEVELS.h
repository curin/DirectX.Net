#pragma once

#include "D3D12_MULTISAMPLE_QUALITY_LEVEL_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS
        {
            DirectX::DXGI::DXGI_FORMAT Format;
            unsigned int SampleCount;
            D3D12_MULTISAMPLE_QUALITY_LEVEL_FLAGS Flags;
            unsigned int NumQualityLevels;
        };
    }
}