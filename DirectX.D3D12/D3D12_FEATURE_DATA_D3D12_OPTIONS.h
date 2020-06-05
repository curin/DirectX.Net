#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
#include "D3D12_SHADER_MIN_PRECISION_SUPPORT.h"
#include "D3D12_TILED_RESOURCES_TIER.h"
#include "D3D12_RESOURCE_BINDING_TIER.h"
#include "D3D12_CONSERVATIVE_RASTERIZATION_TIER.h"
#include "D3D12_CROSS_NODE_SHARING_TIER.h"
#include "D3D12_RESOURCE_HEAP_TIER.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool DoublePrecisionFloatShaderOps;
            [MarshalAs(UnmanagedType::Bool)]
            bool OutputMergerLogicOp;
            D3D12_SHADER_MIN_PRECISION_SUPPORT MinPrecisionSupport;
            D3D12_TILED_RESOURCES_TIER TiledResourcesTier;
            D3D12_RESOURCE_BINDING_TIER ResourceBindingTier;
            [MarshalAs(UnmanagedType::Bool)]
            bool PSSpecifiedStencilRefSupported;
            [MarshalAs(UnmanagedType::Bool)]
            bool TypedUAVLoadAdditionalFormats;
            [MarshalAs(UnmanagedType::Bool)]
            bool ROVsSupported;
            D3D12_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
            unsigned int MaxGPUVirtualAddressBitsPerResource;
            [MarshalAs(UnmanagedType::Bool)]
            bool StandardSwizzle64KBSupported;
            D3D12_CROSS_NODE_SHARING_TIER CrossNodeSharingTier;
            [MarshalAs(UnmanagedType::Bool)]
            bool CrossAdapterRowMajorTextureSupported;
            [MarshalAs(UnmanagedType::Bool)]
            bool VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation;
            D3D12_RESOURCE_HEAP_TIER ResourceHeapTier;
        };
    }
}