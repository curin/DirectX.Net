#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_ADAPTER_DESC
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
        };
    }
}