#pragma once

#include "D3D12_TEXTURE_COPY_TYPE.h"
#include "D3D12_PLACED_SUBRESOURCE_FOOTPRINT.h"
#include "Macros.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_TEXTURE_COPY_LOCATION
        {
            [FieldOffset(0)] 
            IntPtr pResource;//ID3D12Resource*
            [FieldOffset(IntPtrSize)] 
            D3D12_TEXTURE_COPY_TYPE Type;
            [FieldOffset(IntPtrSize + EnumSize)]
            D3D12_PLACED_SUBRESOURCE_FOOTPRINT PlacedFootprint;
            [FieldOffset(IntPtrSize + EnumSize)]
            unsigned int SubresourceIndex;
        };
    }
}