#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_RESOURCE_BARRIER_FLAGS
        {
            D3D12_RESOURCE_BARRIER_FLAG_NONE = 0,
            D3D12_RESOURCE_BARRIER_FLAG_BEGIN_ONLY = 0x1,
            D3D12_RESOURCE_BARRIER_FLAG_END_ONLY = 0x2
        };
    }
}
