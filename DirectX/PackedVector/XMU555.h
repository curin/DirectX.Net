#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMU555 UMU555;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMU555
        {
        public:
            UMU555* _vec;
            XMU555()
            {
                _vec = new UMU555();
            }

            XMU555(UMU555* Packed)
            {
                _vec = Packed;
            }

            XMU555(unsigned char x, unsigned char y, unsigned char z, bool w)
            {
                _vec = new UMU555(x, y, z, w);
            }

            XMU555(float x, float y, float z, bool w)
            {
                _vec = new UMU555(x, y, z, w);
            }

            XMU555(unsigned short c)
            {
                _vec = new UMU555(c);
            }

            XMU555(array<float>^ pArray, bool w)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMU555(arr, w);
            }

            XMU555(array<unsigned char>^ pArray, bool w)
            {
                pin_ptr<unsigned char> arr = &pArray[0];
                _vec = new UMU555(arr, w);
            }

            ~XMU555()
            {
                delete _vec;
            }

            XMU555^ operator= (const unsigned short vector) { _vec->v = vector; return this; }
            property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
            property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}
            property unsigned short z { unsigned short get() { return _vec->z; } void set(unsigned short value) { _vec->z = value; }}
            property unsigned short w { unsigned short get() { return _vec->w; } void set(unsigned short value) { _vec->w = value; }}

            property unsigned short v { unsigned short get() { return _vec->v; } void set(unsigned short value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMU555 ^MXMU555;
    }
}