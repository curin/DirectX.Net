#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMXDECN4 UMXDECN4;

namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMXDECN4
        {
        public:
            UMXDECN4* _vec;
            XMXDECN4()
            {
                _vec = new UMXDECN4();
            }

            XMXDECN4(UMXDECN4* Packed)
            {
                _vec = Packed;
            }

            XMXDECN4(float x, float y, float z, float w)
            {
                _vec = new UMXDECN4(x, y, z, w);
            }

            XMXDECN4(unsigned int c)
            {
                _vec = new UMXDECN4(c);
            }

            XMXDECN4(array<float>^ pArray)
            {
                pin_ptr<float> arr = &pArray[0];
                _vec = new UMXDECN4(arr);
            }

            ~XMXDECN4()
            {
                delete _vec;
            }

            XMXDECN4^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
            property int x { int get() { return _vec->x; } void set(int value) { _vec->x = value; }}
            property int y { int get() { return _vec->y; } void set(int value) { _vec->y = value; }}
            property int z { int get() { return _vec->z; } void set(int value) { _vec->z = value; }}
            property int w { int get() { return _vec->w; } void set(int value) { _vec->w = value; }}

            property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
            operator unsigned int() { return _vec->v; }
        };
		typedef XMXDECN4 ^MXMXDECN4;
    }
}