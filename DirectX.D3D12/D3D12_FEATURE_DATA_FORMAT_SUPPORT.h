#pragma once

#include "D3D12_FORMAT_SUPPORT1.h"
#include "D3D12_FORMAT_SUPPORT2.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_FORMAT_SUPPORT
        {
            DirectX::DXGI::DXGI_FORMAT Format;
            D3D12_FORMAT_SUPPORT1 Support1;
            D3D12_FORMAT_SUPPORT2 Support2;
        };
    }
}