#pragma once

using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_JPEG_DC_HUFFMAN_TABLE
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
#pragma endregion
        public:
            property UnmanagedArray_Byte^ CodeCounts
            {
                UnmanagedArray_Byte^ get()
                {
                    pin_ptr<unsigned char> loc = &CodeCounts0;
                    return gcnew UnmanagedArray_Byte(loc, 12);
                }
            }

            property UnmanagedArray_Byte^ CodeValues
            {
                UnmanagedArray_Byte^ get()
                {
                    pin_ptr<unsigned char> loc = &CodeValues0;
                    return gcnew UnmanagedArray_Byte(loc, 12);
                }
            }
        };
    }
}