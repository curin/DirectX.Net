#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_SUBRESOURCE_INFO
		{
			unsigned long long Offset;
			unsigned int RowPitch;
			unsigned int DepthPitch;
		};
	}
}