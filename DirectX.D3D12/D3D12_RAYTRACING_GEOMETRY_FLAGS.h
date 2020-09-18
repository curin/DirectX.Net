#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_RAYTRACING_GEOMETRY_FLAGS
        {
            D3D12_RAYTRACING_GEOMETRY_FLAG_NONE = 0,
            D3D12_RAYTRACING_GEOMETRY_FLAG_OPAQUE = 0x1,
            D3D12_RAYTRACING_GEOMETRY_FLAG_NO_DUPLICATE_ANYHIT_INVOCATION = 0x2
        };
    }
}