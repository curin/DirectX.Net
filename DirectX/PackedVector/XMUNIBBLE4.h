#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUNIBBLE4 UMUNIBBLE4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUNIBBLE4
        {
        public:
            UMUNIBBLE4* _vec;
            XMUNIBBLE4()
            {
                _vec = new UMUNIBBLE4();
            }

            XMUNIBBLE4(UMUNIBBLE4* Packed)
            {
                _vec = Packed;
            }

            XMUNIBBLE4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
            {
                _vec = new UMUNIBBLE4(x, y, z, w);
            }

            XMUNIBBLE4(float x, float y, float z, float w)
            {
                _vec = new UMUNIBBLE4(x, y, z, w);
            }

            XMUNIBBLE4(unsigned short c)
            {
                _vec = new UMUNIBBLE4(c);
            }

            XMUNIBBLE4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUNIBBLE4(arr);
            }

            XMUNIBBLE4(array<unsigned char>^ pArray)
            {
                pin_ptr<unsigned char> arr = &pArray[0];
                _vec = new UMUNIBBLE4(arr);
            }

            ~XMUNIBBLE4()
            {
                delete _vec;
            }

            XMUNIBBLE4^ operator= (const unsigned short vector) { _vec->v = vector; return this; }
            property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
            property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}
            property unsigned short z { unsigned short get() { return _vec->z; } void set(unsigned short value) { _vec->z = value; }}
            property unsigned short w { unsigned short get() { return _vec->w; } void set(unsigned short value) { _vec->w = value; }}

            property unsigned short v { unsigned short get() { return _vec->v; } void set(unsigned short value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMUNIBBLE4 ^MXMUNIBBLE4;
    }
}