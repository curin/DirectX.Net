#pragma once

#include "D3D12_RTV_DIMENSION.h"
#include "D3D12_BUFFER_RTV.h"
#include "D3D12_TEX1D_RTV.h"
#include "D3D12_TEX1D_ARRAY_RTV.h"
#include "D3D12_TEX2D_RTV.h"
#include "D3D12_TEX2D_ARRAY_RTV.h"
#include "D3D12_TEX2DMS_RTV.h"
#include "D3D12_TEX2DMS_ARRAY_RTV.h"
#include "D3D12_TEX3D_RTV.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_RENDER_TARGET_VIEW_DESC
        {
            [FieldOffset(0)]
            DirectX::DXGI::DXGI_FORMAT Format;
            [FieldOffset(EnumSize)]
            D3D12_RTV_DIMENSION ViewDimension;
            [FieldOffset(EnumSize << 1)]
            D3D12_BUFFER_RTV Buffer;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX1D_RTV Texture1D;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX1D_ARRAY_RTV Texture1DArray;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX2D_RTV Texture2D;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX2D_ARRAY_RTV Texture2DArray;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX2DMS_RTV Texture2DMS;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX2DMS_ARRAY_RTV Texture2DMSArray;
            [FieldOffset(EnumSize << 1)]
            D3D12_TEX3D_RTV Texture3D;
        };
    }
}