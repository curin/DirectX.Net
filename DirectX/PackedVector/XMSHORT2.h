#pragma once
#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMSHORT2 UMSHORT2;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMSHORT2
        {
        public:
            UMSHORT2* _vec;
            XMSHORT2()
            {
                _vec = new UMSHORT2();
            }

            XMSHORT2(UMSHORT2* Packed)
            {
                _vec = Packed;
            }

            XMSHORT2(short x, short y)
            {
                _vec = new UMSHORT2(x, y);
            }

            XMSHORT2(float x, float y)
            {
                _vec = new UMSHORT2(x, y);
            }

            XMSHORT2(unsigned int c)
            {
                _vec = new UMSHORT2(c);
            }

            XMSHORT2(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMSHORT2(arr);
            }

            XMSHORT2(array<short>^ pArray)
            {
                pin_ptr<short> arr = &pArray[0];
                _vec = new UMSHORT2(arr);
            }

            ~XMSHORT2()
            {
                delete _vec;
            }

            XMSHORT2^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property short x { short get() { return _vec->x; } void set(short value) { _vec->x = value; }}
            property short y { short get() { return _vec->y; } void set(short value) { _vec->y = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMSHORT2 ^MXMSHORT2;
    }
}