#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_MULTIPLE_FENCE_WAIT_FLAGS
        {
            D3D12_MULTIPLE_FENCE_WAIT_FLAG_NONE = 0,
            D3D12_MULTIPLE_FENCE_WAIT_FLAG_ANY = 0x1,
            D3D12_MULTIPLE_FENCE_WAIT_FLAG_ALL = 0
        };
    }
}