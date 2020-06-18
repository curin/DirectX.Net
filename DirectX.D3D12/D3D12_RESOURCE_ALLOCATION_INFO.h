#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_RESOURCE_ALLOCATION_INFO
		{
			unsigned long long SizeInBytes;
			unsigned long long Alignment;
		};
	}
}