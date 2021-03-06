#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_TEX2DMS_ARRAY_SRV
        {
            unsigned int FirstArraySlice;
            unsigned int ArraySize;
        };
    }
}