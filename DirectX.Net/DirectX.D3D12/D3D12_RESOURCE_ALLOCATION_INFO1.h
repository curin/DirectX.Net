#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_RESOURCE_ALLOCATION_INFO1
		{
			unsigned long long Offset;
			unsigned long long Alignment;
			unsigned long long SizeInBytes;
		};
	}
}