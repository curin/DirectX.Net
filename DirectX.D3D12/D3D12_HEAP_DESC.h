#pragma once

#include "D3D12_HEAP_PROPERTIES.h"
#include "D3D12_HEAP_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_HEAP_DESC
		{
			unsigned long long SizeInBytes;
			D3D12_HEAP_PROPERTIES Properties;
			unsigned long long Alignment;
			D3D12_HEAP_FLAGS Flags;
		};
	}
}