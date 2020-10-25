#pragma once

using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_JPEG_QUANTIZATION_TABLE
        {
        private:
#pragma region Hidden
            unsigned char Elements0;
            unsigned char Elements1;
            unsigned char Elements2;
            unsigned char Elements3;
            unsigned char Elements4;
            unsigned char Elements5;
            unsigned char Elements6;
            unsigned char Elements7;
            unsigned char Elements8;
            unsigned char Elements9;
            unsigned char Elements10;
            unsigned char Elements11;
            unsigned char Elements12;
            unsigned char Elements13;
            unsigned char Elements14;
            unsigned char Elements15;
            unsigned char Elements16;
            unsigned char Elements17;
            unsigned char Elements18;
            unsigned char Elements19;
            unsigned char Elements20;
            unsigned char Elements21;
            unsigned char Elements22;
            unsigned char Elements23;
            unsigned char Elements24;
            unsigned char Elements25;
            unsigned char Elements26;
            unsigned char Elements27;
            unsigned char Elements28;
            unsigned char Elements29;
            unsigned char Elements30;
            unsigned char Elements31;
            unsigned char Elements32;
            unsigned char Elements33;
            unsigned char Elements34;
            unsigned char Elements35;
            unsigned char Elements36;
            unsigned char Elements37;
            unsigned char Elements38;
            unsigned char Elements39;
            unsigned char Elements40;
            unsigned char Elements41;
            unsigned char Elements42;
            unsigned char Elements43;
            unsigned char Elements44;
            unsigned char Elements45;
            unsigned char Elements46;
            unsigned char Elements47;
            unsigned char Elements48;
            unsigned char Elements49;
            unsigned char Elements50;
            unsigned char Elements51;
            unsigned char Elements52;
            unsigned char Elements53;
            unsigned char Elements54;
            unsigned char Elements55;
            unsigned char Elements56;
            unsigned char Elements57;
            unsigned char Elements58;
            unsigned char Elements59;
            unsigned char Elements60;
            unsigned char Elements61;
            unsigned char Elements62;
            unsigned char Elements63;

#pragma endregion
        public:
            property UnmanagedArray_Byte^ Elements
            {
                UnmanagedArray_Byte^ get()
                {
                    pin_ptr<unsigned char> loc = &Elements0;
                    return gcnew UnmanagedArray_Byte(loc, 64);
                }
            }
        };
    }
}