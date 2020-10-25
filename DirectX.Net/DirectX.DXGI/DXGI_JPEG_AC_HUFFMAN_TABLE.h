#pragma once

using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_JPEG_AC_HUFFMAN_TABLE
        {
        private:
#pragma region Hidden
            unsigned char CodeCounts0;
            unsigned char CodeCounts1;
            unsigned char CodeCounts2;
            unsigned char CodeCounts3;
            unsigned char CodeCounts4;
            unsigned char CodeCounts5;
            unsigned char CodeCounts6;
            unsigned char CodeCounts7;
            unsigned char CodeCounts8;
            unsigned char CodeCounts9;
            unsigned char CodeCounts10;
            unsigned char CodeCounts11;
            unsigned char CodeCounts12;
            unsigned char CodeCounts13;
            unsigned char CodeCounts14;
            unsigned char CodeCounts15;
            unsigned char CodeValues0;
            unsigned char CodeValues1;
            unsigned char CodeValues2;
            unsigned char CodeValues3;
            unsigned char CodeValues4;
            unsigned char CodeValues5;
            unsigned char CodeValues6;
            unsigned char CodeValues7;
            unsigned char CodeValues8;
            unsigned char CodeValues9;
            unsigned char CodeValues10;
            unsigned char CodeValues11;
            unsigned char CodeValues12;
            unsigned char CodeValues13;
            unsigned char CodeValues14;
            unsigned char CodeValues15;
            unsigned char CodeValues16;
            unsigned char CodeValues17;
            unsigned char CodeValues18;
            unsigned char CodeValues19;
            unsigned char CodeValues20;
            unsigned char CodeValues21;
            unsigned char CodeValues22;
            unsigned char CodeValues23;
            unsigned char CodeValues24;
            unsigned char CodeValues25;
            unsigned char CodeValues26;
            unsigned char CodeValues27;
            unsigned char CodeValues28;
            unsigned char CodeValues29;
            unsigned char CodeValues30;
            unsigned char CodeValues31;
            unsigned char CodeValues32;
            unsigned char CodeValues33;
            unsigned char CodeValues34;
            unsigned char CodeValues35;
            unsigned char CodeValues36;
            unsigned char CodeValues37;
            unsigned char CodeValues38;
            unsigned char CodeValues39;
            unsigned char CodeValues40;
            unsigned char CodeValues41;
            unsigned char CodeValues42;
            unsigned char CodeValues43;
            unsigned char CodeValues44;
            unsigned char CodeValues45;
            unsigned char CodeValues46;
            unsigned char CodeValues47;
            unsigned char CodeValues48;
            unsigned char CodeValues49;
            unsigned char CodeValues50;
            unsigned char CodeValues51;
            unsigned char CodeValues52;
            unsigned char CodeValues53;
            unsigned char CodeValues54;
            unsigned char CodeValues55;
            unsigned char CodeValues56;
            unsigned char CodeValues57;
            unsigned char CodeValues58;
            unsigned char CodeValues59;
            unsigned char CodeValues60;
            unsigned char CodeValues61;
            unsigned char CodeValues62;
            unsigned char CodeValues63;
            unsigned char CodeValues64;
            unsigned char CodeValues65;
            unsigned char CodeValues66;
            unsigned char CodeValues67;
            unsigned char CodeValues68;
            unsigned char CodeValues69;
            unsigned char CodeValues70;
            unsigned char CodeValues71;
            unsigned char CodeValues72;
            unsigned char CodeValues73;
            unsigned char CodeValues74;
            unsigned char CodeValues75;
            unsigned char CodeValues76;
            unsigned char CodeValues77;
            unsigned char CodeValues78;
            unsigned char CodeValues79;
            unsigned char CodeValues80;
            unsigned char CodeValues81;
            unsigned char CodeValues82;
            unsigned char CodeValues83;
            unsigned char CodeValues84;
            unsigned char CodeValues85;
            unsigned char CodeValues86;
            unsigned char CodeValues87;
            unsigned char CodeValues88;
            unsigned char CodeValues89;
            unsigned char CodeValues90;
            unsigned char CodeValues91;
            unsigned char CodeValues92;
            unsigned char CodeValues93;
            unsigned char CodeValues94;
            unsigned char CodeValues95;
            unsigned char CodeValues96;
            unsigned char CodeValues97;
            unsigned char CodeValues98;
            unsigned char CodeValues99;
            unsigned char CodeValues100;
            unsigned char CodeValues101;
            unsigned char CodeValues102;
            unsigned char CodeValues103;
            unsigned char CodeValues104;
            unsigned char CodeValues105;
            unsigned char CodeValues106;
            unsigned char CodeValues107;
            unsigned char CodeValues108;
            unsigned char CodeValues109;
            unsigned char CodeValues110;
            unsigned char CodeValues111;
            unsigned char CodeValues112;
            unsigned char CodeValues113;
            unsigned char CodeValues114;
            unsigned char CodeValues115;
            unsigned char CodeValues116;
            unsigned char CodeValues117;
            unsigned char CodeValues118;
            unsigned char CodeValues119;
            unsigned char CodeValues120;
            unsigned char CodeValues121;
            unsigned char CodeValues122;
            unsigned char CodeValues123;
            unsigned char CodeValues124;
            unsigned char CodeValues125;
            unsigned char CodeValues126;
            unsigned char CodeValues127;
            unsigned char CodeValues128;
            unsigned char CodeValues129;
            unsigned char CodeValues130;
            unsigned char CodeValues131;
            unsigned char CodeValues132;
            unsigned char CodeValues133;
            unsigned char CodeValues134;
            unsigned char CodeValues135;
            unsigned char CodeValues136;
            unsigned char CodeValues137;
            unsigned char CodeValues138;
            unsigned char CodeValues139;
            unsigned char CodeValues140;
            unsigned char CodeValues141;
            unsigned char CodeValues142;
            unsigned char CodeValues143;
            unsigned char CodeValues144;
            unsigned char CodeValues145;
            unsigned char CodeValues146;
            unsigned char CodeValues147;
            unsigned char CodeValues148;
            unsigned char CodeValues149;
            unsigned char CodeValues150;
            unsigned char CodeValues151;
            unsigned char CodeValues152;
            unsigned char CodeValues153;
            unsigned char CodeValues154;
            unsigned char CodeValues155;
            unsigned char CodeValues156;
            unsigned char CodeValues157;
            unsigned char CodeValues158;
            unsigned char CodeValues159;
            unsigned char CodeValues160;
            unsigned char CodeValues161;
#pragma endregion
        public:
            property UnmanagedArray_Byte^ CodeCounts
            {
                UnmanagedArray_Byte^ get()
                {
                    pin_ptr<unsigned char> loc = &CodeCounts0;
                    return gcnew UnmanagedArray_Byte(loc, 16);
                }
            }

            property UnmanagedArray_Byte^ CodeValues
            {
                UnmanagedArray_Byte^ get()
                {
                    pin_ptr<unsigned char> loc = &CodeValues0;
                    return gcnew UnmanagedArray_Byte(loc, 162);
                }
            }
        };
    }
}