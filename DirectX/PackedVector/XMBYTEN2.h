#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMBYTEN2 UMXBYTEN2;

namespace DirectX
{
	namespace PackedVectors
	{
		public ref class XMBYTEN2
		{
		public:
			UMXBYTEN2* _vec;
			XMBYTEN2()
			{
				_vec = new UMXBYTEN2();
			}

			XMBYTEN2(UMXBYTEN2* Packed)
			{
				_vec = Packed;
			}

			XMBYTEN2(signed char x, signed char y)
			{
				_vec = new UMXBYTEN2(x, y);
			}

            XMBYTEN2(float x, float y)
            {
                _vec = new UMXBYTEN2(x, y);
            }

			XMBYTEN2(unsigned int c)
			{
				_vec = new UMXBYTEN2(c);
			}

			XMBYTEN2(array<float>^ pArray)
			{
				pin_ptr<float> arr = &pArray[0];
				_vec = new UMXBYTEN2(arr);
			}

            XMBYTEN2(array<signed char>^ pArray)
            {
                pin_ptr<signed char> arr = &pArray[0];
                _vec = new UMXBYTEN2(arr);
            }

			~XMBYTEN2()
			{
				delete _vec;
			}

			XMBYTEN2^ operator= (const unsigned short vector) { _vec->v = vector; return this; }
			property signed char x { signed char get() { return _vec->x; } void set(signed char value) { _vec->x = value; }}
			property signed char y { signed char get() { return _vec->y; } void set(signed char value) { _vec->y = value; }}

			property unsigned short v { unsigned short get() { return _vec->v; } void set(unsigned short value) { _vec->v = value; }}
			operator unsigned short() { return _vec->v; }
		};
		typedef XMBYTEN2 ^MXMBYTEN2;
	}
}