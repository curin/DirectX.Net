#pragma once

#include <DirectXPackedVector.h>
#include "../Windows/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMXDECN4_CONSTRUCTOR(DirectX::PackedVector::XMXDECN4* location, DirectX::PackedVector::XMXDECN4* value) { *location = DirectX::PackedVector::XMXDECN4(*value); }
        public ref class XMXDECN4 : IUnmanagedReference<DirectX::PackedVector::XMXDECN4>
        {
        public:
            UnmanagedReferenceProperty(int, x)
            UnmanagedReferenceProperty(int, y)
            UnmanagedReferenceProperty(int, z)
            UnmanagedReferenceProperty(int, w)
            UnmanagedReferenceProperty(unsigned int, v)
            UnmanagedOperator(DirectX::PackedVector::XMXDECN4)

            XMXDECN4(float x, float y, float z, float w)
            {
                _value = new DirectX::PackedVector::XMXDECN4(x, y, z, w);
            }

            XMXDECN4(DirectX::PackedVector::XMXDECN4* value)
            {
                _value = value;
            }

            XMXDECN4(IntPtr location, DirectX::PackedVector::XMXDECN4* val)
            {
                _value = (DirectX::PackedVector::XMXDECN4*)location.ToPointer();
                XMXDECN4_CONSTRUCTOR(_value, val);
            }

            XMXDECN4(unsigned int c)
            {
                _value = new DirectX::PackedVector::XMXDECN4(c);
            }

            XMXDECN4(array<float>^ pArray)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMXDECN4(p);
            }
        };
    }
}