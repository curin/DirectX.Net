#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

#include "D3D_ROOT_SIGNATURE_VERSION.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_ROOT_SIGNATURE
        {
            D3D_ROOT_SIGNATURE_VERSION HighestVersion;
        };
    }
}