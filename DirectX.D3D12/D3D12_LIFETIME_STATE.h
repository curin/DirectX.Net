#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_LIFETIME_STATE
        {
            D3D12_LIFETIME_STATE_IN_USE = 0,
            D3D12_LIFETIME_STATE_NOT_IN_USE = (D3D12_LIFETIME_STATE_IN_USE + 1)
        };
    }
}