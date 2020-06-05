#pragma once

#include "D3D12_COMMAND_LIST_SUPPORT_FLAGS.h"
#include "D3D12_VIEW_INSTANCING_TIER.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_D3D12_OPTIONS3
        {
            [MarshalAs(UnmanagedType::Bool)]
            bool CopyQueueTimestampQueriesSupported;
            [MarshalAs(UnmanagedType::Bool)]
            bool CastingFullyTypedFormatSupported;
            D3D12_COMMAND_LIST_SUPPORT_FLAGS WriteBufferImmediateSupportFlags;
            D3D12_VIEW_INSTANCING_TIER ViewInstancingTier;
            [MarshalAs(UnmanagedType::Bool)]
            bool BarycentricsSupported;
        };
    }
}