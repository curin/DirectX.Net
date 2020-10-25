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
		private:
			[FieldOffset(EnumSize)]
			float Color0;
			[FieldOffset(EnumSize + 4)]
			float Color1;
			[FieldOffset(EnumSize + 8)]
			float Color2;
			[FieldOffset(EnumSize + 12)]
			float Color3;
		public:
			property UnmanagedArray_Float^ Color
			{
				UnmanagedArray_Float^ get()
				{
					pin_ptr<float> loc = &Color0;
					return gcnew UnmanagedArray_Float(loc, 4);
				}
			}
			[FieldOffset(EnumSize)]
			D3D12_DEPTH_STENCIL_VALUE DepthStencil;
		};
	}
}