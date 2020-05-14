#pragma once

#include <DirectXPackedVector.h>
#include "../Common/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMUNIBBLE4_CONSTRUCTOR(DirectX::PackedVector::XMUNIBBLE4* location, DirectX::PackedVector::XMUNIBBLE4* value) { *location = DirectX::PackedVector::XMUNIBBLE4(*value); }
        public ref class XMUNIBBLE4 : IUnmanagedReference<DirectX::PackedVector::XMUNIBBLE4>
        {
        public:
            UnmanagedReferenceProperty(unsigned short, x)
            UnmanagedReferenceProperty(unsigned short, y)
            UnmanagedReferenceProperty(unsigned short, z)
            UnmanagedReferenceProperty(unsigned short, w)
            UnmanagedReferenceProperty(unsigned int, v)
            UnmanagedOperator(DirectX::PackedVector::XMUNIBBLE4)

            XMUNIBBLE4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
            {
                _value = new DirectX::PackedVector::XMUNIBBLE4(x, y, z, w);
            }

            XMUNIBBLE4(float x, float y, float z, bool w)
            {
                _value = new DirectX::PackedVector::XMUNIBBLE4(x, y, z, w);
            }

            XMUNIBBLE4(DirectX::PackedVector::XMUNIBBLE4* value)
            {
                _value = value;
            }

            XMUNIBBLE4(IntPtr location, DirectX::PackedVector::XMUNIBBLE4* val)
            {
                _value = (DirectX::PackedVector::XMUNIBBLE4*)location.ToPointer();
                XMUNIBBLE4_CONSTRUCTOR(_value, val);
            }

            XMUNIBBLE4(unsigned short c)
            {
                _value = new DirectX::PackedVector::XMUNIBBLE4(c);
            }

            XMUNIBBLE4(array<float>^ pArray)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMUNIBBLE4(p);
            }

            XMUNIBBLE4(array<unsigned char>^ pArray)
            {
                pin_ptr<unsigned char> p = &pArray[0];
                _value = new DirectX::PackedVector::XMUNIBBLE4(p);
            }
        };
    }
}