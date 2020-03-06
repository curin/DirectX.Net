#pragma once
#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMBYTE2 UMXBYTE2;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMBYTE2
        {
        public:
            UMXBYTE2* _vec;
            XMBYTE2()
            {
                _vec = new UMXBYTE2();
            }

            XMBYTE2(UMXBYTE2* Packed)
            {
                _vec = Packed;
            }

            XMBYTE2(signed char x, signed char y)
            {
                _vec = new UMXBYTE2(x, y);
            }

            XMBYTE2(float x, float y)
            {
                _vec = new UMXBYTE2(x, y);
            }

            XMBYTE2(unsigned int c)
            {
                _vec = new UMXBYTE2(c);
            }

            XMBYTE2(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMXBYTE2(arr);
            }

            XMBYTE2(array<signed char>^ pArray)
            {
                pin_ptr<signed char> arr = &pArray[0];
                _vec = new UMXBYTE2(arr);
            }

            ~XMBYTE2()
            {
                delete _vec;
            }

            XMBYTE2^ operator= (const unsigned short vector) { _vec->v = vector; return this; }
            property signed char x { signed char get() { return _vec->x; } void set(signed char value) { _vec->x = value; }}
            property signed char y { signed char get() { return _vec->y; } void set(signed char value) { _vec->y = value; }}

            property unsigned short v { unsigned short get() { return _vec->v; } void set(unsigned short value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMBYTE2 ^MXMBYTE2;
    }
}