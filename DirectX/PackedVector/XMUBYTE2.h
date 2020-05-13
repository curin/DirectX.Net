#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMUBYTE2
        {
        public:
            [FieldOffset(0)] unsigned char x;
            [FieldOffset(1)] unsigned char y;
            [FieldOffset(0)] unsigned short v;

            XMUBYTE2(unsigned char _x, unsigned char _y)
            {
                x = _x;
                y = _y;
            }

            XMUBYTE2(float _x, float _y)
            {
                x = (unsigned char)_x;
                y = (unsigned char)_y;
            }

            XMUBYTE2(unsigned int c)
            {
                v = (unsigned short)c;
            }

            XMUBYTE2(unsigned short c)
            {
                v = c;
            }

            XMUBYTE2(array<float>^ pArray)
            {
                x = (unsigned char)pArray[0];
                y = (unsigned char)pArray[1];
            }

            XMUBYTE2(array<unsigned char>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
            }
        };
    }
}