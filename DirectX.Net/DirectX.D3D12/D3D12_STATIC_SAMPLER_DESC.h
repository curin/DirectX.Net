#pragma once

#include "D3D12_FILTER.h"
#include "D3D12_TEXTURE_ADDRESS_MODE.h"
#include "D3D12_COMPARISON_FUNC.h"
#include "D3D12_STATIC_BORDER_COLOR.h"
#include "D3D12_SHADER_VISIBILITY.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_STATIC_SAMPLER_DESC
        {
            D3D12_FILTER Filter;
            D3D12_TEXTURE_ADDRESS_MODE AddressU;
            D3D12_TEXTURE_ADDRESS_MODE AddressV;
            D3D12_TEXTURE_ADDRESS_MODE AddressW;
            float MipLODBias;
            unsigned int MaxAnisotropy;
            D3D12_COMPARISON_FUNC ComparisonFunc;
            D3D12_STATIC_BORDER_COLOR BorderColor;
            float MinLOD;
            float MaxLOD;
            unsigned int ShaderRegister;
            unsigned int RegisterSpace;
            D3D12_SHADER_VISIBILITY ShaderVisibility;
        };
    }
}