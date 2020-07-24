#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_DESCRIPTOR_RANGE_FLAGS
        {
            D3D12_DESCRIPTOR_RANGE_FLAG_NONE = 0,
            D3D12_DESCRIPTOR_RANGE_FLAG_DESCRIPTORS_VOLATILE = 0x1,
            D3D12_DESCRIPTOR_RANGE_FLAG_DATA_VOLATILE = 0x2,
            D3D12_DESCRIPTOR_RANGE_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE = 0x4,
            D3D12_DESCRIPTOR_RANGE_FLAG_DATA_STATIC = 0x8,
            D3D12_DESCRIPTOR_RANGE_FLAG_DESCRIPTORS_STATIC_KEEPING_BUFFER_BOUNDS_CHECKS = 0x10000
        };
    }
}