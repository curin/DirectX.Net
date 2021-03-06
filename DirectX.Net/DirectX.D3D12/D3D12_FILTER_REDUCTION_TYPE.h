#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_FILTER_REDUCTION_TYPE
        {
            D3D12_FILTER_REDUCTION_TYPE_STANDARD = 0,
            D3D12_FILTER_REDUCTION_TYPE_COMPARISON = 1,
            D3D12_FILTER_REDUCTION_TYPE_MINIMUM = 2,
            D3D12_FILTER_REDUCTION_TYPE_MAXIMUM = 3
        };
    }
}