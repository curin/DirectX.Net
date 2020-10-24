#pragma once

#include "D3D12_UAV_DIMENSION.h"
#include "D3D12_BUFFER_UAV.h"
#include "D3D12_TEX1D_UAV.h"
#include "D3D12_TEX1D_ARRAY_UAV.h"
#include "D3D12_TEX2D_UAV.h"
#include "D3D12_TEX2D_ARRAY_UAV.h"
#include "D3D12_TEX3D_UAV.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_UNORDERED_ACCESS_VIEW_DESC
        {
            [FieldOffset(0)]
            DirectX::DXGI::DXGI_FORMAT Format;
            [FieldOffset(EnumSize)]
            D3D12_UAV_DIMENSION ViewDimension;
            [FieldOffset(EnumSize << 1)]
            D3D12_BUFFER_UAV Buffer;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX1D_UAV Texture1D;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX1D_ARRAY_UAV Texture1DArray;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX2D_UAV Texture2D;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX2D_ARRAY_UAV Texture2DArray;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX3D_UAV Texture3D;
        };
    }
}