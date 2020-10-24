#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_MIP_REGION
		{
			unsigned int Width;
			unsigned int Height;
			unsigned int Depth;
		};
	}
}