#pragma once

#include "D3D12_BLEND.h"
#include "D3D12_BLEND_OP.h"
#include "D3D12_LOGIC_OP.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RENDER_TARGET_BLEND_DESC
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool BlendEnable;
            [MarshalAs(UnmanagedType::Bool)]
            bool LogicOpEnable;
            D3D12_BLEND SrcBlend;
            D3D12_BLEND DestBlend;
            D3D12_BLEND_OP BlendOp;
            D3D12_BLEND SrcBlendAlpha;
            D3D12_BLEND DestBlendAlpha;
            D3D12_BLEND_OP BlendOpAlpha;
            D3D12_LOGIC_OP LogicOp;
            unsigned char RenderTargetWriteMask;
        };
    }
}