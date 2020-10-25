#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_HDR_METADATA_HDR10
        {
        private:
            unsigned short RedPrimary0;
            unsigned short RedPrimary1;
            unsigned short GreenPrimary0;
            unsigned short GreenPrimary1;
            unsigned short BluePrimary0;
            unsigned short BluePrimary1;
            unsigned short WhitePoint0;
            unsigned short WhitePoint1;
        public:
            property UnmanagedArray_UInt16^ RedPrimary
            {
                UnmanagedArray_UInt16^ get()
                {
                    pin_ptr<unsigned short> loc = &RedPrimary0;
                    return gcnew UnmanagedArray_UInt16(loc, 2);
                }
            }

            property UnmanagedArray_UInt16^ GreenPrimary
            {
                UnmanagedArray_UInt16^ get()
                {
                    pin_ptr<unsigned short> loc = &GreenPrimary0;
                    return gcnew UnmanagedArray_UInt16(loc, 2);
                }
            }

            property UnmanagedArray_UInt16^ BluePrimary
            {
                UnmanagedArray_UInt16^ get()
                {
                    pin_ptr<unsigned short> loc = &BluePrimary0;
                    return gcnew UnmanagedArray_UInt16(loc, 2);
                }
            }

            property UnmanagedArray_UInt16^ WhitePoint
            {
                UnmanagedArray_UInt16^ get()
                {
                    pin_ptr<unsigned short> loc = &WhitePoint0;
                    return gcnew UnmanagedArray_UInt16(loc, 2);
                }
            }
            unsigned int MaxMasteringLuminance;
            unsigned int MinMasteringLuminance;
            unsigned short MaxContentLightLevel;
            unsigned short MaxFrameAverageLightLevel;
        };
    }
}