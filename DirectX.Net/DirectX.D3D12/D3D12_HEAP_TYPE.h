#pragma once

namespace DirectX
{
	namespace D3D12
	{
		public enum class D3D12_HEAP_TYPE
		{
			D3D12_HEAP_TYPE_DEFAULT = 1,
			D3D12_HEAP_TYPE_UPLOAD = 2,
			D3D12_HEAP_TYPE_READBACK = 3,
			D3D12_HEAP_TYPE_CUSTOM = 4
		};
	}
}