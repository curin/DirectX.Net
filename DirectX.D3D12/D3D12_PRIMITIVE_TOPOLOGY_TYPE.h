#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_PRIMITIVE_TOPOLOGY_TYPE
        {
            D3D12_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED = 0,
            D3D12_PRIMITIVE_TOPOLOGY_TYPE_POINT = 1,
            D3D12_PRIMITIVE_TOPOLOGY_TYPE_LINE = 2,
            D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE = 3,
            D3D12_PRIMITIVE_TOPOLOGY_TYPE_PATCH = 4
        };
    }
}