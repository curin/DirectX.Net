#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMBYTE2
        {
        public:
            [FieldOffset(0)] signed char x;
            [FieldOffset(1)] signed char y;
            [FieldOffset(0)] unsigned short v;

            XMBYTE2(signed char _x, signed char _y)
            {
                x = _x;
                y = _y;
            }

            XMBYTE2(float _x, float _y)
            {
                x = (signed char)_x;
                y = (signed char)_y;
            }

            XMBYTE2(unsigned int c)
            {
                v = (unsigned short)c;
            }

            XMBYTE2(unsigned short c)
            {
                v = c;
            }

            XMBYTE2(array<float>^ pArray)
            {
                x = (signed char)pArray[0];
                y = (signed char)pArray[1];
            }

            XMBYTE2(array<signed char>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
            }
        };
    }
}