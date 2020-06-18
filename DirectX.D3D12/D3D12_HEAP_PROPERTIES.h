#pragma once

#include "D3D12_HEAP_TYPE.h"
#include "D3D12_CPU_PAGE_PROPERTY.h"
#include "D3D12_MEMORY_POOL.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_HEAP_PROPERTIES
		{
			D3D12_HEAP_TYPE Type;
			D3D12_CPU_PAGE_PROPERTY CPUPageProperty;
			D3D12_MEMORY_POOL MemoryPoolPreference;
			unsigned int CreationNodeMask;
			unsigned int VisibleNodeMask;
		};
	}
}