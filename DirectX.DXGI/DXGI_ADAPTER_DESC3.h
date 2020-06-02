#pragma once

#include "DXGI_GRAPHICS_PREEMPTION_GRANULARITY.h"
#include "DXGI_COMPUTE_PREEMPTION_GRANULARITY.h"
#include "DXGI_ADAPTER_FLAG3.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_ADAPTER_DESC3
        {
            [MarshalAs(UnmanagedType::BStr, SizeConst = 128)]
            String^ Description;
            unsigned int VendorId;
            unsigned int DeviceId;
            unsigned int SubSysId;
            unsigned int Revision;
            size_t DedicatedVideoMemory;
            size_t DedicatedSystemMemory;
            size_t SharedSystemMemory;
            LUID AdapterLuid;
            DXGI_ADAPTER_FLAG3 Flags;
            DXGI_GRAPHICS_PREEMPTION_GRANULARITY GraphicsPreemptionGranularity;
            DXGI_COMPUTE_PREEMPTION_GRANULARITY ComputePreemptionGranularity;
        };
    }
}