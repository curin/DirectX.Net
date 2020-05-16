#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMU555_CONSTRUCTOR(DirectX::PackedVector::XMU555* location, DirectX::PackedVector::XMU555* value) { *location = DirectX::PackedVector::XMU555(*value); }
        public ref class XMU555 : IUnmanagedReference<DirectX::PackedVector::XMU555>
        {
        public:
            UnmanagedReferenceProperty(unsigned short, x)
            UnmanagedReferenceProperty(unsigned short, y)
            UnmanagedReferenceProperty(unsigned short, z)
            UnmanagedReferenceProperty(unsigned short, w)
            UnmanagedReferenceProperty(unsigned short, v)
            UnmanagedOperator(DirectX::PackedVector::XMU555)

            XMU555(unsigned char x, unsigned char y, unsigned char z, bool w)
            {
                _value = new DirectX::PackedVector::XMU555(x, y, z, w);
            }

            XMU555(float x, float y, float z, bool w)
            {
                _value = new DirectX::PackedVector::XMU555(x, y, z, w);
            }

            XMU555(DirectX::PackedVector::XMU555* value)
            {
                _value = value;
            }

            XMU555(IntPtr location, DirectX::PackedVector::XMU555* val)
            {
                _value = (DirectX::PackedVector::XMU555*)location.ToPointer();
                XMU555_CONSTRUCTOR(_value, val);
            }

            XMU555(unsigned short c)
            {
                _value = new DirectX::PackedVector::XMU555(c);
            }

            XMU555(array<float>^ pArray, bool w)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMU555(p, w);
            }
        };
    }
}