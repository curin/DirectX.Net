#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMBYTEN2
        {
        public:
            [FieldOffset(0)] signed char x;
            [FieldOffset(1)] signed char y;
            [FieldOffset(0)] unsigned short v;

            XMBYTEN2(signed char _x, signed char _y)
            {
                x = _x;
                y = _y;
            }

            XMBYTEN2(float _x, float _y)
            {
                x = (signed char)_x;
                y = (signed char)_y;
            }

            XMBYTEN2(unsigned int c)
            {
                v = (unsigned short)c;
            }

            XMBYTEN2(unsigned short c)
            {
                v = c;
            }

            XMBYTEN2(array<float>^ pArray)
            {
                x = (signed char)pArray[0];
                y = (signed char)pArray[1];
            }

            XMBYTEN2(array<signed char>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
            }
        };
    }
}