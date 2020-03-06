#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUBYTE2 UMUBYTE2;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUBYTE2
        {
        public:
            UMUBYTE2* _vec;
            XMUBYTE2()
            {
                _vec = new UMUBYTE2();
            }

            XMUBYTE2(UMUBYTE2* Packed)
            {
                _vec = Packed;
            }

            XMUBYTE2(unsigned char x, unsigned char y)
            {
                _vec = new UMUBYTE2(x, y);
            }

            XMUBYTE2(float x, float y)
            {
                _vec = new UMUBYTE2(x, y);
            }

            XMUBYTE2(unsigned int c)
            {
                _vec = new UMUBYTE2(c);
            }

            XMUBYTE2(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUBYTE2(arr);
            }

            XMUBYTE2(array<unsigned char>^ pArray)
            {
                pin_ptr<unsigned char> arr = &pArray[0];
                _vec = new UMUBYTE2(arr);
            }

            ~XMUBYTE2()
            {
                delete _vec;
            }

            XMUBYTE2^ operator= (const unsigned short vector) { _vec->v = vector; return this; }
            property unsigned char x { unsigned char get() { return _vec->x; } void set(unsigned char value) { _vec->x = value; }}
            property unsigned char y { unsigned char get() { return _vec->y; } void set(unsigned char value) { _vec->y = value; }}

            property unsigned short v { unsigned short get() { return _vec->v; } void set(unsigned short value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMUBYTE2 ^MXMUBYTE2;
    }
}