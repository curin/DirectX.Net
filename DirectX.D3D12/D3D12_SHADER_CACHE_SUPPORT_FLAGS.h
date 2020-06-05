#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum D3D12_SHADER_CACHE_SUPPORT_FLAGS
        {
            D3D12_SHADER_CACHE_SUPPORT_NONE = 0,
            D3D12_SHADER_CACHE_SUPPORT_SINGLE_PSO = 0x1,
            D3D12_SHADER_CACHE_SUPPORT_LIBRARY = 0x2,
            D3D12_SHADER_CACHE_SUPPORT_AUTOMATIC_INPROC_CACHE = 0x4,
            D3D12_SHADER_CACHE_SUPPORT_AUTOMATIC_DISK_CACHE = 0x8
        };
    }
}