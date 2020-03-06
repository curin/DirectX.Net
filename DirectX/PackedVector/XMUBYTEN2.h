#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUBYTEN2 UMUBYTEN2;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUBYTEN2
        {
        public:
            UMUBYTEN2* _vec;
            XMUBYTEN2()
            {
                _vec = new UMUBYTEN2();
            }

            XMUBYTEN2(UMUBYTEN2* Packed)
            {
                _vec = Packed;
            }

            XMUBYTEN2(unsigned char x, unsigned char y)
            {
                _vec = new UMUBYTEN2(x, y);
            }

            XMUBYTEN2(float x, float y)
            {
                _vec = new UMUBYTEN2(x, y);
            }

            XMUBYTEN2(unsigned int c)
            {
                _vec = new UMUBYTEN2(c);
            }

            XMUBYTEN2(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUBYTEN2(arr);
            }

            XMUBYTEN2(array<unsigned char>^ pArray)
            {
                pin_ptr<unsigned char> arr = &pArray[0];
                _vec = new UMUBYTEN2(arr);
            }

            ~XMUBYTEN2()
            {
                delete _vec;
            }

            XMUBYTEN2^ operator= (const unsigned short vector) { _vec->v = vector; return this; }
            property unsigned char x { unsigned char get() { return _vec->x; } void set(unsigned char value) { _vec->x = value; }}
            property unsigned char y { unsigned char get() { return _vec->y; } void set(unsigned char value) { _vec->y = value; }}

            property unsigned short v { unsigned short get() { return _vec->v; } void set(unsigned short value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMUBYTEN2 ^MXMUBYTEN2;
    }
}