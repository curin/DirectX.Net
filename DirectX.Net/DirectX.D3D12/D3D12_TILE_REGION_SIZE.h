#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_TILE_REGION_SIZE
		{
			unsigned int NumTiles;
			int UseBox;
			unsigned int Width;
			unsigned short Height;
			unsigned short Depth;
		};
	}
}