#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUSHORTN4 UMUSHORTN4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUSHORTN4
        {
        public:
            UMUSHORTN4* _vec;
            XMUSHORTN4()
            {
                _vec = new UMUSHORTN4();
            }

            XMUSHORTN4(UMUSHORTN4* Packed)
            {
                _vec = Packed;
            }

            XMUSHORTN4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
            {
                _vec = new UMUSHORTN4(x, y, z, w);
            }

            XMUSHORTN4(float x, float y, float z, float w)
            {
                _vec = new UMUSHORTN4(x, y, z, w);
            }

            XMUSHORTN4(unsigned int c)
            {
                _vec = new UMUSHORTN4(c);
            }

            XMUSHORTN4(array<unsigned short>^ pArray)
            {
                pin_ptr<unsigned short> arr = &pArray[0];
                _vec = new UMUSHORTN4(arr);
            }

            XMUSHORTN4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUSHORTN4(arr);
            }

            ~XMUSHORTN4()
            {
                delete _vec;
            }

            XMUSHORTN4^ operator= (const unsigned long long vector) { _vec->v = vector; return this; }
            property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
            property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}
            property unsigned short z { unsigned short get() { return _vec->z; } void set(unsigned short value) { _vec->z = value; }}
            property unsigned short w { unsigned short get() { return _vec->w; } void set(unsigned short value) { _vec->w = value; }}

            property unsigned long long v { unsigned long long get() { return _vec->v; } void set(unsigned long long value) { _vec->v = value; }}
            operator unsigned long long() { return _vec->v; }
        };
		typedef XMUSHORTN4 ^MXMUSHORTN4;
    }
}