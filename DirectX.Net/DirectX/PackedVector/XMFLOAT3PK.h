#pragma once

#include <DirectXPackedVector.h>
#include <math.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMFLOAT3PK
        {
            uint32_t v;

            property uint32_t xm // x-mantissa
            {
                uint32_t get()
                {
                    return (v & 0x0000001F);
                }
                void set(uint32_t value)
                {
                    v = (value & 0x0000001F) | (v & 0xFFFFFFE0);
                }
            }

            property uint32_t xe // x-exponent
            {
                uint32_t get()
                {
                    return (v & 0x000003E0) >> 5;
                }
                void set(uint32_t value)
                {
                    value <<= 5;
                    v = (value & 0x000003E0) | (v & 0xFFFFFC1F);
                }
            }

            property uint32_t ym // y-mantissa
            {
                uint32_t get()
                {
                    return (v & 0x0000FC00) >> 10;
                }
                void set(uint32_t value)
                {
                    value <<= 10;
                    v = (value & 0x0000FC00) | (v & 0xFFFF03FF);
                }
            }

            property uint32_t ye // y-exponent
            {
                uint32_t get()
                {
                    return (v & 0x001F0000) >> 16;
                }
                void set(uint32_t value)
                {
                    value <<= 16;
                    v = (value & 0x001F0000) | (v & 0xFFE0FFFF);
                }
            }

            property uint32_t zm // z-mantissa
            {
                uint32_t get()
                {
                    return (v & 0x07E00000) >> 21;
                }
                void set(uint32_t value)
                {
                    value <<= 21;
                    v = (value & 0x07E00000) | (v & 0xF81FFFFF);
                }
            }

            property uint32_t ze // z-exponent
            {
                uint32_t get()
                {
                    return (v & 0xF8000000) >> 27;
                }
                void set(uint32_t value)
                {
                    value <<= 27;
                    v = (value & 0xF8000000) | (v & 0x07FFFFFF);
                }
            }

            explicit XMFLOAT3PK(uint32_t Packed) : v(Packed) {}
            XMFLOAT3PK(float _x, float _y, float _z) 
            {
                uint32_t exp; 
                xm = (uint32_t)frexpf(_x, (int*)&exp); 
                xe = exp; 
                
                ym = (uint32_t)frexpf(_y, (int*)&exp); 
                ye = exp; 

                zm = (uint32_t)frexpf(_z, (int*)&exp);
                ze = exp;
            }

            explicit XMFLOAT3PK(array<float>^ pArray)
            {
                uint32_t exp;
                xm = (uint32_t)frexpf(pArray[0], (int*)&exp);
                xe = exp;

                ym = (uint32_t)frexpf(pArray[1], (int*)&exp);
                ye = exp;

                zm = (uint32_t)frexpf(pArray[2], (int*)&exp);
                ze = exp;
            }

            operator uint32_t () { return v; }
        };
    }
}