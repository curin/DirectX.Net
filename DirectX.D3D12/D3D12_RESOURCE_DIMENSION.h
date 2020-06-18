#pragma once

namespace DirectX
{
	namespace D3D12
	{
		public enum D3D12_RESOURCE_DIMENSION
		{
			D3D12_RESOURCE_DIMENSION_UNKNOWN = 0,
			D3D12_RESOURCE_DIMENSION_BUFFER = 1,
			D3D12_RESOURCE_DIMENSION_TEXTURE1D = 2,
			D3D12_RESOURCE_DIMENSION_TEXTURE2D = 3,
			D3D12_RESOURCE_DIMENSION_TEXTURE3D = 4
		};
	}
}