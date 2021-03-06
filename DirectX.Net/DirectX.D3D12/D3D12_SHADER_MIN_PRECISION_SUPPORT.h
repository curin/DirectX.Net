#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_SHADER_MIN_PRECISION_SUPPORT
        {
            D3D12_SHADER_MIN_PRECISION_SUPPORT_NONE = 0,
            D3D12_SHADER_MIN_PRECISION_SUPPORT_10_BIT = 0x1,
            D3D12_SHADER_MIN_PRECISION_SUPPORT_16_BIT = 0x2
        };
    }
}