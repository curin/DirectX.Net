#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMUDECN4_CONSTRUCTOR(DirectX::PackedVector::XMUDECN4* location, DirectX::PackedVector::XMUDECN4* value) { *location = DirectX::PackedVector::XMUDECN4(*value); }
        public ref class XMUDECN4 : IUnmanagedReference<DirectX::PackedVector::XMUDECN4>
        {
        public:
            UnmanagedReferenceProperty(unsigned int, x)
            UnmanagedReferenceProperty(unsigned int, y)
            UnmanagedReferenceProperty(unsigned int, z)
            UnmanagedReferenceProperty(unsigned int, w)
            UnmanagedReferenceProperty(unsigned int, v)
            UnmanagedOperator(DirectX::PackedVector::XMUDECN4)

            XMUDECN4(float x, float y, float z, float w)
            {
                _value = new DirectX::PackedVector::XMUDECN4(x, y, z, w);
            }

            XMUDECN4(DirectX::PackedVector::XMUDECN4* value)
            {
                _value = value;
            }

            XMUDECN4(IntPtr location, DirectX::PackedVector::XMUDECN4* val)
            {
                _value = (DirectX::PackedVector::XMUDECN4*)location.ToPointer();
                XMUDECN4_CONSTRUCTOR(_value, val);
            }

            XMUDECN4(unsigned int c)
            {
                _value = new DirectX::PackedVector::XMUDECN4(c);
            }

            XMUDECN4(array<float>^ pArray)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMUDECN4(p);
            }
        };
    }
}