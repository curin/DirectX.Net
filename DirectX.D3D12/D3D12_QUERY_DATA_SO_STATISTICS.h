#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_QUERY_DATA_SO_STATISTICS
        {
            unsigned long long NumPrimitivesWritten;
            unsigned long long PrimitivesStorageNeeded;
        };
    }
}