#pragma once
#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMBYTE4 UMXBYTE4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMBYTE4
        {
        public:
            UMXBYTE4* _vec;
            XMBYTE4()
            {
                _vec = new UMXBYTE4();
            }

            XMBYTE4(UMXBYTE4* Packed)
            {
                _vec = Packed;
            }

            XMBYTE4(signed char x, signed char y, signed char z, signed char w)
            {
                _vec = new UMXBYTE4(x, y, z, w);
            }

            XMBYTE4(float x, float y, float z, float w)
            {
                _vec = new UMXBYTE4(x, y, z, w);
            }

            XMBYTE4(unsigned int c)
            {
                _vec = new UMXBYTE4(c);
            }

            XMBYTE4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMXBYTE4(arr);
            }

            XMBYTE4(array<signed char>^ pArray)
            {
                pin_ptr<signed char> arr = &pArray[0];
                _vec = new UMXBYTE4(arr);
            }

            ~XMBYTE4()
            {
                delete _vec;
            }

            XMBYTE4^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property signed char x { signed char get() { return _vec->x; } void set(signed char value) { _vec->x = value; }}
            property signed char y { signed char get() { return _vec->y; } void set(signed char value) { _vec->y = value; }}
            property signed char z { signed char get() { return _vec->z; } void set(signed char value) { _vec->z = value; }}
            property signed char w { signed char get() { return _vec->w; } void set(signed char value) { _vec->w = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMBYTE4 ^MXMBYTE4;
    }
}