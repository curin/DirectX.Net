#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUDEC4 UMUDEC4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUDEC4
        {
        public:
            UMUDEC4* _vec;
            XMUDEC4()
            {
                _vec = new UMUDEC4();
            }

            XMUDEC4(UMUDEC4* Packed)
            {
                _vec = Packed;
            }

            XMUDEC4(float x, float y, float z, float w)
            {
                _vec = new UMUDEC4(x, y, z, w);
            }

            XMUDEC4(unsigned int c)
            {
                _vec = new UMUDEC4(c);
            }

            XMUDEC4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUDEC4(arr);
            }

            ~XMUDEC4()
            {
                delete _vec;
            }

            XMUDEC4^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned int x { unsigned int get() { return _vec->x; } void set(unsigned int value) { _vec->x = value; }}
            property unsigned int y { unsigned int get() { return _vec->y; } void set(unsigned int value) { _vec->y = value; }}
            property unsigned int z { unsigned int get() { return _vec->z; } void set(unsigned int value) { _vec->z = value; }}
            property unsigned int w { unsigned int get() { return _vec->w; } void set(unsigned int value) { _vec->w = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMUDEC4 ^MXMUDEC4;
    }
}