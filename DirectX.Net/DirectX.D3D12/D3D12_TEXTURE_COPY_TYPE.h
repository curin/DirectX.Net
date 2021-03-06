#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_TEXTURE_COPY_TYPE
        {
            D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX = 0,
            D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT = 1
        };
    }
}