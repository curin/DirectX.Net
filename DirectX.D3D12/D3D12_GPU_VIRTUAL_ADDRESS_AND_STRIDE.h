#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE
        {
            unsigned long long StartAddress;
            unsigned long long StrideInBytes;
        };
    }
}