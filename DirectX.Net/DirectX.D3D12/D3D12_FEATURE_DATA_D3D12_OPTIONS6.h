#pragma once

#include "D3D12_VARIABLE_SHADING_RATE_TIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS6
		{
			[MarshalAs(UnmanagedType::Bool)]
			bool AdditionalShadingRatesSupported;
			[MarshalAs(UnmanagedType::Bool)]
			bool PerPrimitiveShadingRateSupportedWithViewportIndexing;
			D3D12_VARIABLE_SHADING_RATE_TIER VariableShadingRateTier;
			unsigned int ShadingRateImageTileSize;
			[MarshalAs(UnmanagedType::Bool)]
			bool BackgroundProcessingSupported;
		};
	}
}