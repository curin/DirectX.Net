#pragma once

#include "DXGI_GRAPHICS_PREEMPTION_GRANULARITY.h"
#include "DXGI_COMPUTE_PREEMPTION_GRANULARITY.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_ADAPTER_DESC2
        {
            [MarshalAs(UnmanagedType::BStr, SizeConst = 128)]
            String^ Description;
            unsigned int VendorId;
            unsigned int DeviceId;
            unsigned int SubSysId;
            unsigned int Revision;
            unsigned long long DedicatedVideoMemory;
            unsigned long long DedicatedSystemMemory;
            unsigned long long SharedSystemMemory;
            LUID AdapterLuid;
            unsigned int Flags;
            DXGI_GRAPHICS_PREEMPTION_GRANULARITY GraphicsPreemptionGranularity;
            DXGI_COMPUTE_PREEMPTION_GRANULARITY ComputePreemptionGranularity;
        };
    }
}