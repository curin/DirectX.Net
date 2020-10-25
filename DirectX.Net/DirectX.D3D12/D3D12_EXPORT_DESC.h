#pragma once

#include "D3D12_EXPORT_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_EXPORT_DESC
        {
            UnmanagedConstantWString Name;
            UnmanagedConstantWString ExportToRename;
            D3D12_EXPORT_FLAGS Flags;
        };
    }
}