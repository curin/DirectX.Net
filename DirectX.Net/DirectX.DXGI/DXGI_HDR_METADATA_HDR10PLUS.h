#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_HDR_METADATA_HDR10PLUS
        {
        private:
            unsigned char Data0;
            unsigned char Data1;
            unsigned char Data2;
            unsigned char Data3;
            unsigned char Data4;
            unsigned char Data5;
            unsigned char Data6;
            unsigned char Data7;
            unsigned char Data8;
            unsigned char Data9;
            unsigned char Data10;
            unsigned char Data11;
            unsigned char Data12;
            unsigned char Data13;
            unsigned char Data14;
            unsigned char Data15;
            unsigned char Data16;
            unsigned char Data17;
            unsigned char Data18;
            unsigned char Data19;
            unsigned char Data20;
            unsigned char Data21;
            unsigned char Data22;
            unsigned char Data23;
            unsigned char Data24;
            unsigned char Data25;
            unsigned char Data26;
            unsigned char Data27;
            unsigned char Data28;
            unsigned char Data29;
            unsigned char Data30;
            unsigned char Data31;
            unsigned char Data32;
            unsigned char Data33;
            unsigned char Data34;
            unsigned char Data35;
            unsigned char Data36;
            unsigned char Data37;
            unsigned char Data38;
            unsigned char Data39;
            unsigned char Data40;
            unsigned char Data41;
            unsigned char Data42;
            unsigned char Data43;
            unsigned char Data44;
            unsigned char Data45;
            unsigned char Data46;
            unsigned char Data47;
            unsigned char Data48;
            unsigned char Data49;
            unsigned char Data50;
            unsigned char Data51;
            unsigned char Data52;
            unsigned char Data53;
            unsigned char Data54;
            unsigned char Data55;
            unsigned char Data56;
            unsigned char Data57;
            unsigned char Data58;
            unsigned char Data59;
            unsigned char Data60;
            unsigned char Data61;
            unsigned char Data62;
            unsigned char Data63;
            unsigned char Data64;
            unsigned char Data65;
            unsigned char Data66;
            unsigned char Data67;
            unsigned char Data68;
            unsigned char Data69;
            unsigned char Data70;
            unsigned char Data71;
        public:
            property UnmanagedArray_Byte^ Data
            {
                UnmanagedArray_Byte^ get()
                {
                    pin_ptr<unsigned char> loc = &Data0;
                    return gcnew UnmanagedArray_Byte(loc, 72);
                }
            }
        };
    }
}