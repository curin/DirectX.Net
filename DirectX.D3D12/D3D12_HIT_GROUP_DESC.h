#pragma once

#include "D3D12_HIT_GROUP_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_HIT_GROUP_DESC
        {
            [MarshalAs(UnmanagedType::BStr)]
            String^ HitGroupExport;
            D3D12_HIT_GROUP_TYPE Type;
            [MarshalAs(UnmanagedType::BStr)]
            String^ AnyHitShaderImport;
            [MarshalAs(UnmanagedType::BStr)]
            String^ ClosestHitShaderImport;
            [MarshalAs(UnmanagedType::BStr)]
            String^ IntersectionShaderImport;
        };
    }
}