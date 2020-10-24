#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT
        {
            unsigned int MaxGPUVirtualAddressBitsPerResource;
            unsigned int MaxGPUVirtualAddressBitsPerProcess;
        };
    }
}