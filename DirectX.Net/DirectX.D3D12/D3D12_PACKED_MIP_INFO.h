#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_PACKED_MIP_INFO
		{
			unsigned char NumStandardMips;
			unsigned char NumPackedMips;
			unsigned int NumTilesForPackedMips;
			unsigned int StartTileIndexInOverallResource;
		};
	}
}