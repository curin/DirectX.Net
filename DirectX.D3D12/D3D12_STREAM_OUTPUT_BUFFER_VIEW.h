#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_STREAM_OUTPUT_BUFFER_VIEW
        {
            unsigned long long BufferLocation;
            unsigned long long SizeInBytes;
            unsigned long long BufferFilledSizeLocation;
        };
    }
}