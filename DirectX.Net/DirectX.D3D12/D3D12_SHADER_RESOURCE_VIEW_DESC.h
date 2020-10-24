#pragma once

#include "D3D12_SRV_DIMENSION.h"
#include "D3D12_BUFFER_SRV.h"
#include "D3D12_TEX1D_SRV.h"
#include "D3D12_TEX1D_ARRAY_SRV.h"
#include "D3D12_TEX2D_SRV.h"
#include "D3D12_TEX2D_ARRAY_SRV.h"
#include "D3D12_TEX2DMS_SRV.h"
#include "D3D12_TEX2DMS_ARRAY_SRV.h"
#include "D3D12_TEX3D_SRV.h"
#include "D3D12_TEXCUBE_SRV.h"
#include "D3D12_TEXCUBE_ARRAY_SRV.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_SHADER_RESOURCE_VIEW_DESC
        {
            [FieldOffset(0)]
            DirectX::DXGI::DXGI_FORMAT Format;
            [FieldOffset(EnumSize)]
            D3D12_SRV_DIMENSION ViewDimension;
            [FieldOffset(EnumSize << 1)]
            unsigned int Shader4ComponentMapping;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_BUFFER_SRV Buffer;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEX1D_SRV Texture1D;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEX1D_ARRAY_SRV Texture1DArray;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEX2D_SRV Texture2D;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEX2D_ARRAY_SRV Texture2DArray;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEX2DMS_SRV Texture2DMS;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEX2DMS_ARRAY_SRV Texture2DMSArray;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEX3D_SRV Texture3D;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEXCUBE_SRV TextureCube;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_TEXCUBE_ARRAY_SRV TextureCubeArray;
            [FieldOffset((EnumSize << 1) + UIntSize)]
            D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV RaytracingAccelerationStructure;
        };
    }
}