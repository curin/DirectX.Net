#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMSHORTN4
        {
        public:
            [FieldOffset(0)] short x;
            [FieldOffset(2)] short y;
            [FieldOffset(4)] short z;
            [FieldOffset(6)] short w;
            [FieldOffset(0)] unsigned long long v;

            XMSHORTN4(short _x, short _y, short _z, short _w)
            {
                x = _x;
                y = _y;
                z = _z;
                w = _w;
            }

            XMSHORTN4(float _x, float _y, float _z, float _w)
            {
                x = (short)_x;
                y = (short)_y;
                z = (short)_z;
                w = (short)_w;
            }

            XMSHORTN4(unsigned long long c)
            {
                v = c;
            }

            XMSHORTN4(unsigned int c)
            {
                v = c;
            }

            XMSHORTN4(unsigned short c)
            {
                v = c;
            }

            XMSHORTN4(array<float>^ pArray)
            {
                x = (short)pArray[0];
                y = (short)pArray[1];
                z = (short)pArray[2];
                w = (short)pArray[3];
            }

            XMSHORTN4(array<short>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
                z = pArray[2];
                w = pArray[3];
            }
        };
    }
}