#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMUSHORT4
        {
        public:
            [FieldOffset(0)] unsigned short x;
            [FieldOffset(2)] unsigned short y;
            [FieldOffset(4)] unsigned short z;
            [FieldOffset(6)] unsigned short w;
            [FieldOffset(0)] unsigned long long v;

            XMUSHORT4(unsigned short _x, unsigned short _y, unsigned short _z, unsigned short _w)
            {
                x = _x;
                y = _y;
                z = _z;
                w = _w;
            }

            XMUSHORT4(float _x, float _y, float _z, float _w)
            {
                x = (unsigned short)_x;
                y = (unsigned short)_y;
                z = (unsigned short)_z;
                w = (unsigned short)_w;
            }

            XMUSHORT4(unsigned long long c)
            {
                v = c;
            }

            XMUSHORT4(unsigned int c)
            {
                v = c;
            }

            XMUSHORT4(unsigned short c)
            {
                v = c;
            }

            XMUSHORT4(array<float>^ pArray)
            {
                x = (unsigned short)pArray[0];
                y = (unsigned short)pArray[1];
                z = (unsigned short)pArray[2];
                w = (unsigned short)pArray[3];
            }

            XMUSHORT4(array<unsigned short>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
                z = pArray[2];
                w = pArray[3];
            }
        };
    }
}