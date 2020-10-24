#pragma once

#include "D3D12_DEPTH_STENCIL_VALUE.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Explicit)]
		public value struct D3D12_CLEAR_VALUE
		{
			[FieldOffset(0)]
			DirectX::DXGI::DXGI_FORMAT Format;
			[FieldOffset(EnumSize)]
			[MarshalAs(UnmanagedType::ByValArray, SizeConst=4)]
			array<float>^ Color;
			[FieldOffset(EnumSize)]
			D3D12_DEPTH_STENCIL_VALUE DepthStencil;
		};
	}
}