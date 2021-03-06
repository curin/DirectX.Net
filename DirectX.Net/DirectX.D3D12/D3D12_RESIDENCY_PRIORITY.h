#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_RESIDENCY_PRIORITY
        {
            D3D12_RESIDENCY_PRIORITY_MINIMUM = 0x28000000,
            D3D12_RESIDENCY_PRIORITY_LOW = 0x50000000,
            D3D12_RESIDENCY_PRIORITY_NORMAL = 0x78000000,
            D3D12_RESIDENCY_PRIORITY_HIGH = 0xa0010000,
            D3D12_RESIDENCY_PRIORITY_MAXIMUM = 0xc8000000
        };
    }
}