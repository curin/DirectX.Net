#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUBYTE4 UMUBYTE4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUBYTE4
        {
        public:
            UMUBYTE4* _vec;
            XMUBYTE4()
            {
                _vec = new UMUBYTE4();
            }

            XMUBYTE4(UMUBYTE4* Packed)
            {
                _vec = Packed;
            }

            XMUBYTE4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
            {
                _vec = new UMUBYTE4(x, y, z, w);
            }

            XMUBYTE4(float x, float y, float z, float w)
            {
                _vec = new UMUBYTE4(x, y, z, w);
            }

            XMUBYTE4(unsigned int c)
            {
                _vec = new UMUBYTE4(c);
            }

            XMUBYTE4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUBYTE4(arr);
            }

            XMUBYTE4(array<unsigned char>^ pArray)
            {
                pin_ptr<unsigned char> arr = &pArray[0];
                _vec = new UMUBYTE4(arr);
            }

            ~XMUBYTE4()
            {
                delete _vec;
            }

            XMUBYTE4^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned char x { unsigned char get() { return _vec->x; } void set(unsigned char value) { _vec->x = value; }}
            property unsigned char y { unsigned char get() { return _vec->y; } void set(unsigned char value) { _vec->y = value; }}
            property unsigned char z { unsigned char get() { return _vec->z; } void set(unsigned char value) { _vec->z = value; }}
            property unsigned char w { unsigned char get() { return _vec->w; } void set(unsigned char value) { _vec->w = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMUBYTE4 ^MXMUBYTE4;
    }
}