#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

#include "D3D12_STATE_SUBOBJECT_TYPE.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_STATE_SUBOBJECT
        {
            D3D12_STATE_SUBOBJECT_TYPE Type;
            IntPtr pDesc;
        };
    }
}