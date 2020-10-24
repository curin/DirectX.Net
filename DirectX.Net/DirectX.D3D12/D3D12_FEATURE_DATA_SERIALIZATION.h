#pragma once

#include "D3D12_HEAP_SERIALIZATION_TIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_SERIALIZATION
        {
            unsigned int NodeIndex;
            D3D12_HEAP_SERIALIZATION_TIER HeapSerializationTier;
        };
    }
}