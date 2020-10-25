#pragma once

#include "D3D12_HIT_GROUP_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_HIT_GROUP_DESC
        {
            UnmanagedConstantWString HitGroupExport;
            D3D12_HIT_GROUP_TYPE Type;
            UnmanagedConstantWString AnyHitShaderImport;
            UnmanagedConstantWString ClosestHitShaderImport;
            UnmanagedConstantWString IntersectionShaderImport;
        };
    }
}