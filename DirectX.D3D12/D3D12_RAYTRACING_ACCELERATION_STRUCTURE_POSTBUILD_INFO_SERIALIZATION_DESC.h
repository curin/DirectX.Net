#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_SERIALIZATION_DESC
        {
            unsigned long long SerializedSizeInBytes;
            unsigned long long NumBottomLevelAccelerationStructurePointers;
        };
    }
}