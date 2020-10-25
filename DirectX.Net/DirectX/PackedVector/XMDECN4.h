#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        public value struct XMDECN4
        {
            uint32_t v;

            property int32_t x
            {
                int32_t get()
                {
                    return (v & 0x000003FF);
                }
                void set(int32_t value)
                {
                    v = (value & 0x000003FF) | (v & 0xFFFFFC00);
                }
            }

            property int32_t y
            {
                int32_t get()
                {
                    return (v & 0x000FFC00) >> 10;
                }
                void set(int32_t value)
                {
                    value <<= 10;
                    v = (value & 0x000FFC00) | (v & 0xFFF003FF);
                }
            }

            property int32_t z
            {
                int32_t get()
                {
                    return (v & 0x3FF00000) >> 20;
                }
                void set(int32_t value)
                {
                    value <<= 20;
                    v = (value & 0x3FF00000) | (v & 0xC00FFFFF);
                }
            }

            property int32_t w
            {
                int32_t get()
                {
                    return (v & 0xC0000000) >> 30;
                }
                void set(int32_t value)
                {
                    value <<= 30;
                    v = (value & 0xC0000000) | (v & 0x3FFFFFFF);
                }
            }

            explicit XMDECN4(uint32_t Packed) : v(Packed) {}
            XMDECN4(float _x, float _y, float _z, float _w)
            {
                x = *(int32_t*)&_x;
                y = *(int32_t*)&_y;
                z = *(int32_t*)&_z;
                w = *(int32_t*)&_w;
            }
            explicit XMDECN4(array<float>^ pArray)
            {
                float temp = pArray[0];
                x = *(int32_t*)&temp;
                temp = pArray[1];
                y = *(int32_t*)&temp;
                temp = pArray[2];
                z = *(int32_t*)&temp;
                temp = pArray[3];
                w = *(int32_t*)&temp;
            }

            operator uint32_t () { return v; }
        };
    }
}