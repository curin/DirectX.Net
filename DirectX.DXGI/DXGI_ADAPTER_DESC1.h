#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_ADAPTER_DESC1
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
        };
    }
}