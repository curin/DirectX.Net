#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUBYTEN4 UMUBYTEN4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUBYTEN4
        {
        public:
            UMUBYTEN4* _vec;
            XMUBYTEN4()
            {
                _vec = new UMUBYTEN4();
            }

            XMUBYTEN4(UMUBYTEN4* Packed)
            {
                _vec = Packed;
            }

            XMUBYTEN4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
            {
                _vec = new UMUBYTEN4(x, y, z, w);
            }

            XMUBYTEN4(float x, float y, float z, float w)
            {
                _vec = new UMUBYTEN4(x, y, z, w);
            }

            XMUBYTEN4(unsigned int c)
            {
                _vec = new UMUBYTEN4(c);
            }

            XMUBYTEN4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUBYTEN4(arr);
            }

            XMUBYTEN4(array<unsigned char>^ pArray)
            {
                pin_ptr<unsigned char> arr = &pArray[0];
                _vec = new UMUBYTEN4(arr);
            }

            ~XMUBYTEN4()
            {
                delete _vec;
            }

            XMUBYTEN4^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned char x { unsigned char get() { return _vec->x; } void set(unsigned char value) { _vec->x = value; }}
            property unsigned char y { unsigned char get() { return _vec->y; } void set(unsigned char value) { _vec->y = value; }}
            property unsigned char z { unsigned char get() { return _vec->z; } void set(unsigned char value) { _vec->z = value; }}
            property unsigned char w { unsigned char get() { return _vec->w; } void set(unsigned char value) { _vec->w = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMUBYTEN4 ^MXMUBYTEN4;
    }
}