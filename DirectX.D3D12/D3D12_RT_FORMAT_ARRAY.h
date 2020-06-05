#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RT_FORMAT_ARRAY
        {
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 8)]
            array<DirectX::DXGI::DXGI_FORMAT>^ RTFormats;
            unsigned int NumRenderTargets;
        };
    }
}