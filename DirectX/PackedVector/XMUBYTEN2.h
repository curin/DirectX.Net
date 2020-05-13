#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMUBYTEN2
        {
        public:
            [FieldOffset(0)] unsigned char x;
            [FieldOffset(1)] unsigned char y;
            [FieldOffset(0)] unsigned short v;

            XMUBYTEN2(unsigned char _x, unsigned char _y)
            {
                x = _x;
                y = _y;
            }

            XMUBYTEN2(float _x, float _y)
            {
                x = (unsigned char)_x;
                y = (unsigned char)_y;
            }

            XMUBYTEN2(unsigned int c)
            {
                v = (unsigned short)c;
            }

            XMUBYTEN2(unsigned short c)
            {
                v = c;
            }

            XMUBYTEN2(array<float>^ pArray)
            {
                x = (unsigned char)pArray[0];
                y = (unsigned char)pArray[1];
            }

            XMUBYTEN2(array<unsigned char>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
            }
        };
    }
}