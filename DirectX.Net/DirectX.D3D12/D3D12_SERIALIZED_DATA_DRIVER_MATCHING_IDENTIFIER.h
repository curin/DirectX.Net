#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER
        {
            Guid DriverOpaqueGUID;
        private:
            unsigned char DriverOpaqueVersioningData0;
            unsigned char DriverOpaqueVersioningData1;
            unsigned char DriverOpaqueVersioningData2;
            unsigned char DriverOpaqueVersioningData3;
            unsigned char DriverOpaqueVersioningData4;
            unsigned char DriverOpaqueVersioningData5;
            unsigned char DriverOpaqueVersioningData6;
            unsigned char DriverOpaqueVersioningData7;
            unsigned char DriverOpaqueVersioningData8;
            unsigned char DriverOpaqueVersioningData9;
            unsigned char DriverOpaqueVersioningData10;
            unsigned char DriverOpaqueVersioningData11;
            unsigned char DriverOpaqueVersioningData12;
            unsigned char DriverOpaqueVersioningData13;
            unsigned char DriverOpaqueVersioningData14;
            unsigned char DriverOpaqueVersioningData15;
        public:
            property UnmanagedArray_Byte^ DriverOpaqueVersioningData
            {
                UnmanagedArray_Byte^ get()
                {
                    pin_ptr<unsigned char> loc = &DriverOpaqueVersioningData0;
                    return gcnew UnmanagedArray_Byte(loc, 16);
                }
            }
        };
    }
}