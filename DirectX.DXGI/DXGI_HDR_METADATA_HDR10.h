#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_HDR_METADATA_HDR10
        {
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<unsigned short>^ RedPrimary;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<unsigned short>^ GreenPrimary;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<unsigned short>^ BluePrimary;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 2)]
            array<unsigned short>^ WhitePoint;
            unsigned int MaxMasteringLuminance;
            unsigned int MinMasteringLuminance;
            unsigned short MaxContentLightLevel;
            unsigned short MaxFrameAverageLightLevel;
        };
    }
}