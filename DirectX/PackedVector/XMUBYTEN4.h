#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMUBYTEN4
        {
        public:
            [FieldOffset(0)] unsigned char x;
            [FieldOffset(1)] unsigned char y;
            [FieldOffset(2)] unsigned char z;
            [FieldOffset(3)] unsigned char w;
            [FieldOffset(0)] unsigned int v;

            XMUBYTEN4(unsigned char _x, unsigned char _y, unsigned char _z, unsigned char _w)
            {
                x = _x;
                y = _y;
                z = _z;
                w = _w;
            }

            XMUBYTEN4(float _x, float _y, float _z, float _w)
            {
                x = (unsigned char)_x;
                y = (unsigned char)_y;
                z = (unsigned char)_z;
                w = (unsigned char)_w;
            }

            XMUBYTEN4(unsigned int c)
            {
                v = c;
            }

            XMUBYTEN4(unsigned short c)
            {
                v = c;
            }

            XMUBYTEN4(array<float>^ pArray)
            {
                x = (unsigned char)pArray[0];
                y = (unsigned char)pArray[1];
                z = (unsigned char)pArray[2];
                w = (unsigned char)pArray[3];
            }

            XMUBYTEN4(array<unsigned char>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
                z = pArray[2];
                w = pArray[3];
            }
        };
    }
}