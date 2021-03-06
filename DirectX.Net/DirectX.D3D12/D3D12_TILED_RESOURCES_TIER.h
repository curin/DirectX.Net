#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_TILED_RESOURCES_TIER
        {
            D3D12_TILED_RESOURCES_TIER_NOT_SUPPORTED = 0,
            D3D12_TILED_RESOURCES_TIER_1 = 1,
            D3D12_TILED_RESOURCES_TIER_2 = 2,
            D3D12_TILED_RESOURCES_TIER_3 = 3,
            D3D12_TILED_RESOURCES_TIER_4 = 4
        };
    }
}