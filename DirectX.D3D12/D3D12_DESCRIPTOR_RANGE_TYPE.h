#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_DESCRIPTOR_RANGE_TYPE
        {
            D3D12_DESCRIPTOR_RANGE_TYPE_SRV = 0,
            D3D12_DESCRIPTOR_RANGE_TYPE_UAV = (D3D12_DESCRIPTOR_RANGE_TYPE_SRV + 1),
            D3D12_DESCRIPTOR_RANGE_TYPE_CBV = (D3D12_DESCRIPTOR_RANGE_TYPE_UAV + 1),
            D3D12_DESCRIPTOR_RANGE_TYPE_SAMPLER = (D3D12_DESCRIPTOR_RANGE_TYPE_CBV + 1)
        };
    }
}