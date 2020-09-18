#pragma once

#include "D3D12_RAYTRACING_PIPELINE_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RAYTRACING_PIPELINE_CONFIG1
        {
            unsigned int MaxTraceRecursionDepth;
            D3D12_RAYTRACING_PIPELINE_FLAGS Flags;
        };
    }
}