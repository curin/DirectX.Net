#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMU555
        {
            value struct Components
            {
                unsigned short x : 5;    // 0 to 31
                unsigned short y : 5;    // 0 to 31
                unsigned short z : 5;    // 0 to 31
                unsigned short w : 1;    // 0 or 1
            };
            [FieldOffset(0)] Components components;
            [FieldOffset(0)] unsigned short v;

            XMU555(unsigned char x, unsigned char y, unsigned char z, bool w)
            {
                components.x = x;
                components.y = y;
                components.z = z;
                components.w = w;
            }

            XMU555(float x, float y, float z, bool w)
            {
                components.x = (unsigned char)x;
                components.y = (unsigned char)y;
                components.z = (unsigned char)z;
                components.w = w;
            }

            XMU555(unsigned short c)
            {
                v = c;
            }

            XMU555(array<float>^ pArray, bool w)
            {
                components.x = (unsigned char)pArray[0];
                components.y = (unsigned char)pArray[1];
                components.z = (unsigned char)pArray[2];
                components.w = w;
            }

            XMU555(array<unsigned char>^ pArray, bool w)
            {
                components.x = pArray[0];
                components.y = pArray[1];
                components.z = pArray[2];
                components.w = w;
            }
        };
    }
}