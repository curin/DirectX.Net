#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_EXISTING_HEAPS
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool Supported;
        };
    }
}