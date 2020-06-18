#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_STENCIL_OP
        {
            D3D12_STENCIL_OP_KEEP = 1,
            D3D12_STENCIL_OP_ZERO = 2,
            D3D12_STENCIL_OP_REPLACE = 3,
            D3D12_STENCIL_OP_INCR_SAT = 4,
            D3D12_STENCIL_OP_DECR_SAT = 5,
            D3D12_STENCIL_OP_INVERT = 6,
            D3D12_STENCIL_OP_INCR = 7,
            D3D12_STENCIL_OP_DECR = 8
        };
    }
}