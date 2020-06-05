#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_ARCHITECTURE
        {
            unsigned int NodeIndex;
            [MarshalAs(UnmanagedType::Bool)]
            bool TileBasedRenderer;
            [MarshalAs(UnmanagedType::Bool)]
            bool UMA;
            [MarshalAs(UnmanagedType::Bool)]
            bool CacheCoherentUMA;
        };
    }
}