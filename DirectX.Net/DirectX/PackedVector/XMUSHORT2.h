#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMUSHORT2
        {
        public:
            [FieldOffset(0)] unsigned short x;
            [FieldOffset(2)] unsigned short y;
            [FieldOffset(0)] unsigned int v;

            XMUSHORT2(unsigned short _x, unsigned short _y)
            {
                x = _x;
                y = _y;
            }

            XMUSHORT2(float _x, float _y)
            {
                x = (unsigned short)_x;
                y = (unsigned short)_y;
            }

            XMUSHORT2(unsigned int c)
            {
                v = c;
            }

            XMUSHORT2(unsigned short c)
            {
                v = c;
            }

            XMUSHORT2(array<float>^ pArray)
            {
                x = (unsigned short)pArray[0];
                y = (unsigned short)pArray[1];
            }

            XMUSHORT2(array<unsigned short>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
            }
        };
    }
}