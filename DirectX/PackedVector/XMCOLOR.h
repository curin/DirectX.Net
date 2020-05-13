#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMCOLOR
        {
        public:
            [FieldOffset(0)] unsigned char x;
            [FieldOffset(1)] unsigned char y;
            [FieldOffset(2)] unsigned char z;
            [FieldOffset(3)] unsigned char w;
            [FieldOffset(0)] unsigned int v;

            XMCOLOR(unsigned char _x, unsigned char _y, unsigned char _z, unsigned char _w)
            {
                x = _x;
                y = _y;
                z = _z;
                w = _w;
            }

            XMCOLOR(float _x, float _y, float _z, float _w)
            {
                x = (unsigned char)(_x * 255);
                y = (unsigned char)(_y * 255);
                z = (unsigned char)(_z * 255);
                w = (unsigned char)(_w * 255);
            }

            XMCOLOR(unsigned int c)
            {
                v = c;
            }

            XMCOLOR(unsigned short c)
            {
                v = c;
            }

            XMCOLOR(array<float>^ pArray)
            {
                x = (unsigned char)(pArray[0] * 255);
                y = (unsigned char)(pArray[1] * 255);
                z = (unsigned char)(pArray[2] * 255);
                w = (unsigned char)(pArray[3] * 255);
            }

            XMCOLOR(array<unsigned char>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
                z = pArray[2];
                w = pArray[3];
            }
        };
    }
}
