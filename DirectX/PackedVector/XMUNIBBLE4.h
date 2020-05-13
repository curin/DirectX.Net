#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMUNIBBLE4
        {
            value struct Components
            {
                unsigned short x : 4;    // 0 to 15
                unsigned short y : 4;    // 0 to 15
                unsigned short z : 4;    // 0 to 15
                unsigned short w : 4;    // 0 to 15
            };
            [FieldOffset(0)] Components components;
            [FieldOffset(0)] unsigned short v;

            XMUNIBBLE4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
            {
                components.x = x;
                components.y = y;
                components.z = z;
                components.w = w;
            }

            XMUNIBBLE4(float x, float y, float z, bool w)
            {
                components.x = (unsigned char)x;
                components.y = (unsigned char)y;
                components.z = (unsigned char)z;
                components.w = (unsigned char)w;
            }

            XMUNIBBLE4(unsigned short c)
            {
                v = c;
            }

            XMUNIBBLE4(array<float>^ pArray)
            {
                components.x = (unsigned char)pArray[0];
                components.y = (unsigned char)pArray[1];
                components.z = (unsigned char)pArray[2];
                components.w = (unsigned char)pArray[3];
            }

            XMUNIBBLE4(array<unsigned char>^ pArray)
            {
                components.x = pArray[0];
                components.y = pArray[1];
                components.z = pArray[2];
                components.w = pArray[3];
            }
        };
    }
}