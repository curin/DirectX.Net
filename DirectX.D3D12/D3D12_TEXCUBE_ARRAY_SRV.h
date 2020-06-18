#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_TEXCUBE_ARRAY_SRV
        {
            unsigned int MostDetailedMip;
            unsigned int MipLevels;
            unsigned int First2DArrayFace;
            unsigned int NumCubes;
            float ResourceMinLODClamp;
        };
    }
}