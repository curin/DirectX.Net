#pragma once

#include "D3D12_TEXTURE_COPY_TYPE.h"
#include "D3D12_PLACED_SUBRESOURCE_FOOTPRINT.h"

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
            [FieldOffset(sizeof(IntPtr))] 
            D3D12_TEXTURE_COPY_TYPE Type;
            [FieldOffset(sizeof(IntPtr)) + sizeof(D3D12_TEXTURE_COPY_TYPE)]
            D3D12_PLACED_SUBRESOURCE_FOOTPRINT PlacedFootprint;
            [FieldOffset(sizeof(IntPtr)) + sizeof(D3D12_TEXTURE_COPY_TYPE)]
            unsigned int SubresourceIndex;
        };
    }
}