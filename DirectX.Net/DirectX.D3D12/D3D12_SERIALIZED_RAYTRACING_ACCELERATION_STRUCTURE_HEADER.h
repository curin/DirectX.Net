#pragma once

#include "D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SERIALIZED_RAYTRACING_ACCELERATION_STRUCTURE_HEADER
        {
            D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER DriverMatchingIdentifier;
            unsigned long long SerializedSizeInBytesIncludingHeader;
            unsigned long long DeserializedSizeInBytes;
            unsigned long long NumBottomLevelAccelerationStructurePointersAfterHeader;
        };
    }
}