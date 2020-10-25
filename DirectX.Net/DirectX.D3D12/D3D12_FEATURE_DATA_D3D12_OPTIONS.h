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
            int DoublePrecisionFloatShaderOps;
            int OutputMergerLogicOp;
            D3D12_SHADER_MIN_PRECISION_SUPPORT MinPrecisionSupport;
            D3D12_TILED_RESOURCES_TIER TiledResourcesTier;
            D3D12_RESOURCE_BINDING_TIER ResourceBindingTier;
            int PSSpecifiedStencilRefSupported;
            int TypedUAVLoadAdditionalFormats;
            int ROVsSupported;
            D3D12_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
            unsigned int MaxGPUVirtualAddressBitsPerResource;
            int StandardSwizzle64KBSupported;
            D3D12_CROSS_NODE_SHARING_TIER CrossNodeSharingTier;
            int CrossAdapterRowMajorTextureSupported;
            int VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation;
            D3D12_RESOURCE_HEAP_TIER ResourceHeapTier;
        };
    }
}