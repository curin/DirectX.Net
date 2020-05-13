#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace PackedVectors
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct XMFLOAT3PK
        {
            value struct Components
            {
                unsigned int xm : 6; // x-mantissa
                unsigned int xe : 5; // x-exponent
                unsigned int ym : 6; // y-mantissa
                unsigned int ye : 5; // y-exponent
                unsigned int zm : 5; // z-mantissa
                unsigned int ze : 5; // z-exponent
            };
            [FieldOffset(0)]Components components;
            [FieldOffset(0)] unsigned int v;

            XMFLOAT3PK(float x, float y, float z)
            {
                int exponent;
                components.xm = frexpf(x, &exponent);
                components.xe = exponent;
                components.ym = frexpf(y, &exponent);
                components.ye = exponent;
                components.zm = frexpf(z, &exponent);
                components.ze = exponent;
            }

            XMFLOAT3PK(unsigned int packed)
            {
                v = packed;
            }

            XMFLOAT3PK(array<float>^ pArray)
            {
                int exponent;
                components.xm = frexpf(pArray[0], &exponent);
                components.xe = exponent;
                components.ym = frexpf(pArray[1], &exponent);
                components.ye = exponent;
                components.zm = frexpf(pArray[2], &exponent);
                components.ze = exponent;
            }
        };
    }
}