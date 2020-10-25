#pragma once

#include "D3D12_FILTER.h"
#include "D3D12_TEXTURE_ADDRESS_MODE.h"
#include "D3D12_COMPARISON_FUNC.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

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
        private:
            float BorderColor0;
            float BorderColor1;
            float BorderColor2;
            float BorderColor3;
        public:
            property UnmanagedArray_Float^ BorderColor
            {
                UnmanagedArray_Float^ get()
                {
                    pin_ptr<float> loc = &BorderColor0;
                    return gcnew UnmanagedArray_Float(loc, 4);
                }
            }
            float MinLOD;
            float MaxLOD;
        };
    }
}