#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMUDEC4
        {
            value struct Components
            {
                unsigned int x : 10;    // 0 to 1023
                unsigned int y : 10;    // 0 to 1023
                unsigned int z : 10;    // 0 to 1023
                unsigned int w : 2;     // 0 to    3
            };
            [FieldOffset(0)] Components components;
            [FieldOffset(0)] unsigned int v;

            XMUDEC4(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
            {
                components.x = x;
                components.y = y;
                components.z = z;
                components.w = w;
            }

            XMUDEC4(float x, float y, float z, float w)
            {
                components.x = (unsigned int)x;
                components.y = (unsigned int)y;
                components.z = (unsigned int)z;
                components.w = (unsigned int)w;
            }

            XMUDEC4(unsigned int c)
            {
                v = c;
            }

            XMUDEC4(array<float>^ pArray)
            {
                components.x = (unsigned int)pArray[0];
                components.y = (unsigned int)pArray[1];
                components.z = (unsigned int)pArray[2];
                components.w = (unsigned int)pArray[3];
            }

            XMUDEC4(array<unsigned int>^ pArray)
            {
                components.x = pArray[0];
                components.y = pArray[1];
                components.z = pArray[2];
                components.w = pArray[3];
            }
        };
    }
}