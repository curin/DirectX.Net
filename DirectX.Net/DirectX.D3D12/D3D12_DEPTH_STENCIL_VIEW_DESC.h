#pragma once

#include "D3D12_DSV_DIMENSION.h"
#include "D3D12_DSV_FLAGS.h"
#include "D3D12_TEX1D_DSV.h"
#include "D3D12_TEX1D_ARRAY_DSV.h"
#include "D3D12_TEX2D_DSV.h"
#include "D3D12_TEX2D_ARRAY_DSV.h"
#include "D3D12_TEX2DMS_DSV.h"
#include "D3D12_TEX2DMS_ARRAY_DSV.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_DEPTH_STENCIL_VIEW_DESC
        {
            [FieldOffset(0)]
            DirectX::DXGI::DXGI_FORMAT Format;
            [FieldOffset(EnumSize)]
            D3D12_DSV_DIMENSION ViewDimension;
            [FieldOffset(EnumSize << 1)]
            D3D12_DSV_FLAGS Flags;
            [FieldOffset(3 * EnumSize)]
            D3D12_TEX1D_DSV Texture1D;
            [FieldOffset(3 * EnumSize)]
            D3D12_TEX1D_ARRAY_DSV Texture1DArray;
            [FieldOffset(3 * EnumSize)]
            D3D12_TEX2D_DSV Texture2D;
            [FieldOffset(3 * EnumSize)]
            D3D12_TEX2D_ARRAY_DSV Texture2DArray;
            [FieldOffset(3 * EnumSize)]
            D3D12_TEX2DMS_DSV Texture2DMS;
            [FieldOffset(3 * EnumSize)]
            D3D12_TEX2DMS_ARRAY_DSV Texture2DMSArray;
        };
    }
}