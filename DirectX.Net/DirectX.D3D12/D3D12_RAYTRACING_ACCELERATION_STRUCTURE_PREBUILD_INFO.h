#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO
        {
            unsigned long long ResultDataMaxSizeInBytes;
            unsigned long long ScratchDataSizeInBytes;
            unsigned long long UpdateScratchDataSizeInBytes;
        };
    }
}