#pragma once
#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMSHORT4 UMSHORT4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMSHORT4
        {
        public:
            UMSHORT4* _vec;
            XMSHORT4()
            {
                _vec = new UMSHORT4();
            }

            XMSHORT4(UMSHORT4* Packed)
            {
                _vec = Packed;
            }

            XMSHORT4(short x, short y, short z, short w)
            {
                _vec = new UMSHORT4(x, y, z, w);
            }

            XMSHORT4(float x, float y, float z, float w)
            {
                _vec = new UMSHORT4(x, y, z, w);
            }

            XMSHORT4(unsigned long long c)
            {
                _vec = new UMSHORT4(c);
            }

            XMSHORT4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMSHORT4(arr);
            }

            XMSHORT4(array<short>^ pArray)
            {
                pin_ptr<short> arr = &pArray[0];
                _vec = new UMSHORT4(arr);
            }

            ~XMSHORT4()
            {
                delete _vec;
            }

            XMSHORT4^ operator= (const unsigned long long vector) { _vec->v = vector; return this; }
            property short x { short get() { return _vec->x; } void set(short value) { _vec->x = value; }}
            property short y { short get() { return _vec->y; } void set(short value) { _vec->y = value; }}
            property short z { short get() { return _vec->z; } void set(short value) { _vec->z = value; }}
            property short w { short get() { return _vec->w; } void set(short value) { _vec->w = value; }}

            property unsigned long long v { unsigned long long get() { return _vec->v; } void set(unsigned long long value) { _vec->v = value; }}
            operator unsigned long long() { return _vec->v; }
        };
		typedef XMSHORT4 ^MXMSHORT4;
    }
}