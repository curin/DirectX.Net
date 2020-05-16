#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMU565_CONSTRUCTOR(DirectX::PackedVector::XMU565* location, DirectX::PackedVector::XMU565* value) { *location = DirectX::PackedVector::XMU565(*value); }
        public ref class XMU565 : IUnmanagedReference<DirectX::PackedVector::XMU565>
        {
        public:
            UnmanagedReferenceProperty(unsigned short, x)
            UnmanagedReferenceProperty(unsigned short, y)
            UnmanagedReferenceProperty(unsigned short, z)
            UnmanagedReferenceProperty(unsigned short, v)
            UnmanagedOperator(DirectX::PackedVector::XMU565)

            XMU565(unsigned char x, unsigned char y, unsigned char z)
            {
                _value = new DirectX::PackedVector::XMU565(x, y, z);
            }

            XMU565(float x, float y, float z)
            {
                _value = new DirectX::PackedVector::XMU565(x, y, z);
            }

            XMU565(DirectX::PackedVector::XMU565* value)
            {
                _value = value;
            }

            XMU565(IntPtr location, DirectX::PackedVector::XMU565* val)
            {
                _value = (DirectX::PackedVector::XMU565*)location.ToPointer();
                XMU565_CONSTRUCTOR(_value, val);
            }

            XMU565(unsigned short c)
            {
                _value = new DirectX::PackedVector::XMU565(c);
            }

            XMU565(array<float>^ pArray)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMU565(p);
            }
        };
    }
}