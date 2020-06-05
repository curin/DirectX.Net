#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_PIPELINE_STATE_STREAM_DESC
        {
            size_t SizeInBytes;
            IntPtr pPipelineStateSubobjectStream;
        };
    }
}