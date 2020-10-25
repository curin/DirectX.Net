#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS1
        {
            int WaveOps;
            unsigned int WaveLaneCountMin;
            unsigned int WaveLaneCountMax;
            unsigned int TotalLaneCount;
            int ExpandedComputeResourceStates;
            int Int64ShaderOps;
        };
    }
}