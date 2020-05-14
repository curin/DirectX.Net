#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace Math
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct XMFLOAT3X3
		{
		public:
			float _11, _12, _13;
			float _21, _22, _23;
			float _31, _32, _33;

			XMFLOAT3X3(float m00, float m01, float m02,
				float m10, float m11, float m12,
				float m20, float m21, float m22)
			{
				_11 = m00;
				_12 = m01;
				_13 = m02;
				_21 = m10;
				_22 = m11;
				_23 = m12;
				_31 = m20;
				_32 = m21;
				_33 = m22;
			}

			explicit XMFLOAT3X3(array<float>^ pArray)
			{
				_11 = pArray[0];
				_12 = pArray[1];
				_13 = pArray[2];
				_21 = pArray[3];
				_22 = pArray[4];
				_23 = pArray[5];
				_31 = pArray[6];
				_32 = pArray[7];
				_33 = pArray[8];
			}

			float& operator() (int Row, int Column) 
			{ 
				assert(Row < 3); 
				assert(Column < 3);
				pin_ptr<float> p = &_11;
				return p[Row * 3 + Column];
			}

			property float default[int, int]
			{
				float get(int Row, int Column)
				{
					assert(Row < 3);
					assert(Column < 3);
					pin_ptr<float> p = &_11;
					return p[Row * 3 + Column];
				}
				void set(int Row, int Column, float value)
				{
					assert(Row < 3);
					assert(Column < 3);
					pin_ptr<float> p = &_11;
					p[Row * 3 + Column] = value;
				}
			}
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMFLOAT4X3
		{
		public:
			float _11, _12, _13;
			float _21, _22, _23;
			float _31, _32, _33;
			float _41, _42, _43;

			XMFLOAT4X3(float m00, float m01, float m02,
				float m10, float m11, float m12,
				float m20, float m21, float m22,
				float m30, float m31, float m32)
			{
				_11 = m00;
				_12 = m01;
				_13 = m02;
				_21 = m10;
				_22 = m11;
				_23 = m12;
				_31 = m20;
				_32 = m21;
				_33 = m22;
				_41 = m30;
				_42 = m31;
				_43 = m32;
			}

			explicit XMFLOAT4X3(array<float>^ pArray)
			{
				_11 = pArray[0];
				_12 = pArray[1];
				_13 = pArray[2];
				_21 = pArray[3];
				_22 = pArray[4];
				_23 = pArray[5];
				_31 = pArray[6];
				_32 = pArray[7];
				_33 = pArray[8];
				_41 = pArray[9];
				_42 = pArray[10];
				_43 = pArray[11];
			}

			float& operator() (int Row, int Column)
			{
				assert(Row < 4);
				assert(Column < 3);
				pin_ptr<float> p = &_11;
				return p[Row * 3 + Column];
			}

			property float default[int, int]
			{
				float get(int Row, int Column)
				{
					assert(Row < 4);
					assert(Column < 3);
					pin_ptr<float> p = &_11;
					return p[Row * 3 + Column];
				}
				void set(int Row, int Column, float value)
				{
					assert(Row < 4);
					assert(Column < 3);
					pin_ptr<float> p = &_11;
					p[Row * 3 + Column] = value;
				}
			}
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMFLOAT3X4
		{
		public:
			float _11, _12, _13, _14;
			float _21, _22, _23, _24;
			float _31, _32, _33, _34;

			XMFLOAT3X4(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23)
			{
				_11 = m00;
				_12 = m01;
				_13 = m02;
				_14 = m03;
				_21 = m10;
				_22 = m11;
				_23 = m12;
				_24 = m23;
				_31 = m20;
				_32 = m21;
				_33 = m22;
				_34 = m23;
			}

			explicit XMFLOAT3X4(array<float>^ pArray)
			{
				_11 = pArray[0];
				_12 = pArray[1];
				_13 = pArray[2];
				_14 = pArray[3];
				_21 = pArray[4];
				_22 = pArray[5];
				_23 = pArray[6];
				_24 = pArray[7];
				_31 = pArray[8];
				_32 = pArray[9];
				_33 = pArray[10];
				_34 = pArray[11];
			}

			float& operator() (int Row, int Column)
			{
				assert(Row < 3);
				assert(Column < 4);
				pin_ptr<float> p = &_11;
				return p[Row * 3 + Column];
			}

			property float default[int, int]
			{
				float get(int Row, int Column)
				{
					assert(Row < 3);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					return p[Row * 3 + Column];
				}
				void set(int Row, int Column, float value)
				{
					assert(Row < 3);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					p[Row * 3 + Column] = value;
				}
			}
		};

		[StructLayout(LayoutKind::Sequential, Pack = 16)]
		public value struct XMFLOAT4X3A
		{
		public:
			float _11, _12, _13;
			float _21, _22, _23;
			float _31, _32, _33;
			float _41, _42, _43;

			XMFLOAT4X3A(float m00, float m01, float m02,
				float m10, float m11, float m12,
				float m20, float m21, float m22,
				float m30, float m31, float m32)
			{
				_11 = m00;
				_12 = m01;
				_13 = m02;
				_21 = m10;
				_22 = m11;
				_23 = m12;
				_31 = m20;
				_32 = m21;
				_33 = m22;
				_41 = m30;
				_42 = m31;
				_43 = m32;
			}

			explicit XMFLOAT4X3A(array<float>^ pArray)
			{
				_11 = pArray[0];
				_12 = pArray[1];
				_13 = pArray[2];
				_21 = pArray[3];
				_22 = pArray[4];
				_23 = pArray[5];
				_31 = pArray[6];
				_32 = pArray[7];
				_33 = pArray[8];
				_41 = pArray[9];
				_42 = pArray[10];
				_43 = pArray[11];
			}

			float& operator() (int Row, int Column)
			{
				assert(Row < 4);
				assert(Column < 3);
				pin_ptr<float> p = &_11;
				return p[Row * 3 + Column];
			}

			property float default[int, int]
			{
				float get(int Row, int Column)
				{
					assert(Row < 4);
					assert(Column < 3);
					pin_ptr<float> p = &_11;
					return p[Row * 3 + Column];
				}
				void set(int Row, int Column, float value)
				{
					assert(Row < 4);
					assert(Column < 3);
					pin_ptr<float> p = &_11;
					p[Row * 3 + Column] = value;
				}
			}
		};

		[StructLayout(LayoutKind::Sequential, Pack = 16)]
		public value struct XMFLOAT3X4A
		{
		public:
			float _11, _12, _13, _14;
			float _21, _22, _23, _24;
			float _31, _32, _33, _34;

			XMFLOAT3X4A(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23)
			{
				_11 = m00;
				_12 = m01;
				_13 = m02;
				_14 = m03;
				_21 = m10;
				_22 = m11;
				_23 = m12;
				_24 = m23;
				_31 = m20;
				_32 = m21;
				_33 = m22;
				_34 = m23;
			}

			explicit XMFLOAT3X4A(array<float>^ pArray)
			{
				_11 = pArray[0];
				_12 = pArray[1];
				_13 = pArray[2];
				_14 = pArray[3];
				_21 = pArray[4];
				_22 = pArray[5];
				_23 = pArray[6];
				_24 = pArray[7];
				_31 = pArray[8];
				_32 = pArray[9];
				_33 = pArray[10];
				_34 = pArray[11];
			}

			float& operator() (int Row, int Column)
			{
				assert(Row < 3);
				assert(Column < 4);
				pin_ptr<float> p = &_11;
				return p[Row * 3 + Column];
			}

			property float default[int, int]
			{
				float get(int Row, int Column)
				{
					assert(Row < 3);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					return p[Row * 3 + Column];
				}
				void set(int Row, int Column, float value)
				{
					assert(Row < 3);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					p[Row * 3 + Column] = value;
				}
			}
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMFLOAT4X4
		{
		public:
			float _11, _12, _13, _14;
			float _21, _22, _23, _24;
			float _31, _32, _33, _34;
			float _41, _42, _43, _44;

			XMFLOAT4X4(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23,
				float m30, float m31, float m32, float m33)
			{
				_11 = m00;
				_12 = m01;
				_13 = m02;
				_14 = m03;
				_21 = m10;
				_22 = m11;
				_23 = m12;
				_24 = m23;
				_31 = m20;
				_32 = m21;
				_33 = m22;
				_34 = m23;
				_41 = m30;
				_42 = m31;
				_43 = m32;
				_44 = m33;
			}

			explicit XMFLOAT4X4(array<float>^ pArray)
			{
				_11 = pArray[0];
				_12 = pArray[1];
				_13 = pArray[2];
				_14 = pArray[3];
				_21 = pArray[4];
				_22 = pArray[5];
				_23 = pArray[6];
				_24 = pArray[7];
				_31 = pArray[8];
				_32 = pArray[9];
				_33 = pArray[10];
				_34 = pArray[11];
				_41 = pArray[12];
				_42 = pArray[13];
				_43 = pArray[14];
				_44 = pArray[15];
			}

			float& operator() (int Row, int Column)
			{
				assert(Row < 4);
				assert(Column < 4);
				pin_ptr<float> p = &_11;
				return p[Row * 3 + Column];
			}

			property float default[int, int]
			{
				float get(int Row, int Column)
				{
					assert(Row < 4);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					return p[Row * 3 + Column];
				}
				void set(int Row, int Column, float value)
				{
					assert(Row < 4);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					p[Row * 3 + Column] = value;
				}
			}
		};

		[StructLayout(LayoutKind::Sequential, Pack=16)]
		public value struct XMFLOAT4X4A
		{
		public:
			float _11, _12, _13, _14;
			float _21, _22, _23, _24;
			float _31, _32, _33, _34;
			float _41, _42, _43, _44;

			XMFLOAT4X4A(float m00, float m01, float m02, float m03,
				float m10, float m11, float m12, float m13,
				float m20, float m21, float m22, float m23,
				float m30, float m31, float m32, float m33)
			{
				_11 = m00;
				_12 = m01;
				_13 = m02;
				_14 = m03;
				_21 = m10;
				_22 = m11;
				_23 = m12;
				_24 = m23;
				_31 = m20;
				_32 = m21;
				_33 = m22;
				_34 = m23;
				_41 = m30;
				_42 = m31;
				_43 = m32;
				_44 = m33;
			}

			explicit XMFLOAT4X4A(array<float>^ pArray)
			{
				_11 = pArray[0];
				_12 = pArray[1];
				_13 = pArray[2];
				_14 = pArray[3];
				_21 = pArray[4];
				_22 = pArray[5];
				_23 = pArray[6];
				_24 = pArray[7];
				_31 = pArray[8];
				_32 = pArray[9];
				_33 = pArray[10];
				_34 = pArray[11];
				_41 = pArray[12];
				_42 = pArray[13];
				_43 = pArray[14];
				_44 = pArray[15];
			}

			float& operator() (int Row, int Column)
			{
				assert(Row < 4);
				assert(Column < 4);
				pin_ptr<float> p = &_11;
				return p[Row * 3 + Column];
			}

			property float default[int, int]
			{
				float get(int Row, int Column)
				{
					assert(Row < 4);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					return p[Row * 3 + Column];
				}
				void set(int Row, int Column, float value)
				{
					assert(Row < 4);
					assert(Column < 4);
					pin_ptr<float> p = &_11;
					p[Row * 3 + Column] = value;
				}
			}
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMFLOAT2
		{
			float x;
			float y;

			XMFLOAT2(float _x, float _y) { x = _x; y = _y; }
			XMFLOAT2(array<float>^ pArray) { x = pArray[0]; y = pArray[1]; }
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMFLOAT3
		{
			float x;
			float y;
			float z;

			XMFLOAT3(float _x, float _y, float _z) { x = _x; y = _y; z = _z; }
			XMFLOAT3(array<float>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; }
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMFLOAT4
		{
			float x;
			float y;
			float z;
			float w;

			XMFLOAT4(float _x, float _y, float _z, float _w) { x = _x; y = _y; z = _z; w = _w; }
			XMFLOAT4(array<float>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; w = pArray[3]; }
		};

		[StructLayout(LayoutKind::Sequential, Pack = 16)]
		public value struct XMFLOAT2A
		{
			float x;
			float y;

			XMFLOAT2A(float _x, float _y) { x = _x; y = _y; }
			XMFLOAT2A(array<float>^ pArray) { x = pArray[0]; y = pArray[1]; }
		};

		[StructLayout(LayoutKind::Sequential, Pack = 16)]
		public value struct XMFLOAT3A
		{
			float x;
			float y;
			float z;

			XMFLOAT3A(float _x, float _y, float _z) { x = _x; y = _y; z = _z; }
			XMFLOAT3A(array<float>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; }
		};

		[StructLayout(LayoutKind::Sequential, Pack = 16)]
		public value struct XMFLOAT4A
		{
			float x;
			float y;
			float z;
			float w;

			XMFLOAT4A(float _x, float _y, float _z, float _w) { x = _x; y = _y; z = _z; w = _w; }
			XMFLOAT4A(array<float>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; w = pArray[3]; }
		};
	}
}
