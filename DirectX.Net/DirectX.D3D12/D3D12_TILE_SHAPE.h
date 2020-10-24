#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_TILE_SHAPE
		{
			unsigned int WidthInTexels;
			unsigned int HeightInTexels;
			unsigned int DepthInTexels;
		};
	}
}