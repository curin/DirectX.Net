#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_GPU_VIRTUAL_ADDRESS_RANGE
        {
            unsigned long long StartAddress;
            unsigned long long SizeInBytes;
        };
    }
}