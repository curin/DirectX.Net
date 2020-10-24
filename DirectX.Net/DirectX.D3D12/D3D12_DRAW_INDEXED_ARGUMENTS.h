#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DRAW_INDEXED_ARGUMENTS
        {
            unsigned int IndexCountPerInstance;
            unsigned int InstanceCount;
            unsigned int StartIndexLocation;
            int BaseVertexLocation;
            unsigned int StartInstanceLocation;
        };
    }
}