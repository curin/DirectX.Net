#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RESOURCE_ALIASING_BARRIER
        {
            IntPtr pResourceBefore;//ID3D12Resource*
            IntPtr pResourceAfter;//ID3D12Resource*
        };
    }
}