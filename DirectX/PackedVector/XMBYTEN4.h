#pragma once
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMBYTEN4
        {
        public:
            [FieldOffset(0)] signed char x;
            [FieldOffset(1)] signed char y;
            [FieldOffset(2)] signed char z;
            [FieldOffset(3)] signed char w;
            [FieldOffset(0)] unsigned int v;

            XMBYTEN4(signed char _x, signed char _y, signed char _z, signed char _w)
            {
                x = _x;
                y = _y;
                z = _z;
                w = _w;
            }

            XMBYTEN4(float _x, float _y, float _z, float _w)
            {
                x = (signed char)_x;
                y = (signed char)_y;
                z = (signed char)_z;
                w = (signed char)_w;
            }

            XMBYTEN4(unsigned int c)
            {
                v = c;
            }

            XMBYTEN4(unsigned short c)
            {
                v = c;
            }

            XMBYTEN4(array<float>^ pArray)
            {
                x = (signed char)pArray[0];
                y = (signed char)pArray[1];
                z = (signed char)pArray[2];
                w = (signed char)pArray[3];
            }

            XMBYTEN4(array<signed char>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
                z = pArray[2];
                w = pArray[3];
            }
        };
    }
}