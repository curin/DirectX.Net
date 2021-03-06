#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_CROSS_NODE_SHARING_TIER
        {
            D3D12_CROSS_NODE_SHARING_TIER_NOT_SUPPORTED = 0,
            D3D12_CROSS_NODE_SHARING_TIER_1_EMULATED = 1,
            D3D12_CROSS_NODE_SHARING_TIER_1 = 2,
            D3D12_CROSS_NODE_SHARING_TIER_2 = 3,
            D3D12_CROSS_NODE_SHARING_TIER_3 = 4
        };
    }
}