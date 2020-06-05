#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_FORMAT_INFO
        {
            DirectX::DXGI::DXGI_FORMAT Format;
            unsigned char PlaneCount;
        };
    }
}