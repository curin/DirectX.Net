#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMU565
        {
            value struct Components
            {
                unsigned short x : 5;    // 0 to 31
                unsigned short y : 6;    // 0 to 31
                unsigned short z : 5;    // 0 to 31
            };
            [FieldOffset(0)] Components components;
            [FieldOffset(0)] unsigned short v;

            XMU565(unsigned char x, unsigned char y, unsigned char z)
            {
                components.x = x;
                components.y = y;
                components.z = z;
            }

            XMU565(float x, float y, float z)
            {
                components.x = (unsigned char)x;
                components.y = (unsigned char)y;
                components.z = (unsigned char)z;
            }

            XMU565(unsigned short c)
            {
                v = c;
            }

            XMU565(array<float>^ pArray)
            {
                components.x = (unsigned char)pArray[0];
                components.y = (unsigned char)pArray[1];
                components.z = (unsigned char)pArray[2];
            }

            XMU565(array<unsigned char>^ pArray)
            {
                components.x = pArray[0];
                components.y = pArray[1];
                components.z = pArray[2];
            }
        };
    }
}