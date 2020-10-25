#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        public value struct XMUNIBBLE4
        {
            uint16_t v;

            property uint16_t x
            {
                uint16_t get()
                {
                    return (v & 0x000F);
                }
                void set(uint16_t value)
                {
                    v = (value & 0x000F) | (v & 0xFFF0);
                }
            }

            property uint16_t y
            {
                uint16_t get()
                {
                    return (v & 0x00F0) >> 4;
                }
                void set(uint16_t value)
                {
                    value <<= 4;
                    v = (value & 0x00F0) | (v & 0xFF0F);
                }
            }

            property uint16_t z
            {
                uint16_t get()
                {
                    return (v & 0x0F00) >> 8;
                }
                void set(uint16_t value)
                {
                    value <<= 8;
                    v = (value & 0x0F00) | (v & 0xF0FF);
                }
            }

            property uint16_t w
            {
                uint16_t get()
                {
                    return (v & 0xF000) >> 12;
                }
                void set(uint16_t value)
                {
                    value <<= 12;
                    v = (value & 0xF000) | (v & 0x0FFF);
                }
            }

            explicit XMUNIBBLE4(uint16_t Packed) : v(Packed) {}
            XMUNIBBLE4(uint8_t _x, uint8_t _y, uint8_t _z, uint8_t _w) { x = _x; y = _y; z = _z; w = _w; }
            explicit XMUNIBBLE4(array<uint8_t>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; w = pArray[3]; }
            XMUNIBBLE4(float _x, float _y, float _z, float _w)
            {
                x = *(uint8_t*)&_x;
                y = *(uint8_t*)&_y;
                z = *(uint8_t*)&_z;
                w = *(uint8_t*)&_w;
            }
            explicit XMUNIBBLE4(_In_reads_(4) const float* pArray)
            {
                float temp = pArray[0];
                x = *(uint8_t*)&temp;
                temp = pArray[1];
                y = *(uint8_t*)&temp;
                temp = pArray[2];
                z = *(uint8_t*)&temp;
                temp = pArray[3];
                w = *(uint8_t*)&temp;
            }

            operator uint16_t () { return v; }
        };
    }
}