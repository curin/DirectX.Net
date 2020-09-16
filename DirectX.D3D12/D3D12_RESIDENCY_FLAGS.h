#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_RESIDENCY_FLAGS
        {
            D3D12_RESIDENCY_FLAG_NONE = 0,
            D3D12_RESIDENCY_FLAG_DENY_OVERBUDGET = 0x1
        };
    }
}