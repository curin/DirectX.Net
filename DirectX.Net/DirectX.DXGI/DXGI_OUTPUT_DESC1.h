#pragma once

#include "DXGI_MODE_ROTATION.h"
#include "DXGI_COLOR_SPACE_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_OUTPUT_DESC1
        {
        private:
#pragma region Hidden
            wchar_t DeviceName0;
            wchar_t DeviceName1;
            wchar_t DeviceName2;
            wchar_t DeviceName3;
            wchar_t DeviceName4;
            wchar_t DeviceName5;
            wchar_t DeviceName6;
            wchar_t DeviceName7;
            wchar_t DeviceName8;
            wchar_t DeviceName9;
            wchar_t DeviceName10;
            wchar_t DeviceName11;
            wchar_t DeviceName12;
            wchar_t DeviceName13;
            wchar_t DeviceName14;
            wchar_t DeviceName15;
            wchar_t DeviceName16;
            wchar_t DeviceName17;
            wchar_t DeviceName18;
            wchar_t DeviceName19;
            wchar_t DeviceName20;
            wchar_t DeviceName21;
            wchar_t DeviceName22;
            wchar_t DeviceName23;
            wchar_t DeviceName24;
            wchar_t DeviceName25;
            wchar_t DeviceName26;
            wchar_t DeviceName27;
            wchar_t DeviceName28;
            wchar_t DeviceName29;
            wchar_t DeviceName30;
            wchar_t DeviceName31;
            wchar_t DeviceName32;
            wchar_t DeviceName33;
            wchar_t DeviceName34;
            wchar_t DeviceName35;
            wchar_t DeviceName36;
            wchar_t DeviceName37;
            wchar_t DeviceName38;
            wchar_t DeviceName39;
            wchar_t DeviceName40;
            wchar_t DeviceName41;
            wchar_t DeviceName42;
            wchar_t DeviceName43;
            wchar_t DeviceName44;
            wchar_t DeviceName45;
            wchar_t DeviceName46;
            wchar_t DeviceName47;
            wchar_t DeviceName48;
            wchar_t DeviceName49;
            wchar_t DeviceName50;
            wchar_t DeviceName51;
            wchar_t DeviceName52;
            wchar_t DeviceName53;
            wchar_t DeviceName54;
            wchar_t DeviceName55;
            wchar_t DeviceName56;
            wchar_t DeviceName57;
            wchar_t DeviceName58;
            wchar_t DeviceName59;
            wchar_t DeviceName60;
            wchar_t DeviceName61;
            wchar_t DeviceName62;
            wchar_t DeviceName63;
            wchar_t DeviceName64;
            wchar_t DeviceName65;
            wchar_t DeviceName66;
            wchar_t DeviceName67;
            wchar_t DeviceName68;
            wchar_t DeviceName69;
            wchar_t DeviceName70;
            wchar_t DeviceName71;
            wchar_t DeviceName72;
            wchar_t DeviceName73;
            wchar_t DeviceName74;
            wchar_t DeviceName75;
            wchar_t DeviceName76;
            wchar_t DeviceName77;
            wchar_t DeviceName78;
            wchar_t DeviceName79;
            wchar_t DeviceName80;
            wchar_t DeviceName81;
            wchar_t DeviceName82;
            wchar_t DeviceName83;
            wchar_t DeviceName84;
            wchar_t DeviceName85;
            wchar_t DeviceName86;
            wchar_t DeviceName87;
            wchar_t DeviceName88;
            wchar_t DeviceName89;
            wchar_t DeviceName90;
            wchar_t DeviceName91;
            wchar_t DeviceName92;
            wchar_t DeviceName93;
            wchar_t DeviceName94;
            wchar_t DeviceName95;
            wchar_t DeviceName96;
            wchar_t DeviceName97;
            wchar_t DeviceName98;
            wchar_t DeviceName99;
            wchar_t DeviceName100;
            wchar_t DeviceName101;
            wchar_t DeviceName102;
            wchar_t DeviceName103;
            wchar_t DeviceName104;
            wchar_t DeviceName105;
            wchar_t DeviceName106;
            wchar_t DeviceName107;
            wchar_t DeviceName108;
            wchar_t DeviceName109;
            wchar_t DeviceName110;
            wchar_t DeviceName111;
            wchar_t DeviceName112;
            wchar_t DeviceName113;
            wchar_t DeviceName114;
            wchar_t DeviceName115;
            wchar_t DeviceName116;
            wchar_t DeviceName117;
            wchar_t DeviceName118;
            wchar_t DeviceName119;
            wchar_t DeviceName120;
            wchar_t DeviceName121;
            wchar_t DeviceName122;
            wchar_t DeviceName123;
            wchar_t DeviceName124;
            wchar_t DeviceName125;
            wchar_t DeviceName126;
            wchar_t DeviceName127;

#pragma endregion
        public:
            property UnmanagedArray_WChar^ DeviceName
            {
                UnmanagedArray_WChar^ get()
                {
                    pin_ptr<wchar_t> loc = &DeviceName0;
                    return gcnew UnmanagedArray_WChar(loc, 128);
                }
            }
            RECT DesktopCoordinates;
            int AttachedToDesktop;
            DXGI_MODE_ROTATION Rotation;
            IntPtr Monitor;
            unsigned int BitsPerColor;
            DXGI_COLOR_SPACE_TYPE ColorSpace;
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
            float MinLuminance;
            float MaxLuminance;
            float MaxFullFrameLuminance;
        };
    }
}