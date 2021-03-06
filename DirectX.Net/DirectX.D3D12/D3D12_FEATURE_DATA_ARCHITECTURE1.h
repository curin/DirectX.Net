#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_ARCHITECTURE1
        {
            unsigned int NodeIndex;
            int TileBasedRenderer;
            int UMA;
            int CacheCoherentUMA;
            int IsolatedMMU;
        };
    }
}