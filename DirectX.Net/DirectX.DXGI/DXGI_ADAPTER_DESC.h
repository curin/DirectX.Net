#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_ADAPTER_DESC
        {
        private:
            wchar_t description0;
            wchar_t description1;
            wchar_t description2;
            wchar_t description3;
            wchar_t description4;
            wchar_t description5;
            wchar_t description6;
            wchar_t description7;
            wchar_t description8;
            wchar_t description9;
            wchar_t description10;
            wchar_t description11;
            wchar_t description12;
            wchar_t description13;
            wchar_t description14;
            wchar_t description15;
            wchar_t description16;
            wchar_t description17;
            wchar_t description18;
            wchar_t description19;
            wchar_t description20;
            wchar_t description21;
            wchar_t description22;
            wchar_t description23;
            wchar_t description24;
            wchar_t description25;
            wchar_t description26;
            wchar_t description27;
            wchar_t description28;
            wchar_t description29;
            wchar_t description30;
            wchar_t description31;
            wchar_t description32;
            wchar_t description33;
            wchar_t description34;
            wchar_t description35;
            wchar_t description36;
            wchar_t description37;
            wchar_t description38;
            wchar_t description39;
            wchar_t description40;
            wchar_t description41;
            wchar_t description42;
            wchar_t description43;
            wchar_t description44;
            wchar_t description45;
            wchar_t description46;
            wchar_t description47;
            wchar_t description48;
            wchar_t description49;
            wchar_t description50;
            wchar_t description51;
            wchar_t description52;
            wchar_t description53;
            wchar_t description54;
            wchar_t description55;
            wchar_t description56;
            wchar_t description57;
            wchar_t description58;
            wchar_t description59;
            wchar_t description60;
            wchar_t description61;
            wchar_t description62;
            wchar_t description63;
            wchar_t description64;
            wchar_t description65;
            wchar_t description66;
            wchar_t description67;
            wchar_t description68;
            wchar_t description69;
            wchar_t description70;
            wchar_t description71;
            wchar_t description72;
            wchar_t description73;
            wchar_t description74;
            wchar_t description75;
            wchar_t description76;
            wchar_t description77;
            wchar_t description78;
            wchar_t description79;
            wchar_t description80;
            wchar_t description81;
            wchar_t description82;
            wchar_t description83;
            wchar_t description84;
            wchar_t description85;
            wchar_t description86;
            wchar_t description87;
            wchar_t description88;
            wchar_t description89;
            wchar_t description90;
            wchar_t description91;
            wchar_t description92;
            wchar_t description93;
            wchar_t description94;
            wchar_t description95;
            wchar_t description96;
            wchar_t description97;
            wchar_t description98;
            wchar_t description99;
            wchar_t description100;
            wchar_t description101;
            wchar_t description102;
            wchar_t description103;
            wchar_t description104;
            wchar_t description105;
            wchar_t description106;
            wchar_t description107;
            wchar_t description108;
            wchar_t description109;
            wchar_t description110;
            wchar_t description111;
            wchar_t description112;
            wchar_t description113;
            wchar_t description114;
            wchar_t description115;
            wchar_t description116;
            wchar_t description117;
            wchar_t description118;
            wchar_t description119;
            wchar_t description120;
            wchar_t description121;
            wchar_t description122;
            wchar_t description123;
            wchar_t description124;
            wchar_t description125;
            wchar_t description126;
            wchar_t description127;
        public:
            property UnmanagedArray_WChar^ Description
            {
                UnmanagedArray_WChar^ get()
                {
                    pin_ptr<wchar_t> loc = &description0;
                    return gcnew UnmanagedArray_WChar(loc, 128);
                }
            }
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