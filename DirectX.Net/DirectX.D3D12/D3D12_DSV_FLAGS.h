#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_DSV_FLAGS
        {
            D3D12_DSV_FLAG_NONE = 0,
            D3D12_DSV_FLAG_READ_ONLY_DEPTH = 0x1,
            D3D12_DSV_FLAG_READ_ONLY_STENCIL = 0x2
        };
    }
}