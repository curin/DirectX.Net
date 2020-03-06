#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMU565 UMU565;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMU565
        {
        public:
            UMU565* _vec;
            XMU565()
            {
                _vec = new UMU565();
            }

            XMU565(UMU565* Packed)
            {
                _vec = Packed;
            }

            XMU565(unsigned char x, unsigned char y, unsigned char z)
            {
                _vec = new UMU565(x, y, z);
            }

            XMU565(float x, float y, float z)
            {
                _vec = new UMU565(x, y, z);
            }

            XMU565(unsigned int c)
            {
                _vec = new UMU565(c);
            }

            XMU565(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMU565(arr);
            }

            XMU565(array<unsigned char>^ pArray)
            {
                pin_ptr<unsigned char> arr = &pArray[0];
                _vec = new UMU565(arr);
            }

            ~XMU565()
            {
                delete _vec;
            }

            XMU565^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
            property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}
            property unsigned short z { unsigned short get() { return _vec->z; } void set(unsigned short value) { _vec->z = value; }}

            property unsigned short v { unsigned short get() { return _vec->v; } void set(unsigned short value) { _vec->v = value; }}
            operator unsigned short() { return _vec->v; }
        };
		typedef XMU565 ^MXMU565;
    }
}