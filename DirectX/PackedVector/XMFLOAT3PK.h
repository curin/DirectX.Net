#pragma once

#include <DirectXPackedVector.h>
#include "../Common/IUnmanagedReference.h"

namespace DirectX
{
    namespace PackedVectors
    {
        void XMFLOAT3PK_CONSTRUCTOR(DirectX::PackedVector::XMFLOAT3PK* location, DirectX::PackedVector::XMFLOAT3PK* value) { *location = DirectX::PackedVector::XMFLOAT3PK(*value); }
        public ref class XMFLOAT3PK : IUnmanagedReference<DirectX::PackedVector::XMFLOAT3PK>
        {
        public:
            XMFLOAT3PK(float x, float y, float z)
            {
                _value = new DirectX::PackedVector::XMFLOAT3PK(x, y, z);
            }

            XMFLOAT3PK(DirectX::PackedVector::XMFLOAT3PK* pVal)
            {
                _value = pVal;
            }

            XMFLOAT3PK(IntPtr location, DirectX::PackedVector::XMFLOAT3PK* val)
            {
                _value = (DirectX::PackedVector::XMFLOAT3PK*)location.ToPointer();
                XMFLOAT3PK_CONSTRUCTOR(_value, val);
            }

            XMFLOAT3PK(unsigned int packed)
            {
                _value = new DirectX::PackedVector::XMFLOAT3PK(packed);
            }

            XMFLOAT3PK(array<float>^ pArray)
            {
                pin_ptr<float> p = &pArray[0];
                _value = new DirectX::PackedVector::XMFLOAT3PK(p);
            }

            UnmanagedReferenceProperty(unsigned int, xm)
            UnmanagedReferenceProperty(unsigned int, xe)
            UnmanagedReferenceProperty(unsigned int, ym)
            UnmanagedReferenceProperty(unsigned int, ye)
            UnmanagedReferenceProperty(unsigned int, zm)
            UnmanagedReferenceProperty(unsigned int, ze)
            UnmanagedReferenceProperty(unsigned int, v)
            UnmanagedOperator(DirectX::PackedVector::XMFLOAT3PK)
        };
    }
}