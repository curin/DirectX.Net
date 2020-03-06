#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMUDECN4 UMUDECN4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMUDECN4
        {
        public:
            UMUDECN4* _vec;
            XMUDECN4()
            {
                _vec = new UMUDECN4();
            }

            XMUDECN4(UMUDECN4* Packed)
            {
                _vec = Packed;
            }

            XMUDECN4(float x, float y, float z, float w)
            {
                _vec = new UMUDECN4(x, y, z, w);
            }

            XMUDECN4(unsigned int c)
            {
                _vec = new UMUDECN4(c);
            }

            XMUDECN4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMUDECN4(arr);
            }

            ~XMUDECN4()
            {
                delete _vec;
            }

            XMUDECN4^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property unsigned int x { unsigned int get() { return _vec->x; } void set(unsigned int value) { _vec->x = value; }}
            property unsigned int y { unsigned int get() { return _vec->y; } void set(unsigned int value) { _vec->y = value; }}
            property unsigned int z { unsigned int get() { return _vec->z; } void set(unsigned int value) { _vec->z = value; }}
            property unsigned int w { unsigned int get() { return _vec->w; } void set(unsigned int value) { _vec->w = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMUDECN4 ^MXMUDECN4;
    }
}