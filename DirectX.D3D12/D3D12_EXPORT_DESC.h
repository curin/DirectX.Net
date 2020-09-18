#pragma once

#include "D3D12_EXPORT_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_EXPORT_DESC
        {
            [MarshalAs(UnmanagedType::BStr)]
            String^ Name;
            [MarshalAs(UnmanagedType::BStr)]
            String^ ExportToRename;
            D3D12_EXPORT_FLAGS Flags;
        };
    }
}