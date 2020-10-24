#pragma once

#include "D3D12_RESOURCE_DIMENSION.h"
#include "D3D12_TEXTURE_LAYOUT.h"
#include "D3D12_RESOURCE_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_RESOURCE_DESC
		{
            D3D12_RESOURCE_DIMENSION Dimension;
            unsigned long long Alignment;
            unsigned long long Width;
            unsigned int Height;
            unsigned short DepthOrArraySize;
            unsigned short MipLevels;
            DirectX::DXGI::DXGI_FORMAT Format;
            DirectX::DXGI::DXGI_SAMPLE_DESC SampleDesc;
            D3D12_TEXTURE_LAYOUT Layout;
            D3D12_RESOURCE_FLAGS Flags;
		};
	}
}