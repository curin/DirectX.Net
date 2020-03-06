#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUSHORT2 UMUSHORT2;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUSHORT2
        {
        public:
            UMUSHORT2* _vec;
            XMUSHORT2()
            {
                _vec = new UMUSHORT2();
            }

            XMUSHORT2(UMUSHORT2* Packed)
            {
                _vec = Packed;
            }

            XMUSHORT2(unsigned short x, unsigned short y)
            {
                _vec = new UMUSHORT2(x, y);
            }

            XMUSHORT2(float x, float y)
            {
                _vec = new UMUSHORT2(x, y);
            }

            XMUSHORT2(unsigned int c)
            {
                _vec = new UMUSHORT2(c);
            }

            XMUSHORT2(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUSHORT2(arr);
            }

            XMUSHORT2(array<unsigned short>^ pArray)
            {
                pin_ptr<unsigned short> arr = &pArray[0];
                _vec = new UMUSHORT2(arr);
            }

            ~XMUSHORT2()
            {
                delete _vec;
            }

            XMUSHORT2^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
            property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMUSHORT2 ^MXMUSHORT2;
    }
}