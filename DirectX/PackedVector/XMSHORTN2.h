#pragma once

#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMSHORTN2 UMSHORTN2;


namespace DirectX
{
	namespace PackedVectors
	{
		public ref class XMSHORTN2
		{
		public:
			UMSHORTN2* _vec;
			XMSHORTN2()
			{
				_vec = new UMSHORTN2();
			}

			XMSHORTN2(UMSHORTN2* Packed)
			{
				_vec = Packed;
			}

			XMSHORTN2(short x, short y)
			{
				_vec = new UMSHORTN2(x, y);
			}

            XMSHORTN2(float x, float y)
            {
                _vec = new UMSHORTN2(x, y);
            }

			XMSHORTN2(unsigned int c)
			{
				_vec = new UMSHORTN2(c);
			}

			XMSHORTN2(array<float>^ pArray)
			{
				pin_ptr<float> arr = &pArray[0];
				_vec = new UMSHORTN2(arr);
			}

            XMSHORTN2(array<short>^ pArray)
            {
                pin_ptr<short> arr = &pArray[0];
                _vec = new UMSHORTN2(arr);
            }

			~XMSHORTN2()
			{
				delete _vec;
			}

			XMSHORTN2^ operator= (const unsigned int vector) { _vec->v = vector; return this; }
			property short x { short get() { return _vec->x; } void set(short value) { _vec->x = value; }}
			property short y { short get() { return _vec->y; } void set(short value) { _vec->y = value; }}

			property unsigned int v { unsigned int get() { return _vec->v; } void set(unsigned int value) { _vec->v = value; }}
			operator unsigned int() { return _vec->v; }
		};
		typedef XMSHORTN2 ^MXMSHORTN2;
	}
}