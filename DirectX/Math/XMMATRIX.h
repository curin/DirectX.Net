#pragma once

#include <DirectXMath.h>
#include "XMVECTOR.h"
#include "UDXMathMethods.h"

using namespace System::Numerics;

namespace DirectX
{
	namespace Math
	{
		public ref class XMMATRIX
		{
		public:
			DirectX::XMMATRIX* _mat;

			XMMATRIX(DirectX::XMMATRIX* mat)
			{
                _mat = mat;
			}

            XMMATRIX()
            {
                _mat = new DirectX::XMMATRIX();
            }

            XMMATRIX(float m00, float m01, float m02, float m03,
                float m10, float m11, float m12, float m13, 
                float m20, float m21, float m22, float m23, 
                float m30, float m31, float m32, float m33)
            {
                _mat = DirectX::Math::XMMatrixSet(m00, m01, m02, m03, m10, m11, m12, m13,
                    m20, m21, m22, m23, m30, m31, m32, m33);
            }

			~XMMATRIX()
			{
				delete _mat;
			}

			property DirectX::Math::XMVECTOR^ R0 
			{
				DirectX::Math::XMVECTOR^ get() { return gcnew XMVECTOR(&_mat->r[0]); }
			}

			property DirectX::Math::XMVECTOR^ R1
			{
				DirectX::Math::XMVECTOR^ get() { return gcnew XMVECTOR(&_mat->r[1]); }
			}

			property DirectX::Math::XMVECTOR^ R2
			{
				DirectX::Math::XMVECTOR^ get() { return gcnew XMVECTOR(&_mat->r[2]); }
			}

			property DirectX::Math::XMVECTOR^ R3
			{
				DirectX::Math::XMVECTOR^ get() { return gcnew XMVECTOR(&_mat->r[3]); }
			}

			property float M11 { float get() { return _mat->r[0].m128_f32[0]; }}
			property float M12 { float get() { return _mat->r[0].m128_f32[1]; }}
			property float M13 { float get() { return _mat->r[0].m128_f32[2]; }}
			property float M14 { float get() { return _mat->r[0].m128_f32[3]; }}

			property float M21 { float get() { return _mat->r[1].m128_f32[0]; }}
			property float M22 { float get() { return _mat->r[1].m128_f32[1]; }}
			property float M23 { float get() { return _mat->r[1].m128_f32[2]; }}
			property float M24 { float get() { return _mat->r[1].m128_f32[3]; }}

			property float M31 { float get() { return _mat->r[2].m128_f32[0]; }}
			property float M32 { float get() { return _mat->r[2].m128_f32[1]; }}
			property float M33 { float get() { return _mat->r[2].m128_f32[2]; }}
			property float M34 { float get() { return _mat->r[2].m128_f32[3]; }}

			property float M41 { float get() { return _mat->r[3].m128_f32[0]; }}
			property float M42 { float get() { return _mat->r[3].m128_f32[1]; }}
			property float M43 { float get() { return _mat->r[3].m128_f32[2]; }}
			property float M44 { float get() { return _mat->r[3].m128_f32[3]; }}

			Matrix4x4 ToMatrix()
			{
				return Matrix4x4(M11, M12, M13, M14, M21, M22, M23, M24, M31, M32, M33, M34, M41, M42, M43, M44);
			}

            static XMMATRIX^ FromMatrix(Matrix4x4 mat)
            {
                XMFLOAT4X4^ val = gcnew XMFLOAT4X4(mat.M11, mat.M12, mat.M13, mat.M14, mat.M21, mat.M22, mat.M23, mat.M24,
                    mat.M31, mat.M32, mat.M33, mat.M34, mat.M41, mat.M42, mat.M43, mat.M44);
                DirectX::XMMATRIX* out = DirectX::Math::XMLoadFloat4x4(val->_val);
                return gcnew XMMATRIX(out);
            }
		};
	}
}
