#pragma once

#include <DirectXPackedVector.h>
#include <math.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMFLOAT3SE
        {
            uint32_t v;

            property uint32_t xm
            {
                uint32_t get()
                {
                    return (v & 0x000001FF);
                }
                void set(uint32_t value)
                {
                    v = (value & 0x000001FF) | (v & 0xFFFFF100);
                }
            }
            
            property uint32_t ym
            {
                uint32_t get()
                {
                    return (v & 0x0003FE00) >> 9;
                }
                void set(uint32_t value)
                {
                    value <<= 9;
                    v = (value & 0x0003FE00) | (v & 0xFFFC01FF);
                }
            }

            property uint32_t zm
            {
                uint32_t get()
                {
                    return (v & 0x07FC0000) >> 18;
                }
                void set(uint32_t value)
                {
                    value <<= 18;
                    v = (value & 0x07FC0000) | (v & 0xF803FFFF);
                }
            }

            property uint32_t e
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

            explicit XMFLOAT3SE(uint32_t Packed) : v(Packed) {}
            XMFLOAT3SE(float _x, float _y, float _z)
            {
                int exp1;
                int exp2;

                uint32_t x = (uint32_t)frexpf(_x, &exp1);
                uint32_t y = (uint32_t)frexpf(_y, &exp2);

                if (exp1 > exp2)
                {
                    y >>= exp1 - exp2;
                }
                else
                {
                    x >>= exp2 - exp1;
                    exp1 = exp2;
                }

                uint32_t z = (uint32_t)frexpf(_z, &exp2);

                if (exp1 > exp2)
                {
                    z >>= exp1 - exp2;
                }
                else
                {
                    x >>= exp2 - exp1;
                    y >>= exp2 - exp1;
                    exp1 = exp2;
                }

                xm = x;
                ym = y;
                zm = z;
                e = exp1;
            }
            explicit XMFLOAT3SE(array<float>^ pArray)
            {
                {
                    int exp1;
                    int exp2;

                    uint32_t x = (uint32_t)frexpf(pArray[0], &exp1);
                    uint32_t y = (uint32_t)frexpf(pArray[1], &exp2);

                    if (exp1 > exp2)
                    {
                        y >>= exp1 - exp2;
                    }
                    else
                    {
                        x >>= exp2 - exp1;
                        exp1 = exp2;
                    }

                    uint32_t z = (uint32_t)frexpf(pArray[2], &exp2);

                    if (exp1 > exp2)
                    {
                        z >>= exp1 - exp2;
                    }
                    else
                    {
                        x >>= exp2 - exp1;
                        y >>= exp2 - exp1;
                        exp1 = exp2;
                    }

                    xm = x;
                    ym = y;
                    zm = z;
                    e = exp1;
                }
            }

            operator uint32_t () { return v; }
        };
    }
}