#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        public value struct XMU555
        {
            uint16_t v;

            property uint16_t x
            {
                uint16_t get()
                {
                    return (v & 0x001F);
                }
                void set(uint16_t value)
                {
                    v = (value & 0x001F) | (v & 0xFFE0);
                }
            }

            property uint16_t y
            {
                uint16_t get()
                {
                    return (v & 0x03E0) >> 5;
                }
                void set(uint16_t value)
                {
                    value <<= 5;
                    v = (value & 0x03E0) | (v & 0xFC1F);
                }
            }

            property uint16_t z
            {
                uint16_t get()
                {
                    return (v & 0x7C00) >> 10;
                }
                void set(uint16_t value)
                {
                    value <<= 10;
                    v = (value & 0x7C00) | (v & 0x83FF);
                }
            }

            property uint16_t w
            {
                uint16_t get()
                {
                    return (v & 0x8000) >> 10;
                }
                void set(uint16_t value)
                {
                    value <<= 10;
                    v = (value & 0x8000) | (v & 0x7FFF);
                }
            }

            explicit XMU555(uint16_t Packed) : v(Packed) {}
            XMU555(uint8_t _x, uint8_t _y, uint8_t _z, bool _w) { x = _x; y = _y; z = _z; w =_w ? 0x1 : 0; }
            XMU555(array<uint8_t>^ pArray, bool _w) { x = pArray[0]; y = pArray[1]; z = pArray[2]; w = _w ? 0x1 : 0; }
            XMU555(float _x, float _y, float _z, bool _w)
            {
                x = *(uint8_t*)&_x;
                y = *(uint8_t*)&_y;
                z = *(uint8_t*)&_z;
                w = _w ? 0x1 : 0;
            }
            XMU555(array<float>^ pArray, bool _w)
            {
                float temp = pArray[0];
                x = *(uint8_t*)&temp;
                temp = pArray[1];
                y = *(uint8_t*)&temp;
                temp = pArray[2];
                z = *(uint8_t*)&temp;
                w = _w ? 0x1 : 0;
            }

            operator uint16_t () { return v; }
        };
    }
}