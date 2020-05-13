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
                int x : 10;    // 0 to 1023
                int y : 10;    // 0 to 1023
                int z : 10;    // 0 to 1023
                int w : 2;     // 0 to    3
            };
            [FieldOffset(0)] Components components;
            [FieldOffset(0)] unsigned int v;

            XMUDEC4(int x, int y, int z, int w)
            {
                components.x = x;
                components.y = y;
                components.z = z;
                components.w = w;
            }

            XMUDEC4(float x, float y, float z, float w)
            {
                components.x = (int)x;
                components.y = (int)y;
                components.z = (int)z;
                components.w = (int)w;
            }

            XMUDEC4(unsigned int c)
            {
                v = c;
            }

            XMUDEC4(array<float>^ pArray)
            {
                components.x = (int)pArray[0];
                components.y = (int)pArray[1];
                components.z = (int)pArray[2];
                components.w = (int)pArray[3];
            }

            XMUDEC4(array<int>^ pArray)
            {
                components.x = pArray[0];
                components.y = pArray[1];
                components.z = pArray[2];
                components.w = pArray[3];
            }
        };
    }
}