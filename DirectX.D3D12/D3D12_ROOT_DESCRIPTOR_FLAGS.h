#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_ROOT_DESCRIPTOR_FLAGS
        {
            D3D12_ROOT_DESCRIPTOR_FLAG_NONE = 0,
            D3D12_ROOT_DESCRIPTOR_FLAG_DATA_VOLATILE = 0x2,
            D3D12_ROOT_DESCRIPTOR_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE = 0x4,
            D3D12_ROOT_DESCRIPTOR_FLAG_DATA_STATIC = 0x8
        };
    }
}