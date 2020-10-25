#pragma once

#include "D3D12_CROSS_NODE_SHARING_TIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_FEATURE_DATA_CROSS_NODE
		{
			D3D12_CROSS_NODE_SHARING_TIER SharingTier;
			int AtomicShaderInstructions;
		};
	}
}