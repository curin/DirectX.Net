#pragma once

#include "D3D12_MESH_SHADER_TIER.h"
#include "D3D12_SAMPLER_FEEDBACK_TIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS7
		{
			D3D12_MESH_SHADER_TIER MeshShaderTier;
			D3D12_SAMPLER_FEEDBACK_TIER SamplerFeedbackTier;
		};
	}
}