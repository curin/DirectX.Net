#pragma once

#include "D3D12_FILTER.h"
#include "D3D12_TEXTURE_ADDRESS_MODE.h"
#include "D3D12_COMPARISON_FUNC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SAMPLER_DESC
        {
            D3D12_FILTER Filter;
            D3D12_TEXTURE_ADDRESS_MODE AddressU;
            D3D12_TEXTURE_ADDRESS_MODE AddressV;
            D3D12_TEXTURE_ADDRESS_MODE AddressW;
            float MipLODBias;
            unsigned int MaxAnisotropy;
            D3D12_COMPARISON_FUNC ComparisonFunc;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst=4)]
            array<float>^ BorderColor;
            float MinLOD;
            float MaxLOD;
        };
    }
}