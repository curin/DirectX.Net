#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Explicit)]
        public value struct XMHALF2
        {
        public:
            [FieldOffset(0)] unsigned short x;
            [FieldOffset(2)] unsigned short y;
            [FieldOffset(0)] unsigned int v;

            XMHALF2(unsigned short _x, unsigned short _y)
            {
                x = _x;
                y = _y;
            }

            XMHALF2(float _x, float _y)
            {
                x = (unsigned short)_x;
                y = (unsigned short)_y;
            }

            XMHALF2(unsigned int c)
            {
                v = c;
            }

            XMHALF2(unsigned short c)
            {
                v = c;
            }

            XMHALF2(array<float>^ pArray)
            {
                x = (unsigned short)pArray[0];
                y = (unsigned short)pArray[1];
            }

            XMHALF2(array<unsigned short>^ pArray)
            {
                x = pArray[0];
                y = pArray[1];
            }
        };
    }
}

