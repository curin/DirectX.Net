#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMFLOAT3PK UMFLOAT3PK;


namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMFLOAT3PK
        {
        public:
            UMFLOAT3PK* _vec;
            XMFLOAT3PK()
            {
                _vec = new UMFLOAT3PK();
            }

            XMFLOAT3PK(UMFLOAT3PK* Vec)
            {
                _vec = Vec;
            }

            XMFLOAT3PK(float x, float y, float z)
            {
                _vec = new UMFLOAT3PK(x, y, z);
            }

            XMFLOAT3PK(unsigned int packed)
            {
                _vec = new UMFLOAT3PK(packed);
            }

            XMFLOAT3PK(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMFLOAT3PK(arr);
            }

            ~XMFLOAT3PK()
            {
                delete _vec;
            }

            XMFLOAT3PK^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned int xm { unsigned int get() { return _vec->xm; } void set(unsigned int value) { _vec->xm = value; }}
            property unsigned int ym { unsigned int get() { return _vec->ym; } void set(unsigned int value) { _vec->ym = value; }}
            property unsigned int zm { unsigned int get() { return _vec->zm; } void set(unsigned int value) { _vec->zm = value; }}
            property unsigned int xe { unsigned int get() { return _vec->xe; } void set(unsigned int value) { _vec->xe = value; }}
            property unsigned int ye { unsigned int get() { return _vec->ye; } void set(unsigned int value) { _vec->ye = value; }}
            property unsigned int ze { unsigned int get() { return _vec->ze; } void set(unsigned int value) { _vec->ze = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMFLOAT3PK ^MXMFLOAT3PK;
    }
}