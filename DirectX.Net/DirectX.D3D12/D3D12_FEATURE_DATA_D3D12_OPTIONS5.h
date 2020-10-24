#pragma once

#include "D3D12_RENDER_PASS_TIER.h"
#include "D3D12_RAYTRACING_TIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS5
		{
			[MarshalAs(UnmanagedType::Bool)]
			bool SRVOnlyTiledResourceTier3;
			D3D12_RENDER_PASS_TIER RenderPassesTier;
			D3D12_RAYTRACING_TIER RaytracingTier;
		};
	}
}