#pragma once
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMSHORTN2
        {
        public:
            [FieldOffset(0)] short x;
            [FieldOffset(2)] short y;
            [FieldOffset(0)] unsigned int v;

            XMSHORTN2(short _x, short _y)
            {
                x = _x;
                y = _y;
            }

            XMSHORTN2(float _x, float _y)
            {
                x = (short)_x;
                y = (short)_y;
            }

            XMSHORTN2(unsigned int c)
            {
                v = c;
            }

            XMSHORTN2(unsigned short c)
            {
                v = c;
            }

            XMSHORTN2(array<float>^ pArray)
            {
                x = (short)pArray[0];
                y = (short)pArray[1];
            }

            XMSHORTN2(array<short>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
            }
        };
    }
}