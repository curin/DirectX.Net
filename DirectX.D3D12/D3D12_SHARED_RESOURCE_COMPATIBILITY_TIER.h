#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER
        {
            D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_0 = 0,
            D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_1 = (D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_0 + 1)
        };
    }
}