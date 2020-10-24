#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_DEPTH_STENCIL_VALUE
		{
			float Depth;
			unsigned char Stencil;
		};
	}
}