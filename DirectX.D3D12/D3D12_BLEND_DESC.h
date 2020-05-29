#pragma once

#include "D3D12_RENDER_TARGET_BLEND_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_BLEND_DESC
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool AlphaToCoverageEnable;
            [MarshalAs(UnmanagedType::Bool)]
            bool IndependentBlendEnable;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 8)]
            array<D3D12_RENDER_TARGET_BLEND_DESC>^ RenderTarget;
        };
    }
}