#pragma once

#include <DirectXPackedVector.h>
#include "../Common/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMUDEC4_CONSTRUCTOR(DirectX::PackedVector::XMUDEC4* location, DirectX::PackedVector::XMUDEC4* value) { *location = DirectX::PackedVector::XMUDEC4(*value); }
        public ref class XMUDEC4 : IUnmanagedReference<DirectX::PackedVector::XMUDEC4>
        {
        public:
            UnmanagedReferenceProperty(unsigned int, x)
            UnmanagedReferenceProperty(unsigned int, y)
            UnmanagedReferenceProperty(unsigned int, z)
            UnmanagedReferenceProperty(unsigned int, w)
            UnmanagedReferenceProperty(unsigned int, v)
            UnmanagedOperator(DirectX::PackedVector::XMUDEC4)

            XMUDEC4(DirectX::PackedVector::XMUDEC4* value)
            {
                _value = value;
            }

            XMUDEC4(IntPtr location, DirectX::PackedVector::XMUDEC4* val)
            {
                _value = (DirectX::PackedVector::XMUDEC4*)location.ToPointer();
                XMUDEC4_CONSTRUCTOR(_value, val);
            }

            XMUDEC4(float x, float y, float z, float w)
            {
                _value = new DirectX::PackedVector::XMUDEC4(x, y, z, w);
            }

            XMUDEC4(unsigned int c)
            {
                _value = new DirectX::PackedVector::XMUDEC4(c);
            }

            XMUDEC4(array<float>^ pArray)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMUDEC4(p);
            }
        };
    }
}