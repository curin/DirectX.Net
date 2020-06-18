#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_TILED_RESOURCE_COORDINATE
		{
			unsigned int X;
			unsigned int Y;
			unsigned int Z;
			unsigned int Subresource;
		};
	}
}