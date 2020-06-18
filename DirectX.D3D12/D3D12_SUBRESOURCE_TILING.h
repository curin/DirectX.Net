#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_SUBRESOURCE_TILING
		{
			unsigned int WidthInTiles;
			unsigned short HeightInTiles;
			unsigned short DepthInTiles;
			unsigned int StartTileIndexInOverallResource;
		};
	}
}