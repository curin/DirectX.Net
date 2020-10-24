#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_RAYTRACING_GEOMETRY_TYPE
        {
            D3D12_RAYTRACING_GEOMETRY_TYPE_TRIANGLES = 0,
            D3D12_RAYTRACING_GEOMETRY_TYPE_PROCEDURAL_PRIMITIVE_AABBS = (D3D12_RAYTRACING_GEOMETRY_TYPE_TRIANGLES + 1)
        };
    }
}