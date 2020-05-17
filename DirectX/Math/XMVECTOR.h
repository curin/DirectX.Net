#pragma once
#include <DirectXMath.h>
#include "../Windows/IUnmanagedReference.h"

using namespace System::Numerics;

#define VecPropertyConvert(Name) static property DirectX::Math::XMVECTOR^ Name { DirectX::Math::XMVECTOR^ get() { return gcnew DirectX::Math::XMVECTOR(&(DirectX::XMVECTOR)DirectX::Name); }}

namespace DirectX
{
	namespace Math
	{
		void XMVECTOR_CONSTRUCTOR(DirectX::XMVECTOR* location, DirectX::XMVECTOR* value) { *location = DirectX::XMVECTOR(*value); }
		DirectX::XMVECTOR* XMVECTOR_ADD(DirectX::XMVECTOR* lh, DirectX::XMVECTOR* rh) { DirectX::XMVECTOR* ret = new DirectX::XMVECTOR(*lh + *rh); return ret;  }
		DirectX::XMVECTOR* XMVECTOR_SUBTRACT(DirectX::XMVECTOR* lh, DirectX::XMVECTOR* rh) { DirectX::XMVECTOR* ret = new DirectX::XMVECTOR(*lh - *rh);return ret; }
		DirectX::XMVECTOR* XMVECTOR_MULTIPLY(DirectX::XMVECTOR* lh, float rh) { DirectX::XMVECTOR* ret = new DirectX::XMVECTOR(*lh * rh); return ret; }
		public ref class XMVECTOR : IUnmanagedReference<DirectX::XMVECTOR>
		{
		public:

			XMVECTOR()
			{
				_value = (DirectX::XMVECTOR*)_aligned_malloc(sizeof(DirectX::XMVECTOR), 16);
			}

			XMVECTOR(IntPtr location, DirectX::XMVECTOR* val)
			{
				_value = (DirectX::XMVECTOR*)location.ToPointer();
				XMVECTOR_CONSTRUCTOR(_value, val);
			}

			XMVECTOR(DirectX::XMVECTOR* val)
			{
				_value = val;
			}

			~XMVECTOR()
			{
				_aligned_free(_value);
			}

			property float x { float get() { return _value->m128_f32[0]; }}
			property float y { float get() { return _value->m128_f32[1]; }}
			property float z { float get() { return _value->m128_f32[2]; }}
			property float w { float get() { return _value->m128_f32[3]; }}

			property array<long long>^ LongVector
			{
				array<long long>^ get()
				{
					long long* arr = _value->m128_i64;
					array<long long>^ out = gcnew array<long long>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<unsigned long long>^ ULongVector
			{
				array<unsigned long long> ^ get()
				{
					unsigned long long* arr = _value->m128_u64;
					array<unsigned long long>^ out = gcnew array<unsigned long long>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<float>^ FloatVector 
			{ 
				array<float>^ get() 
				{ 
					float* arr = _value->m128_f32;
					array<float>^ out = gcnew array<float>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<int>^ IntVector
			{
				array<int>^ get()
				{
					int* arr = _value->m128_i32;
					array<int>^ out = gcnew array<int>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<unsigned int>^ UIntVector
			{
				array<unsigned int>^ get()
				{
					unsigned int* arr = _value->m128_u32;
					array<unsigned int>^ out = gcnew array<unsigned int>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<short>^ ShortVector
			{
				array<short>^ get()
				{
					short* arr = _value->m128_i16;
					array<short>^ out = gcnew array<short>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<unsigned short>^ UShortVector
			{
				array<unsigned short>^ get()
				{
					unsigned short* arr = _value->m128_u16;
					array<unsigned short>^ out = gcnew array<unsigned short>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<char>^ ByteVector
			{
				array<char>^ get()
				{
					char* arr = _value->m128_i8;
					array<char>^ out = gcnew array<char>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			property array<unsigned char>^ UByteVector
			{
				array<unsigned char>^ get()
				{
					unsigned char* arr = _value->m128_u8;
					array<unsigned char>^ out = gcnew array<unsigned char>(4);
					out[0] = arr[0];
					out[1] = arr[1];
					out[2] = arr[2];
					out[3] = arr[3];
					return out;
				}
			}

			Vector2 ToVector2()
			{
				return Vector2(x, y);
			}

			Vector3 ToVector3()
			{
				return Vector3(x, y, z);
			}

			Vector4 ToVector4()
			{
				return Vector4(x, y, z, w);
			}

		    System::String^ ToString() override
			{
				System::String^ ret = gcnew System::String("x: ");
				System::String^ temp = gcnew System::String(", y: ");
				ret = ret->Concat(x);
				ret = ret->Concat(temp);
				ret = ret->Concat(y);
				temp = gcnew System::String(", z: ");
				ret = ret->Concat(temp);
				ret = ret->Concat(z);
				return ret;
			}

			operator DirectX::XMVECTOR* () { return _value; }
			XMVECTOR^ operator+(XMVECTOR^ rh) { return gcnew XMVECTOR(XMVECTOR_ADD(_value, rh->_value)); }
			XMVECTOR^ operator-(XMVECTOR^ rh) { return gcnew XMVECTOR(XMVECTOR_SUBTRACT(_value, rh->_value)); }
			XMVECTOR^ operator*(float rh) { return gcnew XMVECTOR(XMVECTOR_MULTIPLY(_value, rh)); }
			static XMVECTOR^ operator*(float lh, XMVECTOR^ rh) { return gcnew XMVECTOR(XMVECTOR_MULTIPLY(rh->_value, lh)); }
		};
	}
}
