#pragma once

#include <DirectXPackedVector.h>
#include "../Common/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMFLOAT3SE_CONSTRUCTOR(DirectX::PackedVector::XMFLOAT3SE* location, DirectX::PackedVector::XMFLOAT3SE* value) { *location = DirectX::PackedVector::XMFLOAT3SE(*value); }
        public ref class XMFLOAT3SE : IUnmanagedReference<DirectX::PackedVector::XMFLOAT3SE>
        {
        public:
            XMFLOAT3SE(float x, float y, float z)
            {
                _value = new DirectX::PackedVector::XMFLOAT3SE(x, y, z);
            }

            XMFLOAT3SE(DirectX::PackedVector::XMFLOAT3SE* pVal)
            {
                _value = pVal;
            }

            XMFLOAT3SE(IntPtr location, DirectX::PackedVector::XMFLOAT3SE* val)
            {
                _value = (DirectX::PackedVector::XMFLOAT3SE*)location.ToPointer();
                XMFLOAT3SE_CONSTRUCTOR(_value, val);
            }

            XMFLOAT3SE(unsigned int packed)
            {
                _value = new DirectX::PackedVector::XMFLOAT3SE(packed);
            }

            XMFLOAT3SE(array<float>^ pArray)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMFLOAT3SE(p);
            }

            UnmanagedReferenceProperty(unsigned int, xm)
            UnmanagedReferenceProperty(unsigned int, ym)
            UnmanagedReferenceProperty(unsigned int, zm)
            UnmanagedReferenceProperty(unsigned int, e)
            UnmanagedReferenceProperty(unsigned int, v)
            UnmanagedOperator(DirectX::PackedVector::XMFLOAT3SE)
        };
    }
}