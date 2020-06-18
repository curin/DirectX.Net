#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SUBRESOURCE_FOOTPRINT
        {
            DirectX::DXGI::DXGI_FORMAT Format;
            UINT Width;
            UINT Height;
            UINT Depth;
            UINT RowPitch;
        };
    }
}