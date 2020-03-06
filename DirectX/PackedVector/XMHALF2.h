#pragma once
#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMHALF2 UMHALF2;

namespace DirectX
{
	namespace PackedVectors
	{
		public ref class XMHALF2
		{
		public:
			UMHALF2* _vec;
			XMHALF2()
			{
				_vec = new UMHALF2();
			}

			XMHALF2(UMHALF2* vec)
			{
				_vec = vec;
			}

			XMHALF2(unsigned short x, unsigned short y)
			{
				_vec = new UMHALF2(x, y);
			}

            XMHALF2(float x, float y)
            {
                _vec = new UMHALF2(x, y);
            }

			XMHALF2(unsigned int c)
			{
				_vec = new UMHALF2(c);
			}

			XMHALF2(array<float>^ pArray)
			{
				pin_ptr<float> arr = &pArray[0];
				_vec = new UMHALF2(arr);
			}

			~XMHALF2()
			{
				delete _vec;
			}

			XMHALF2^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
			property unsigned short x { unsigned short get() { return _vec->x; } void set(unsigned short value) { _vec->x = value; }}
			property unsigned short y { unsigned short get() { return _vec->y; } void set(unsigned short value) { _vec->y = value; }}

			property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
			operator unsigned int() { return _vec->v; }
		};
		typedef XMHALF2 ^MXMHALF2;
	}
}

