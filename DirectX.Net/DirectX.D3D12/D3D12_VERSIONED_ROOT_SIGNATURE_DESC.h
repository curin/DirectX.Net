#pragma once

#include "D3D_ROOT_SIGNATURE_VERSION.h"
#include "D3D12_ROOT_SIGNATURE_DESC.h"
#include "D3D12_ROOT_SIGNATURE_DESC1.h"
#include "Macros.h"


using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct D3D12_VERSIONED_ROOT_SIGNATURE_DESC
        {
            [FieldOffset(0)]
            D3D_ROOT_SIGNATURE_VERSION Version;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_SIGNATURE_DESC Desc_1_0;
            [FieldOffset(EnumSize)]
            D3D12_ROOT_SIGNATURE_DESC1 Desc_1_1;
        };
    }
}