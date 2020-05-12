#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_RATIONAL
        {
            unsigned int Numerator;
            unsigned int Denominator;

            DXGI_RATIONAL(unsigned int numerator, unsigned int denominator)
            {
                Numerator = numerator;
                Denominator = denominator;
            }
        };
    }
}