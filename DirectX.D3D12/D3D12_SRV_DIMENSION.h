#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_SRV_DIMENSION
        {
            D3D12_SRV_DIMENSION_UNKNOWN = 0,
            D3D12_SRV_DIMENSION_BUFFER = 1,
            D3D12_SRV_DIMENSION_TEXTURE1D = 2,
            D3D12_SRV_DIMENSION_TEXTURE1DARRAY = 3,
            D3D12_SRV_DIMENSION_TEXTURE2D = 4,
            D3D12_SRV_DIMENSION_TEXTURE2DARRAY = 5,
            D3D12_SRV_DIMENSION_TEXTURE2DMS = 6,
            D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY = 7,
            D3D12_SRV_DIMENSION_TEXTURE3D = 8,
            D3D12_SRV_DIMENSION_TEXTURECUBE = 9,
            D3D12_SRV_DIMENSION_TEXTURECUBEARRAY = 10,
            D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE = 11
        };
    }
}