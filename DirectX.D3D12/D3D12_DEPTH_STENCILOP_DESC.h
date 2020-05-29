#pragma once

#include "D3D12_STENCIL_OP.h"
#include "D3D12_COMPARISON_FUNC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DEPTH_STENCILOP_DESC
        {
            D3D12_STENCIL_OP StencilFailOp;
            D3D12_STENCIL_OP StencilDepthFailOp;
            D3D12_STENCIL_OP StencilPassOp;
            D3D12_COMPARISON_FUNC StencilFunc;
        };
    }
}