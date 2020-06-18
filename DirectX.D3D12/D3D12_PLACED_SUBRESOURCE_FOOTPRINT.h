#pragma once

#include "D3D12_SUBRESOURCE_FOOTPRINT.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_PLACED_SUBRESOURCE_FOOTPRINT
        {
            unsigned long long Offset;
            D3D12_SUBRESOURCE_FOOTPRINT Footprint;
        };
    }
}