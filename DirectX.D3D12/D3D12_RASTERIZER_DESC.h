#pragma once

#include "D3D12_FILL_MODE.h"
#include "D3D12_CULL_MODE.h"
#include "D3D12_CONSERVATIVE_RASTERIZATION_MODE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RASTERIZER_DESC
        {
            D3D12_FILL_MODE FillMode;
            D3D12_CULL_MODE CullMode;
            [MarshalAs(UnmanagedType::Bool)]
            bool FrontCounterClockwise;
            int DepthBias;
            float DepthBiasClamp;
            float SlopeScaledDepthBias;
            [MarshalAs(UnmanagedType::Bool)]
            bool DepthClipEnable;
            [MarshalAs(UnmanagedType::Bool)]
            bool MultisampleEnable;
            [MarshalAs(UnmanagedType::Bool)]
            bool AntialiasedLineEnable;
            unsigned int ForcedSampleCount;
            D3D12_CONSERVATIVE_RASTERIZATION_MODE ConservativeRaster;
        };
    }
}