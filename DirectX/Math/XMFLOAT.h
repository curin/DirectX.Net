#pragma once
#include <DirectXMath.h>

namespace DirectX
{
	namespace Math
	{
		public ref class XMFLOAT3X3
		{
		public:
			DirectX::XMFLOAT3X3* _val;

            XMFLOAT3X3(DirectX::XMFLOAT3X3* val)
            {
                _val = val;
            }

			XMFLOAT3X3()
			{
				_val = new DirectX::XMFLOAT3X3();
			}

			XMFLOAT3X3(const XMFLOAT3X3^ val)
			{
				_val = new DirectX::XMFLOAT3X3(*val->_val);
			}

			XMFLOAT3X3^ operator=(const XMFLOAT3X3^ val)
			{
				return gcnew XMFLOAT3X3(val);
			}

			XMFLOAT3X3(float m00, float m01, float m02,
				float m10, float m11, float m12,
				float m20, float m21, float m22)
			{
				_val = new DirectX::XMFLOAT3X3(m00, m01, m02, m10, m11, m12, m20, m21, m22);
			}

			explicit XMFLOAT3X3(array<float>^ pArray)
			{
				cli::pin_ptr<float> arr = &pArray[0];
				_val = new DirectX::XMFLOAT3X3(arr);
			}

			float& operator() (unsigned int Row, unsigned int Column) { return _val->operator()(Row, Column); }

			~XMFLOAT3X3()
			{
				delete _val;
			}
		};

		public ref class XMFLOAT4X3
		{
		public:
			DirectX::XMFLOAT4X3* _val;

            XMFLOAT4X3(DirectX::XMFLOAT4X3* val)
            {
                _val = val;
            }

			XMFLOAT4X3()
			{
				_val = new DirectX::XMFLOAT4X3();
			}

			XMFLOAT4X3(const XMFLOAT4X3^ val)
			{
				_val = new DirectX::XMFLOAT4X3(*val->_val);
			}

			XMFLOAT4X3^ operator=(const XMFLOAT4X3^ val)
			{
				return gcnew XMFLOAT4X3(val);
			}

			XMFLOAT4X3(float m00, float m01, float m02,
				float m10, float m11, float m12,
				float m20, float m21, float m22,
				float m30, float m31, float m32)
			{
				_val = new DirectX::XMFLOAT4X3(m00, m01, m02, m10, m11, m12, m20, m21, m22, m30, m31, m32);
			}

			explicit XMFLOAT4X3(array<float>^ pArray)
			{
				cli::pin_ptr<float> arr = &pArray[0];
				_val = new DirectX::XMFLOAT4X3(arr);
			}

			float& operator() (unsigned int Row, unsigned int Column) { return _val->operator()(Row, Column); }

			~XMFLOAT4X3()
			{
				delete _val;
			}
		};

		public ref class XMFLOAT3X4
		{
		public:
			DirectX::XMFLOAT3X4* _val;

            XMFLOAT3X4(DirectX::XMFLOAT3X4* val)
            {
                _val = val;
            }

			XMFLOAT3X4()
			{
				_val = new DirectX::XMFLOAT3X4();
			}

			XMFLOAT3X4(const XMFLOAT3X4^ val)
			{
				_val = new DirectX::XMFLOAT3X4(*val->_val);
			}

			XMFLOAT3X4^ operator=(const XMFLOAT3X4^ val)
			{
				return gcnew XMFLOAT3X4(val);
			}

			XMFLOAT3X4(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23)
			{
				_val = new DirectX::XMFLOAT3X4(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23);
			}

			explicit XMFLOAT3X4(array<float>^ pArray)
			{
				cli::pin_ptr<float> arr = &pArray[0];
				_val = new DirectX::XMFLOAT3X4(arr);
			}

			float& operator() (unsigned int Row, unsigned int Column) { return _val->operator()(Row, Column); }

			~XMFLOAT3X4()
			{
				delete _val;
			}
		};

		public ref class XMFLOAT4X3A
		{
		public:
			DirectX::XMFLOAT4X3A* _val;

            XMFLOAT4X3A(DirectX::XMFLOAT4X3A* val)
            {
                _val = val;
            }

            XMFLOAT4X3A()
            {
                _val = new DirectX::XMFLOAT4X3A();
            }

			XMFLOAT4X3A(float m00, float m01, float m02,
				float m10, float m11, float m12,
				float m20, float m21, float m22,
				float m30, float m31, float m32)
			{
				_val = new DirectX::XMFLOAT4X3A(m00, m01, m02, m10, m11, m12, m20, m21, m22, m30, m31, m32);
			}

			explicit XMFLOAT4X3A(array<float>^ pArray)
			{
				cli::pin_ptr<float> arr = &pArray[0];
				_val = new DirectX::XMFLOAT4X3A(arr);
			}

			~XMFLOAT4X3A()
			{
				delete _val;
			}
		};

		public ref class XMFLOAT3X4A
		{
		public:
			DirectX::XMFLOAT3X4A* _val;

            XMFLOAT3X4A(DirectX::XMFLOAT3X4A* val)
            {
                _val = val;
            }

            XMFLOAT3X4A()
            {
                _val = new DirectX::XMFLOAT3X4A();
            }

			XMFLOAT3X4A(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23)
			{
				_val = new DirectX::XMFLOAT3X4A(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23);
			}

			explicit XMFLOAT3X4A(array<float>^ pArray)
			{
				cli::pin_ptr<float> arr = &pArray[0];
				_val = new DirectX::XMFLOAT3X4A(arr);
			}

			~XMFLOAT3X4A()
			{
				delete _val;
			}
		};

		public ref class XMFLOAT4X4
		{
		public:
			DirectX::XMFLOAT4X4* _val;
            
            XMFLOAT4X4(DirectX::XMFLOAT4X4* val)
            {
                _val = val;
            }

			XMFLOAT4X4()
			{
				_val = new DirectX::XMFLOAT4X4();
			}

			XMFLOAT4X4(const XMFLOAT4X4^ val)
			{
				_val = new DirectX::XMFLOAT4X4(*val->_val);
			}

			XMFLOAT4X4^ operator=(const XMFLOAT4X4^ val)
			{
				return gcnew XMFLOAT4X4(val);
			}

			XMFLOAT4X4(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23,
				float m30, float m31, float m32, float m33)
			{
				_val = new DirectX::XMFLOAT4X4(m00, m01, m02, m03,
					m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
			}

			explicit XMFLOAT4X4(array<float>^ pArray)
			{
				cli::pin_ptr<float> arr = &pArray[0];
				_val = new DirectX::XMFLOAT4X4(arr);
			}

			float& operator() (unsigned int Row, unsigned int Column) { return _val->operator()(Row, Column); }

			~XMFLOAT4X4()
			{
				delete _val;
			}
		};

		public ref class XMFLOAT4X4A
		{
		public:
			DirectX::XMFLOAT4X4A* _val;

            XMFLOAT4X4A()
            {
                _val = new DirectX::XMFLOAT4X4A();
            }

            XMFLOAT4X4A(DirectX::XMFLOAT4X4A* val)
            {
                _val = val;
            }

			XMFLOAT4X4A(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23,
				float m30, float m31, float m32, float m33)
			{
				_val = new DirectX::XMFLOAT4X4A(m00, m01, m02, m03,
					m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
			}

			explicit XMFLOAT4X4A(array<float>^ pArray)
			{
				cli::pin_ptr<float> arr = &pArray[0];
				_val = new DirectX::XMFLOAT4X4A(arr);
			}

			~XMFLOAT4X4A()
			{
				delete _val;
			}
		};
	}
}
