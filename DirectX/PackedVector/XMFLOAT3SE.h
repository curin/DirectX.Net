#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMFLOAT3SE
        {
            value struct Components
            {
                unsigned int xm : 9; // x-mantissa
                unsigned int ym : 9; // y-mantissa
                unsigned int zm : 9; // z-mantissa
                unsigned int e : 5; // shared exponent
            };
            [FieldOffset(0)] Components components;
            [FieldOffset(0)] unsigned int v;

            XMFLOAT3SE(float x, float y, float z)
            {
                int exponent1;
                int exponent2;
                components.xm = frexpf(x, &exponent1);
                components.ym = frexpf(y, &exponent2);
                if (exponent1 > exponent2)
                    components.ym >>= exponent1 - exponent2;
                else
                {
                    components.xm >>= exponent2 - exponent1;
                    exponent1 = exponent2;
                }

                components.zm = frexpf(z, &exponent2);

                if (exponent1 > exponent2)
                    components.zm >>= exponent1 - exponent2;
                else
                {
                    components.ym >>= exponent2 - exponent1;
                    components.xm >>= exponent2 - exponent1;
                    exponent1 = exponent2;
                }

                components.e = exponent1;
            }

            XMFLOAT3SE(unsigned int packed)
            {
                v = packed;
            }

            XMFLOAT3SE(array<float>^ pArray)
            {
                int exponent1;
                int exponent2;
                components.xm = frexpf(pArray[0], &exponent1);
                components.ym = frexpf(pArray[1], &exponent2);
                if (exponent1 > exponent2)
                    components.ym >>= exponent1 - exponent2;
                else
                {
                    components.xm >>= exponent2 - exponent1;
                    exponent1 = exponent2;
                }

                components.zm = frexpf(pArray[2], &exponent2);

                if (exponent1 > exponent2)
                    components.zm >>= exponent1 - exponent2;
                else
                {
                    components.ym >>= exponent2 - exponent1;
                    components.xm >>= exponent2 - exponent1;
                    exponent1 = exponent2;
                }

                components.e = exponent1;
            }
        };
    }
}