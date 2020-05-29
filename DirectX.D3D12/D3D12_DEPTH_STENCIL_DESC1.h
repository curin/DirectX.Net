#pragma once

#include "D3D12_DEPTH_WRITE_MASK.h"
#include "D3D12_COMPARISON_FUNC.h"
#include "D3D12_DEPTH_STENCILOP_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DEPTH_STENCIL_DESC1
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool DepthEnable;
            D3D12_DEPTH_WRITE_MASK DepthWriteMask;
            D3D12_COMPARISON_FUNC DepthFunc;
            [MarshalAs(UnmanagedType::Bool)]
            bool StencilEnable;
            unsigned char StencilReadMask;
            unsigned char StencilWriteMask;
            D3D12_DEPTH_STENCILOP_DESC FrontFace;
            D3D12_DEPTH_STENCILOP_DESC BackFace;
            [MarshalAs(UnmanagedType::Bool)]
            bool DepthBoundsTestEnable;
        };
    }
}