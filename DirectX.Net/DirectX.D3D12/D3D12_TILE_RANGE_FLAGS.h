#pragma once

namespace DirectX
{
	namespace D3D12
	{
		public enum class D3D12_TILE_RANGE_FLAGS
		{
			D3D12_TILE_RANGE_FLAG_NONE = 0,
			D3D12_TILE_RANGE_FLAG_NULL = 1,
			D3D12_TILE_RANGE_FLAG_SKIP = 2,
			D3D12_TILE_RANGE_FLAG_REUSE_SINGLE_TILE = 4
		};
	}
}