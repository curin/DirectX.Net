#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_UAV_DIMENSION
        {
            D3D12_UAV_DIMENSION_UNKNOWN = 0,
            D3D12_UAV_DIMENSION_BUFFER = 1,
            D3D12_UAV_DIMENSION_TEXTURE1D = 2,
            D3D12_UAV_DIMENSION_TEXTURE1DARRAY = 3,
            D3D12_UAV_DIMENSION_TEXTURE2D = 4,
            D3D12_UAV_DIMENSION_TEXTURE2DARRAY = 5,
            D3D12_UAV_DIMENSION_TEXTURE3D = 8
        };
    }
}