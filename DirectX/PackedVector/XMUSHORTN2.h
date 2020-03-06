#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUSHORTN2 UMUSHORTN2;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUSHORTN2
        {
        public:
            UMUSHORTN2* _vec;
            XMUSHORTN2()
            {
                _vec = new UMUSHORTN2();
            }

            XMUSHORTN2(UMUSHORTN2* Packed)
            {
                _vec = Packed;
            }

            XMUSHORTN2(unsigned short x, unsigned short y)
            {
                _vec = new UMUSHORTN2(x, y);
            }

            XMUSHORTN2(float x, float y)
            {
                _vec = new UMUSHORTN2(x, y);
            }

            XMUSHORTN2(unsigned int c)
            {
                _vec = new UMUSHORTN2(c);
            }

            XMUSHORTN2(array<unsigned short>^ pArray)
            {
                pin_ptr<unsigned short> arr = &pArray[0];
                _vec = new UMUSHORTN2(arr);
            }

            XMUSHORTN2(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUSHORTN2(arr);
            }

            ~XMUSHORTN2()
            {
                delete _vec;
            }

            XMUSHORTN2^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
            property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMUSHORTN2 ^MXMUSHORTN2;
    }
}