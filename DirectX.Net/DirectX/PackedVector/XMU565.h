#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMU565
        {
            uint16_t v;
            property uint16_t z
            {
                uint16_t get()
                {
                    return (v & 0xF800) >> 11;
                }
                void set(uint16_t value)
                {
                    value <<= 11;
                    v = (value & 0xF800) | (v & 0x07FF);
                }
            }

            property uint16_t y
            {
                uint16_t get()
                {
                    return (v & 0x07E0) >> 5;
                }
                void set(uint16_t value)
                {
                    value <<= 5;
                    v = (value & 0x07E0) | (v & 0xF81F);
                }
            }

            property uint16_t x
            {
                uint16_t get()
                {
                    return v & 0x001F;
                }
                void set(uint16_t value)
                {
                    v = (value & 0x001F) | (v & 0xFFE0);
                }
            }
            explicit XMU565(uint16_t Packed) : v(Packed) {}
            XMU565(uint8_t _x, uint8_t _y, uint8_t _z) { x = _x; y = _y; z = _z; }
            explicit XMU565(array<uint8_t>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; }
            XMU565(float _x, float _y, float _z) { x = (uint16_t)_x; y = (uint16_t)_y; z = (uint16_t)_z; }
            explicit XMU565(array<float>^ pArray) { x = (uint16_t)pArray[0]; y = (uint16_t)pArray[1]; z = (uint16_t)pArray[2]; }

            operator uint16_t () { return v; }
        };
    }
}