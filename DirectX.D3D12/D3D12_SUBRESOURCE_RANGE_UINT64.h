#pragma once

#include "D3D12_RANGE_UINT64.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_SUBRESOURCE_RANGE_UINT64
		{
			unsigned int Subresource;
			D3D12_RANGE_UINT64 Range;
		};
	}
}