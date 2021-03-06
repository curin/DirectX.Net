#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_RAYTRACING_PIPELINE_FLAGS
        {
            D3D12_RAYTRACING_PIPELINE_FLAG_NONE = 0,
            D3D12_RAYTRACING_PIPELINE_FLAG_SKIP_TRIANGLES = 0x100,
            D3D12_RAYTRACING_PIPELINE_FLAG_SKIP_PROCEDURAL_PRIMITIVES = 0x200
        };
    }
}