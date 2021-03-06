#pragma once

#include "D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC
        {
            unsigned long long Transform3x4;
            DXGI::DXGI_FORMAT IndexFormat;
            DXGI::DXGI_FORMAT VertexFormat;
            unsigned int IndexCount;
            unsigned int VertexCount;
            unsigned long long IndexBuffer;
            D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE VertexBuffer;
        };
    }
}