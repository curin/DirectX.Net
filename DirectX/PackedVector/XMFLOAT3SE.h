#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMFLOAT3SE UMFLOAT3SE;


namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMFLOAT3SE
        {
        public:
            UMFLOAT3SE* _vec;
            XMFLOAT3SE()
            {
                _vec = new UMFLOAT3SE();
            }

            XMFLOAT3SE(UMFLOAT3SE* Vec)
            {
                _vec = Vec;
            }

            XMFLOAT3SE(float x, float y, float z)
            {
                _vec = new UMFLOAT3SE(x, y, z);
            }

            XMFLOAT3SE(unsigned int packed)
            {
                _vec = new UMFLOAT3SE(packed);
            }

            XMFLOAT3SE(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMFLOAT3SE(arr);
            }

            ~XMFLOAT3SE()
            {
                delete _vec;
            }

            XMFLOAT3SE^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned int xm { unsigned int get() { return _vec->xm; } void set(unsigned int value) { _vec->xm = value; }}
            property unsigned int ym { unsigned int get() { return _vec->ym; } void set(unsigned int value) { _vec->ym = value; }}
            property unsigned int zm { unsigned int get() { return _vec->zm; } void set(unsigned int value) { _vec->zm = value; }}
            property unsigned int e { unsigned int get() { return _vec->e; } void set(unsigned int value) { _vec->e = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMFLOAT3SE ^MXMFLOAT3SE;
    }
}