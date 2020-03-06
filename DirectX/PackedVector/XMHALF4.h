#pragma once
#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMHALF4 UMHALF4;


namespace DirectX
{
	namespace PackedVectors
	{
		public ref class XMHALF4
		{
		public:
			UMHALF4* _vec;
			XMHALF4()
			{
				_vec = new UMHALF4();
			}

			XMHALF4(UMHALF4* vec)
			{
				_vec = vec;
			}

			XMHALF4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
			{
				_vec = new UMHALF4(x, y, z, w);
			}

            XMHALF4(float x, float y, float z, float w)
            {
                _vec = new UMHALF4(x, y, z, w);
            }

			XMHALF4(unsigned long long c)
			{
				_vec = new UMHALF4(c);
			}

			XMHALF4(array<float>^ pArray)
			{
				pin_ptr<float> arr = &pArray[0];
				_vec = new UMHALF4(arr);
			}

			~XMHALF4()
			{
				delete _vec;
			}

			XMHALF4^ operator= (const unsigned long long vector) { _vec->v = vector; return this; }
			property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
			property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}
            property unsigned short z { unsigned short get() { return _vec->z; } void set(unsigned short value) { _vec->z = value; }}
            property unsigned short w { unsigned short get() { return _vec->w; } void set(unsigned short value) { _vec->w = value; }}

            property unsigned long long v { unsigned long long get() { return _vec->v; } void set(unsigned long long value) { _vec->v = value; }}
			operator unsigned long long() { return _vec->v; }
		};
		typedef XMHALF4 ^MXMHALF4;
	}
}

