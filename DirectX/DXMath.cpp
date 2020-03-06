#include "pch.h"
#include "DXMath.h"
#include "Math/UDXMathMethods.h"

using Matrix = DirectX::Math::XMMATRIX;

inline constexpr float DirectX::DirectXMath::XMConvertToRadians(float fDegrees)
{
    return DirectX::XMConvertToRadians(fDegrees);
}

inline constexpr float DirectX::DirectXMath::XMConvertToDegrees(float fRadians)
{
    return DirectX::XMConvertToDegrees(fRadians);
}

inline bool DirectX::DirectXMath::XMComparisonAllTrue(unsigned int CR)
{
    return DirectX::XMComparisonAllTrue(CR);
}

inline bool DirectX::DirectXMath::XMComparisonAnyTrue(unsigned int CR)
{
    return DirectX::XMComparisonAnyTrue(CR);
}

inline bool DirectX::DirectXMath::XMComparisonAllFalse(unsigned int CR)
{
    return DirectX::XMComparisonAllFalse(CR);
}

inline bool DirectX::DirectXMath::XMComparisonAnyFalse(unsigned int CR)
{
    return DirectX::XMComparisonAnyFalse(CR);
}

inline bool DirectX::DirectXMath::XMComparisonMixed(unsigned int CR)
{
    return DirectX::XMComparisonMixed(CR);
}

inline bool DirectX::DirectXMath::XMComparisonAllInBounds(unsigned int CR)
{
    return DirectX::XMComparisonAllInBounds(CR);
}

inline bool DirectX::DirectXMath::XMComparisonAnyOutOfBounds(unsigned int CR)
{
    return DirectX::XMComparisonAnyOutOfBounds(CR);
}

DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorIntToFloat(DirectX::Math::XMVECTOR^ VInt, unsigned int DivExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMConvertVectorIntToFloat(VInt->_vect, DivExponent));
}

DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorFloatToInt(DirectX::Math::XMVECTOR^ VFloat, unsigned int MulExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMConvertVectorFloatToInt(VFloat->_vect, MulExponent));
}

DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorUIntToFloat(DirectX::Math::XMVECTOR^ VUInt, unsigned int DivExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMConvertVectorUIntToFloat(VUInt->_vect, DivExponent));
}

DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorFloatToUInt(DirectX::Math::XMVECTOR^ VFloat, unsigned int MulExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMConvertVectorFloatToUInt(VFloat->_vect, MulExponent));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetBinaryConstant(unsigned int C0, unsigned int C1, unsigned int C2, unsigned int C3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetBinaryConstant(C0, C1, C2, C3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatConstant(int IntConstant, unsigned int DivExponent)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatConstant(IntConstant, DivExponent));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatConstantInt(int IntConstant)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatConstantInt(IntConstant));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadInt(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat(array<float>^ pSource)
{
    cli::pin_ptr<float> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadFloat(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt2(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadInt2(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt2A(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadInt2A(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat2(Vector2 pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadFloat2(pSource.X, pSource.Y));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat2A(Vector2 pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadFloat2A(pSource.X, pSource.Y));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadSInt2(const DirectX::Math::XMINT2^ pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadSInt2(pSource->_val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadUInt2(const DirectX::Math::XMUINT2^ pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadUInt2(pSource->_val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt3(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadInt3(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt3A(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadInt3A(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat3(Vector3 pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadFloat3(pSource.X, pSource.Y, pSource.Z));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat3A(Vector3 pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadFloat3A(pSource.X, pSource.Y, pSource.Z));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadSInt3(const DirectX::Math::XMINT3^ pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadSInt3(pSource->_val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadUInt3(const DirectX::Math::XMUINT3^ pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadUInt3(pSource->_val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt4(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadInt4(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt4A(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadInt4A(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat4(Vector4 pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadFloat4(pSource.X, pSource.Y, pSource.Z, pSource.W));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat4A(Vector4 pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadFloat4A(pSource.X, pSource.Y, pSource.Z, pSource.W));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadSInt4(const DirectX::Math::XMINT4^ pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadSInt4(pSource->_val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadUInt4(const DirectX::Math::XMUINT4^ pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMLoadUInt4(pSource->_val));
}

inline Matrix4x4^ DirectX::DirectXMath::XMLoadFloat3x3(DirectX::Math::XMFLOAT3X3^ pSource)
{
	Matrix^ mat;
	mat = gcnew Matrix(DirectX::Math::XMLoadFloat3x3(pSource->_val));
    return mat->ToMatrix();
}

inline Matrix4x4^ DirectX::DirectXMath::XMLoadFloat4x3(DirectX::Math::XMFLOAT4X3^ pSource)
{
	Matrix^ mat;
	mat = gcnew Matrix(DirectX::Math::XMLoadFloat4x3(pSource->_val));
	return mat->ToMatrix();
}

inline Matrix4x4^ DirectX::DirectXMath::XMLoadFloat4x3A(DirectX::Math::XMFLOAT4X3A^ pSource)
{
	Matrix^ mat;
	mat = gcnew Matrix(DirectX::Math::XMLoadFloat4x3A(pSource->_val));
	return mat->ToMatrix();
}

inline Matrix4x4^ DirectX::DirectXMath::XMLoadFloat3x4(DirectX::Math::XMFLOAT3X4^ pSource)
{
	Matrix^ mat;
	mat = gcnew Matrix(DirectX::Math::XMLoadFloat3x4(pSource->_val));
	return mat->ToMatrix();
}

inline Matrix4x4^ DirectX::DirectXMath::XMLoadFloat3x4A(DirectX::Math::XMFLOAT3X4A^ pSource)
{
	Matrix^ mat;
	mat = gcnew Matrix(DirectX::Math::XMLoadFloat3x4A(pSource->_val));
	return mat->ToMatrix();
}

inline Matrix4x4^ DirectX::DirectXMath::XMLoadFloat4x4(DirectX::Math::XMFLOAT4X4^ pSource)
{
	Matrix^ mat;
	mat = gcnew Matrix(DirectX::Math::XMLoadFloat4x4(pSource->_val));
	return mat->ToMatrix();
}

inline Matrix4x4^ DirectX::DirectXMath::XMLoadFloat4x4A(DirectX::Math::XMFLOAT4X4A^ pSource)
{
	Matrix^ mat;
	mat = gcnew Matrix(DirectX::Math::XMLoadFloat4x4A(pSource->_val));
	return mat->ToMatrix();
}
inline void DirectX::DirectXMath::XMStoreInt(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::Math::XMStoreInt(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreFloat(array<float>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<float> arr = &pDestination[0];
    DirectX::Math::XMStoreFloat(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreInt2(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::Math::XMStoreInt2(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreInt2A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::Math::XMStoreInt2A(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreFloat2(Vector2^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::XMFLOAT2* out = new DirectX::XMFLOAT2();
    DirectX::Math::XMStoreFloat2(out, V->_vect);
    pDestination->X = out->x;
    pDestination->Y = out->y;
    delete out;
}
inline void DirectX::DirectXMath::XMStoreFloat2A(Vector2^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::XMFLOAT2A* out = new DirectX::XMFLOAT2A();
    DirectX::Math::XMStoreFloat2A(out, V->_vect);
    pDestination->X = out->x;
    pDestination->Y = out->y;
    delete out;
}
inline void DirectX::DirectXMath::XMStoreSInt2(DirectX::Math::XMINT2^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMStoreSInt2(pDestination->_val, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreUInt2(DirectX::Math::XMUINT2^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMStoreUInt2(pDestination->_val, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreInt3(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::Math::XMStoreInt3(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreInt3A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::Math::XMStoreInt3A(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreFloat3(Vector3^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::XMFLOAT3* out = new DirectX::XMFLOAT3();
    DirectX::Math::XMStoreFloat3(out, V->_vect);
    pDestination->X = out->x;
    pDestination->Y = out->y;
    pDestination->Z = out->z;
    delete out;
}
inline void DirectX::DirectXMath::XMStoreFloat3A(Vector3^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::XMFLOAT3A* out = new DirectX::XMFLOAT3A();
    DirectX::Math::XMStoreFloat3A(out, V->_vect);
    pDestination->X = out->x;
    pDestination->Y = out->y;
    pDestination->Z = out->z;
    delete out;
}
inline void DirectX::DirectXMath::XMStoreSInt3(DirectX::Math::XMINT3^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMStoreSInt3(pDestination->_val, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreUInt3(DirectX::Math::XMUINT3^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMStoreUInt3(pDestination->_val, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreInt4(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::Math::XMStoreInt4(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreInt4A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::Math::XMStoreInt4A(arr, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreFloat4(Vector4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::XMFLOAT4* out = new DirectX::XMFLOAT4();
    DirectX::Math::XMStoreFloat4(out, V->_vect);
    pDestination->X = out->x;
    pDestination->Y = out->y;
    pDestination->Z = out->z;
    pDestination->W = out->w;
    delete out;
}
inline void DirectX::DirectXMath::XMStoreFloat4A(Vector4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::XMFLOAT4A* out = new DirectX::XMFLOAT4A();
    DirectX::Math::XMStoreFloat4A(out, V->_vect);
    pDestination->X = out->x;
    pDestination->Y = out->y;
    pDestination->Z = out->z;
    pDestination->W = out->w;
    delete out;
}
inline void DirectX::DirectXMath::XMStoreSInt4(DirectX::Math::XMINT4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMStoreSInt4(pDestination->_val, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreUInt4(DirectX::Math::XMUINT4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMStoreUInt4(pDestination->_val, V->_vect);
}
inline void DirectX::DirectXMath::XMStoreFloat3x3(DirectX::Math::XMFLOAT3X3^ pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::Math::XMStoreFloat3x3(pDestination->_val, M->_mat);
}
inline void DirectX::DirectXMath::XMStoreFloat4x3(DirectX::Math::XMFLOAT4X3^ pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::Math::XMStoreFloat4x3(pDestination->_val, M->_mat);
}
inline void DirectX::DirectXMath::XMStoreFloat4x3A(DirectX::Math::XMFLOAT4X3A^ pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::Math::XMStoreFloat4x3A(pDestination->_val, M->_mat);
}
inline void DirectX::DirectXMath::XMStoreFloat3x4(DirectX::Math::XMFLOAT3X4^ pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::Math::XMStoreFloat3x4(pDestination->_val, M->_mat);
}
inline void DirectX::DirectXMath::XMStoreFloat3x4A(DirectX::Math::XMFLOAT3X4A^ pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::Math::XMStoreFloat3x4A(pDestination->_val, M->_mat);
}
inline void DirectX::DirectXMath::XMStoreFloat4x4(DirectX::Math::XMFLOAT4X4^ pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::Math::XMStoreFloat4x4(pDestination->_val, M->_mat);
}
inline void DirectX::DirectXMath::XMStoreFloat4x4A(DirectX::Math::XMFLOAT4X4A^ pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::Math::XMStoreFloat4x4A(pDestination->_val, M->_mat);
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorZero()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorZero());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSet(float x, float y, float z, float w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSet(x, y, z, w));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetInt(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetInt(x, y, z, w));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicate(float Value)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReplicate(Value));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicatePtr(float% pValue)
{
	pin_ptr<float> val = &pValue;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReplicatePtr(val));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicateInt(unsigned int Value)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReplicateInt(Value));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicateIntPtr(unsigned int% pValue)
{
	pin_ptr<unsigned int> val = &pValue;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReplicateIntPtr(val));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTrueInt()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorTrueInt());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorFalseInt()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorFalseInt());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatX(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatX(V->_vect));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatY(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatY(V->_vect));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatZ(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatZ(V->_vect));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatW(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatW(V->_vect));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatOne()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatOne());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatInfinity()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatInfinity());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatQNaN()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatQNaN());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatEpsilon()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatEpsilon());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatSignMask()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSplatSignMask());
}
inline float DirectX::DirectXMath::XMVectorGetByIndex(DirectX::Math::XMVECTOR^ V, unsigned int i)
{
    return DirectX::Math::XMVectorGetByIndex(V->_vect, i);
}
inline float DirectX::DirectXMath::XMVectorGetX(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetX(V->_vect);
}
inline float DirectX::DirectXMath::XMVectorGetY(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetY(V->_vect);
}
inline float DirectX::DirectXMath::XMVectorGetZ(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetZ(V->_vect);
}
inline float DirectX::DirectXMath::XMVectorGetW(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetW(V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetByIndexPtr(float% f, DirectX::Math::XMVECTOR^ V, unsigned int i)
{
	pin_ptr<float> val = &f;
    return DirectX::Math::XMVectorGetByIndexPtr(val, V->_vect, i);
}
inline void DirectX::DirectXMath::XMVectorGetXPtr(float% x, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &x;
    return DirectX::Math::XMVectorGetXPtr(val, V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetYPtr(float% y, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &y;
    return DirectX::Math::XMVectorGetYPtr(val, V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetZPtr(float% z, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &z;
    return DirectX::Math::XMVectorGetZPtr(val, V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetWPtr(float% w, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &w;
    return DirectX::Math::XMVectorGetWPtr(val, V->_vect);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntByIndex(DirectX::Math::XMVECTOR^ V, unsigned int i)
{
    return DirectX::Math::XMVectorGetIntByIndex(V->_vect, i);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntX(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetIntX(V->_vect);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntY(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetIntY(V->_vect);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntZ(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetIntZ(V->_vect);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntW(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVectorGetIntW(V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetIntByIndexPtr(unsigned int% f, DirectX::Math::XMVECTOR^ V, unsigned int i)
{
	pin_ptr<unsigned int> val = &f;
    return DirectX::Math::XMVectorGetIntByIndexPtr(val, V->_vect, i);
}
inline void DirectX::DirectXMath::XMVectorGetIntXPtr(unsigned int% x, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &x;
    return DirectX::Math::XMVectorGetIntXPtr(val, V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetIntYPtr(unsigned int% y, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &y;
    return DirectX::Math::XMVectorGetIntYPtr(val, V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetIntZPtr(unsigned int% z, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &z;
    return DirectX::Math::XMVectorGetIntZPtr(val, V->_vect);
}
inline void DirectX::DirectXMath::XMVectorGetIntWPtr(unsigned int% w, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &w;
    return DirectX::Math::XMVectorGetIntWPtr(val, V->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetByIndex(DirectX::Math::XMVECTOR^ V, float f, unsigned int i)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetByIndex(V->_vect, f, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetX(DirectX::Math::XMVECTOR^ V, float x)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetX(V->_vect, x));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetY(DirectX::Math::XMVECTOR^ V, float y)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetY(V->_vect, y));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetZ(DirectX::Math::XMVECTOR^ V, float z)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetZ(V->_vect, z));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetW(DirectX::Math::XMVECTOR^ V, float w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetW(V->_vect, w));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetByIndexPtr(DirectX::Math::XMVECTOR^ V, float% f, unsigned int i)
{
	pin_ptr<float> val = &f;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetByIndexPtr(V->_vect, val, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetXPtr(DirectX::Math::XMVECTOR^ V, float% x)
{
	pin_ptr<float> val = &x;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetXPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetYPtr(DirectX::Math::XMVECTOR^ V, float% y)
{
	pin_ptr<float> val = &y;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetYPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetZPtr(DirectX::Math::XMVECTOR^ V, float% z)
{
	pin_ptr<float> val = &z;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetZPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetWPtr(DirectX::Math::XMVECTOR^ V, float% w)
{
	pin_ptr<float> val = &w;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetWPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntByIndex(DirectX::Math::XMVECTOR^ V, unsigned int f, unsigned int i)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntByIndex(V->_vect, f, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntX(DirectX::Math::XMVECTOR^ V, unsigned int x)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntX(V->_vect, x));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntY(DirectX::Math::XMVECTOR^ V, unsigned int y)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntY(V->_vect, y));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntZ(DirectX::Math::XMVECTOR^ V, unsigned int z)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntZ(V->_vect, z));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntW(DirectX::Math::XMVECTOR^ V, unsigned int w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntW(V->_vect, w));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntByIndexPtr(DirectX::Math::XMVECTOR^ V, unsigned int% f, unsigned int i)
{
	pin_ptr<unsigned int> val = &f;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntByIndexPtr(V->_vect, val, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntXPtr(DirectX::Math::XMVECTOR^ V, unsigned int% x)
{
	pin_ptr<unsigned int> val = &x;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntXPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntYPtr(DirectX::Math::XMVECTOR^ V, unsigned int% y)
{
	pin_ptr<unsigned int> val = &y;
	return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntYPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntZPtr(DirectX::Math::XMVECTOR^ V, unsigned int% z)
{
	pin_ptr<unsigned int> val = &z;
	return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntZPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntWPtr(DirectX::Math::XMVECTOR^ V, unsigned int% w)
{
	pin_ptr<unsigned int> val = &w;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSetIntWPtr(V->_vect, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSwizzle(DirectX::Math::XMVECTOR^ V, unsigned int E0, unsigned int E1, unsigned int E2, unsigned int E3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSwizzle(V->_vect, E0, E1, E2, E3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorPermute(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, unsigned int PermuteX, unsigned int PermuteY, unsigned int PermuteZ, unsigned int PermuteW)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorPermute(V1->_vect, V2->_vect, PermuteX, PermuteY, PermuteZ, PermuteW));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSelectControl(unsigned int VectorIndex0, unsigned int VectorIndex1, unsigned int VectorIndex2, unsigned int VectorIndex3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSelectControl(VectorIndex0, VectorIndex1, VectorIndex2, VectorIndex3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSelect(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Control)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSelect(V1->_vect, V2->_vect, Control->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMergeXY(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorMergeXY(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMergeZW(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorMergeZW(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorShiftLeft(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, unsigned int Elements)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorShiftLeft(V1->_vect, V2->_vect, Elements));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorRotateLeft(DirectX::Math::XMVECTOR^ V, unsigned int Elements)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorRotateLeft(V->_vect, Elements));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorRotateRight(DirectX::Math::XMVECTOR^ V, unsigned int Elements)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorRotateRight(V->_vect, Elements));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorInsert(DirectX::Math::XMVECTOR^ VD, DirectX::Math::XMVECTOR^ VS, unsigned int VSLeftRotateElements, unsigned int Select0, unsigned int Select1, unsigned int Select2, unsigned int Select3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorInsert(VD->_vect, VS->_vect, VSLeftRotateElements, Select0, Select1, Select2, Select3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorEqual(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqualR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorEqualR(val, V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorEqualInt(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqualIntR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorEqualIntR(val, V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorNearEqual(V1->_vect, V2->_vect, Epsilon->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorNotEqual(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorNotEqualInt(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorGreater(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreaterR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorGreaterR(val, V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorGreaterOrEqual(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreaterOrEqualR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorGreaterOrEqualR(val, V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLess(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorLess(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorLessOrEqual(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorInBounds(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorInBounds(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorInBoundsR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorInBoundsR(val, V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorIsNaN(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorIsNaN(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorIsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorIsInfinite(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMin(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorMin(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMax(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorMax(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorRound(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorRound(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTruncate(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorTruncate(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorFloor(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorFloor(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCeiling(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorCeiling(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorClamp(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Min, DirectX::Math::XMVECTOR^ Max)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorClamp(V->_vect, Min->_vect, Max->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSaturate(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSaturate(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAndInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorAndInt(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAndCInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorAndCInt(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorOrInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorOrInt(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNorInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorNorInt(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorXorInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorXorInt(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNegate(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorNegate(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAdd(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorAdd(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSum(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSum(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAddAngles(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorAddAngles(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSubtract(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSubtract(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSubtractAngles(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSubtractAngles(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMultiply(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorMultiply(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMultiplyAdd(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorMultiplyAdd(V1->_vect, V2->_vect, V3->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorDivide(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorDivide(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNegativeMultiplySubtract(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorNegativeMultiplySubtract(V1->_vect, V2->_vect, V3->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorScale(DirectX::Math::XMVECTOR^ V, float ScaleFactor)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorScale(V->_vect, ScaleFactor));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocalEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReciprocalEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReciprocal(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSqrtEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSqrtEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSqrt(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSqrt(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocalSqrtEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReciprocalSqrtEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocalSqrt(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorReciprocalSqrt(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorExp2(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorExp2(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorExpE(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorExpE(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorExp(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorExp(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLog2(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorLog2(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLogE(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorLogE(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLog(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorLog(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorPow(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorPow(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAbs(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorAbs(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMod(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorMod(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorModAngles(DirectX::Math::XMVECTOR^ Angles)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorModAngles(Angles->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSin(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSin(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSinEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSinEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCos(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorCos(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCosEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorCosEst(V->_vect));
}

inline void DirectX::DirectXMath::XMVectorSinCos(DirectX::Math::XMVECTOR^ pSin, DirectX::Math::XMVECTOR^ pCos, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMVectorSinCos(pSin->_vect, pCos->_vect, V->_vect);
}

inline void DirectX::DirectXMath::XMVectorSinCosEst(DirectX::Math::XMVECTOR^ pSin, DirectX::Math::XMVECTOR^ pCos, DirectX::Math::XMVECTOR^ V)
{
    DirectX::Math::XMVectorSinCosEst(pSin->_vect, pCos->_vect, V->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTan(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorTan(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTanEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorTanEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSinH(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorSinH(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCosH(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorCosH(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTanH(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorTanH(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorASin(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorASin(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorASinEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorASinEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorACos(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorACos(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorACosEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorACosEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATan(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorATan(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATanEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorATanEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATan2(DirectX::Math::XMVECTOR^ Y, DirectX::Math::XMVECTOR^ X)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorATan2(Y->_vect, X->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATan2Est(DirectX::Math::XMVECTOR^ Y, DirectX::Math::XMVECTOR^ X)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorATan2Est(Y->_vect, X->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLerp(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorLerp(V0->_vect, V1->_vect, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLerpV(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorLerpV(V0->_vect, V1->_vect, T->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorHermite(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Tangent0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Tangent1, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorHermite(Position0->_vect, Tangent0->_vect, Position1->_vect, Tangent1->_vect, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorHermiteV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Tangent0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Tangent1, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorHermiteV(Position0->_vect, Tangent0->_vect, Position1->_vect, Tangent1->_vect, T->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCatmullRom(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ Position3, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorCatmullRom(Position0->_vect, Position1->_vect, Position2->_vect, Position3->_vect, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCatmullRomV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ Position3, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorCatmullRomV(Position0->_vect, Position1->_vect, Position2->_vect, Position3->_vect, T->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorBaryCentric(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, float f, float g)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorBaryCentric(Position0->_vect, Position1->_vect, Position2->_vect, f,g));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorBaryCentricV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ F, DirectX::Math::XMVECTOR^ G)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVectorBaryCentricV(Position0->_vect, Position1->_vect, Position2->_vect, F->_vect, G->_vect));
}

inline bool DirectX::DirectXMath::XMVector2Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2Equal(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector2EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2EqualR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2EqualInt(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector2EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2EqualIntR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::Math::XMVector2NearEqual(V1->_vect, V2->_vect, Epsilon->_vect);
}

inline bool DirectX::DirectXMath::XMVector2NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2NotEqual(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2NotEqualInt(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2Greater(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector2GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2GreaterR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2GreaterOrEqual(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector2GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2GreaterOrEqualR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2Less(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector2LessOrEqual(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector2InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds)
{
    return DirectX::Math::XMVector2InBounds(V->_vect, Bounds->_vect);
}

inline bool DirectX::DirectXMath::XMVector2IsNaN(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVector2IsNaN(V->_vect);
}

inline bool DirectX::DirectXMath::XMVector2IsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVector2IsInfinite(V->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Dot(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Cross(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2LengthSq(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2LengthSq(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2ReciprocalLengthEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ReciprocalLength(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2ReciprocalLength(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2LengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2LengthEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Length(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Length(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2NormalizeEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2NormalizeEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Normalize(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Normalize(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2ClampLength(V->_vect, LengthMin, LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2ClampLengthV(V->_vect, LengthMin->_vect, LengthMax->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Reflect(Incident->_vect, Normal->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Refract(Incident->_vect, Normal->_vect, RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2RefractV(Incident->_vect, Normal->_vect, RefractionIndex->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Orthogonal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Orthogonal(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2AngleBetweenNormalsEst(N1->_vect, N2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2AngleBetweenNormals(N1->_vect, N2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2AngleBetweenVectors(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2LinePointDistance(DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2, DirectX::Math::XMVECTOR^ Point)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2LinePointDistance(LinePoint1->_vect, LinePoint2->_vect, Point->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2IntersectLine(DirectX::Math::XMVECTOR^ Line1Point1, DirectX::Math::XMVECTOR^ Line1Point2, DirectX::Math::XMVECTOR^ Line2Point1, DirectX::Math::XMVECTOR^ Line2Point2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2IntersectLine(Line1Point1->_vect, Line1Point2->_vect, Line2Point1->_vect, Line2Point2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2Transform(V->_vect, M->_mat));
}

inline array<Vector4>^ DirectX::DirectXMath::XMVector2TransformStream(array<Vector4>^ pOutputStream, unsigned int OutputStride, array<Vector2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    XMFLOAT4* out = new XMFLOAT4[VectorCount];
    XMFLOAT2* in = new XMFLOAT2[VectorCount];
	pOutputStream = gcnew array<Vector4>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT2(pInputStream[i].X, pInputStream[i].Y);

    DirectX::Math::XMVector2TransformStream(out, OutputStride, in, InputStride, VectorCount, M->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector4(out->x, out->y, out->z, out->w);

	delete out;
	delete in;

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2TransformCoord(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2TransformCoord(V->_vect, M->_mat));
}

inline array<Vector2>^ DirectX::DirectXMath::XMVector2TransformCoordStream(array<Vector2>^ pOutputStream, unsigned int OutputStride, array<Vector2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    XMFLOAT2* out = new XMFLOAT2[VectorCount];
    XMFLOAT2* in = new XMFLOAT2[VectorCount];
	pOutputStream = gcnew array<Vector2>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT2(pInputStream[i].X, pInputStream[i].Y);

    DirectX::Math::XMVector2TransformCoordStream(out, OutputStride, in, InputStride, VectorCount, M->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector2(out->x, out->y);

	delete out;
	delete in;

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2TransformNormal(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector2TransformNormal(V->_vect, M->_mat));
}

inline array<Vector2>^ DirectX::DirectXMath::XMVector2TransformNormalStream(array<Vector2>^ pOutputStream, unsigned int OutputStride, array<Vector2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    XMFLOAT2* out = new XMFLOAT2[VectorCount];
    XMFLOAT2* in = new XMFLOAT2[VectorCount];
	pOutputStream = gcnew array<Vector2>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT2(pInputStream[i].X, pInputStream[i].Y);

    DirectX::Math::XMVector2TransformNormalStream(out, OutputStride, in, InputStride, VectorCount, M->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector2(out->x, out->y);

	delete out;
	delete in;

    return pOutputStream;
}

inline bool DirectX::DirectXMath::XMVector3Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3Equal(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector3EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3EqualR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3EqualInt(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector3EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3EqualIntR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::Math::XMVector3NearEqual(V1->_vect, V2->_vect, Epsilon->_vect);
}

inline bool DirectX::DirectXMath::XMVector3NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3NotEqual(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3NotEqualInt(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3Greater(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector3GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3GreaterR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3GreaterOrEqual(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector3GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3GreaterOrEqualR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3Less(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector3LessOrEqual(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector3InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds)
{
    return DirectX::Math::XMVector3InBounds(V->_vect, Bounds->_vect);
}

inline bool DirectX::DirectXMath::XMVector3IsNaN(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVector3IsNaN(V->_vect);
}

inline bool DirectX::DirectXMath::XMVector3IsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVector3IsInfinite(V->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Dot(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Cross(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3LengthSq(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3LengthSq(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3ReciprocalLengthEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ReciprocalLength(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3ReciprocalLength(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3LengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3LengthEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Length(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Length(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3NormalizeEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3NormalizeEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Normalize(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Normalize(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3ClampLength(V->_vect, LengthMin, LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3ClampLengthV(V->_vect, LengthMin->_vect, LengthMax->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Reflect(Incident->_vect, Normal->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Refract(Incident->_vect, Normal->_vect, RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3RefractV(Incident->_vect, Normal->_vect, RefractionIndex->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Orthogonal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Orthogonal(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3AngleBetweenNormalsEst(N1->_vect, N2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3AngleBetweenNormals(N1->_vect, N2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3AngleBetweenVectors(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3LinePointDistance(DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2, DirectX::Math::XMVECTOR^ Point)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3LinePointDistance(LinePoint1->_vect, LinePoint2->_vect, Point->_vect));
}

inline void DirectX::DirectXMath::XMVector3ComponentsFromNormal(DirectX::Math::XMVECTOR^ pParallel, DirectX::Math::XMVECTOR^ pPerpendicular, DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Normal)
{
    DirectX::Math::XMVector3ComponentsFromNormal(pParallel->_vect, pPerpendicular->_vect, V->_vect, Normal->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Rotate(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ RotationQuaternion)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Rotate(V->_vect, RotationQuaternion->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3InverseRotate(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ RotationQuaternion)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3InverseRotate(V->_vect, RotationQuaternion->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Transform(V->_vect, M->_mat));
}

inline array<Vector4>^ DirectX::DirectXMath::XMVector3TransformStream(array<Vector4>^ pOutputStream, unsigned int OutputStride, array<Vector3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    XMFLOAT4* out = new XMFLOAT4[VectorCount];
    XMFLOAT3* in = new XMFLOAT3[VectorCount];
	pOutputStream = gcnew array<Vector4>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT3(pInputStream[i].X, pInputStream[i].Y, pInputStream[i].Z);

    DirectX::Math::XMVector3TransformStream(out, OutputStride, in, InputStride, VectorCount, M->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector4(out->x, out->y, out->z, out->w);
	
	delete out;
	delete in;

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3TransformCoord(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3TransformCoord(V->_vect, M->_mat));
}

inline array<Vector3>^ DirectX::DirectXMath::XMVector3TransformCoordStream(array<Vector3>^ pOutputStream, unsigned int OutputStride, array<Vector3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    XMFLOAT3* out = new XMFLOAT3[VectorCount];
    XMFLOAT3* in = new XMFLOAT3[VectorCount];
	pOutputStream = gcnew array<Vector3>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT3(pInputStream[i].X, pInputStream[i].Y, pInputStream[i].Z);

    DirectX::Math::XMVector3TransformCoordStream(out, OutputStride, in, InputStride, VectorCount, M->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector3(out->x, out->y, out->z);

	delete out;
	delete in;

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3TransformNormal(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3TransformNormal(V->_vect, M->_mat));
}

inline array<Vector3>^ DirectX::DirectXMath::XMVector3TransformNormalStream(array<Vector3>^ pOutputStream, unsigned int OutputStride, array<Vector3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    XMFLOAT3* out = new XMFLOAT3[VectorCount];
    XMFLOAT3* in = new XMFLOAT3[VectorCount];
	pOutputStream = gcnew array<Vector3>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT3(pInputStream[i].X, pInputStream[i].Y, pInputStream[i].Z);

    DirectX::Math::XMVector3TransformNormalStream(out, OutputStride, in, InputStride, VectorCount, M->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector3(out->x, out->y, out->z);

	delete out;
	delete in;

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Project(DirectX::Math::XMVECTOR^ V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Project(V->_vect, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, Projection->_mat, View->_mat, World->_mat));
}

inline array<Vector3>^ DirectX::DirectXMath::XMVector3ProjectStream(array<Vector3>^ pOutputStream, unsigned int OutputStride, array<Vector3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    XMFLOAT3* out = new XMFLOAT3[VectorCount];
    XMFLOAT3* in = new XMFLOAT3[VectorCount];
	pOutputStream = gcnew array<Vector3>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT3(pInputStream[i].X, pInputStream[i].Y, pInputStream[i].Z);

    DirectX::Math::XMVector3ProjectStream(out, OutputStride, in, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, Projection->_mat, View->_mat, World->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector3(out->x, out->y, out->z);

	delete out;
	delete in;

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Unproject(DirectX::Math::XMVECTOR^ V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector3Unproject(V->_vect, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, Projection->_mat, View->_mat, World->_mat));
}

inline array<Vector3>^ DirectX::DirectXMath::XMVector3UnprojectStream(array<Vector3>^ pOutputStream, unsigned int OutputStride, array<Vector3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    XMFLOAT3* out = new XMFLOAT3[VectorCount];
    XMFLOAT3* in = new XMFLOAT3[VectorCount];
	pOutputStream = gcnew array<Vector3>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT3(pInputStream[i].X, pInputStream[i].Y, pInputStream[i].Z);

    DirectX::Math::XMVector3UnprojectStream(out, OutputStride, in, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, Projection->_mat, View->_mat, World->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector3(out->x, out->y, out->z);

	delete out;
	delete in;

    return pOutputStream;
}

inline bool DirectX::DirectXMath::XMVector4Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4Equal(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector4EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4EqualR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4EqualInt(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector4EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4EqualIntR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::Math::XMVector4NearEqual(V1->_vect, V2->_vect, Epsilon->_vect);
}

inline bool DirectX::DirectXMath::XMVector4NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4NotEqual(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4NotEqualInt(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4Greater(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector4GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4GreaterR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4GreaterOrEqual(V1->_vect, V2->_vect);
}

inline unsigned int DirectX::DirectXMath::XMVector4GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4GreaterOrEqualR(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4Less(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::Math::XMVector4LessOrEqual(V1->_vect, V2->_vect);
}

inline bool DirectX::DirectXMath::XMVector4InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds)
{
    return DirectX::Math::XMVector4InBounds(V->_vect, Bounds->_vect);
}

inline bool DirectX::DirectXMath::XMVector4IsNaN(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVector4IsNaN(V->_vect);
}

inline bool DirectX::DirectXMath::XMVector4IsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::Math::XMVector4IsInfinite(V->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Dot(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Cross(V1->_vect, V2->_vect, V3->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4LengthSq(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4LengthSq(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4ReciprocalLengthEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ReciprocalLength(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4ReciprocalLength(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4LengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4LengthEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Length(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Length(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4NormalizeEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4NormalizeEst(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Normalize(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Normalize(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4ClampLength(V->_vect, LengthMin, LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4ClampLengthV(V->_vect, LengthMin->_vect, LengthMax->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Reflect(Incident->_vect, Normal->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Refract(Incident->_vect, Normal->_vect, RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4RefractV(Incident->_vect, Normal->_vect, RefractionIndex->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Orthogonal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Orthogonal(V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4AngleBetweenNormalsEst(N1->_vect, N2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4AngleBetweenNormals(N1->_vect, N2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4AngleBetweenVectors(V1->_vect, V2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMVector4Transform(V->_vect, M->_mat));
}

inline array<Vector4>^ DirectX::DirectXMath::XMVector4TransformStream(array<Vector4>^ pOutputStream, unsigned int OutputStride, array<Vector4>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    XMFLOAT4* out = new XMFLOAT4[VectorCount];
    XMFLOAT4* in = new XMFLOAT4[VectorCount];
	pOutputStream = gcnew array<Vector4>(VectorCount);

    for (unsigned int i = 0; i < VectorCount; i++)
        in[i] = XMFLOAT4(pInputStream[i].X, pInputStream[i].Y, pInputStream[i].Z, pInputStream[i].W);

    DirectX::Math::XMVector4TransformStream(out, OutputStride, in, InputStride, VectorCount, M->_mat);

    for (unsigned int i = 0; i < VectorCount; i++)
        pOutputStream[i] = Vector4(out->x, out->y, out->z, out->w);

	delete out;
	delete in;

    return pOutputStream;
}

inline bool DirectX::DirectXMath::XMMatrixIsNaN(DirectX::Math::XMMATRIX^ M)
{
    return DirectX::Math::XMMatrixIsNaN(M->_mat);
}

inline bool DirectX::DirectXMath::XMMatrixIsInfinite(DirectX::Math::XMMATRIX^ M)
{
    return DirectX::Math::XMMatrixIsInfinite(M->_mat);
}

inline bool DirectX::DirectXMath::XMMatrixIsIdentity(DirectX::Math::XMMATRIX^ M)
{
    return DirectX::Math::XMMatrixIsIdentity(M->_mat);
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixMultiply(DirectX::Math::XMMATRIX^ M1, DirectX::Math::XMMATRIX^ M2)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixMultiply(M1->_mat, M2->_mat));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixMultiplyTranspose(DirectX::Math::XMMATRIX^ M1, DirectX::Math::XMMATRIX^ M2)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixMultiplyTranspose(M1->_mat, M2->_mat));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTranspose(DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixTranspose(M->_mat));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixInverse(DirectX::Math::XMVECTOR^ pDeterminant, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixInverse(pDeterminant->_vect, M->_mat));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMMatrixDeterminant(DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMMatrixDeterminant(M->_mat));
}

inline bool DirectX::DirectXMath::XMMatrixDecompose(DirectX::Math::XMVECTOR^ outScale, DirectX::Math::XMVECTOR^ outRotQuat, DirectX::Math::XMVECTOR^ outTrans, DirectX::Math::XMMATRIX^ M)
{
    return DirectX::Math::XMMatrixDecompose(outScale->_vect, outRotQuat->_vect, outTrans->_vect, M->_mat);
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixIdentity()
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixIdentity());
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixSet(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixSet(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTranslation(float OffsetX, float OffsetY, float OffsetZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixTranslation(OffsetX, OffsetY, OffsetZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTranslationFromVector(DirectX::Math::XMVECTOR^ Offset)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixTranslationFromVector(Offset->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixScaling(float ScaleX, float ScaleY, float ScaleZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixScaling(ScaleX, ScaleY, ScaleZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixScalingFromVector(DirectX::Math::XMVECTOR^ Scale)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixScalingFromVector(Scale->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationX(float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationX(Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationY(float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationY(Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationZ(float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationZ(Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationRollPitchYaw(float Pitch, float Yaw, float Roll)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationRollPitchYaw(Pitch, Yaw, Roll));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationRollPitchYawFromVector(DirectX::Math::XMVECTOR^ Angles)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationRollPitchYawFromVector(Angles->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationNormal(DirectX::Math::XMVECTOR^ NormalAxis, float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationNormal(NormalAxis->_vect, Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationAxis(DirectX::Math::XMVECTOR^ Axis, float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationAxis(Axis->_vect, Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationQuaternion(DirectX::Math::XMVECTOR^ Quaternion)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixRotationQuaternion(Quaternion->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTransformation2D(DirectX::Math::XMVECTOR^ ScalingOrigin, float ScalingOrientation, DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, float Rotation, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixTransformation2D(ScalingOrigin->_vect, ScalingOrientation, Scaling->_vect, RotationOrigin->_vect, Rotation, Translation->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTransformation(DirectX::Math::XMVECTOR^ ScalingOrigin, DirectX::Math::XMVECTOR^ ScalingOrientationQuaternion, DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, DirectX::Math::XMVECTOR^ RotationQuaternion, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixTransformation(ScalingOrigin->_vect, ScalingOrientationQuaternion->_vect, Scaling->_vect, RotationOrigin->_vect, RotationQuaternion->_vect, Translation->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixAffineTransformation2D(DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, float Rotation, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixAffineTransformation2D(Scaling->_vect, RotationOrigin->_vect, Rotation, Translation->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixAffineTransformation(DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, DirectX::Math::XMVECTOR^ RotationQuaternion, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixAffineTransformation(Scaling->_vect, RotationOrigin->_vect, RotationQuaternion->_vect, Translation->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixReflect(DirectX::Math::XMVECTOR^ ReflectionPlane)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixReflect(ReflectionPlane->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixShadow(DirectX::Math::XMVECTOR^ ShadowPlane, DirectX::Math::XMVECTOR^ LightPosition)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixShadow(ShadowPlane->_vect, LightPosition->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookAtLH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ FocusPosition, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixLookAtLH(EyePosition->_vect, FocusPosition->_vect, UpDirection->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookAtRH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ FocusPosition, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixLookAtRH(EyePosition->_vect, FocusPosition->_vect, UpDirection->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookToLH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ EyeDirection, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixLookToLH(EyePosition->_vect, EyeDirection->_vect, UpDirection->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookToRH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ EyeDirection, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixLookToRH(EyePosition->_vect, EyeDirection->_vect, UpDirection->_vect));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixPerspectiveLH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixPerspectiveRH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveFovLH(float FovAngleY, float AspectRatio, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixPerspectiveFovLH(FovAngleY, AspectRatio, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveFovRH(float FovAngleY, float AspectRatio, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixPerspectiveFovRH(FovAngleY, AspectRatio, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixPerspectiveOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixPerspectiveOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixOrthographicLH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixOrthographicRH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixOrthographicOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::Math::XMMatrixOrthographicOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline bool DirectX::DirectXMath::XMQuaternionEqual(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return DirectX::Math::XMQuaternionEqual(Q1->_vect, Q2->_vect);
}

inline bool DirectX::DirectXMath::XMQuaternionNotEqual(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return DirectX::Math::XMQuaternionNotEqual(Q1->_vect, Q2->_vect);
}

inline bool DirectX::DirectXMath::XMQuaternionIsNaN(DirectX::Math::XMVECTOR^ Q)
{
    return DirectX::Math::XMQuaternionIsNaN(Q->_vect);
}

inline bool DirectX::DirectXMath::XMQuaternionIsInfinite(DirectX::Math::XMVECTOR^ Q)
{
    return DirectX::Math::XMQuaternionIsInfinite(Q->_vect);
}

inline bool DirectX::DirectXMath::XMQuaternionIsIdentity(DirectX::Math::XMVECTOR^ Q)
{
    return DirectX::Math::XMQuaternionIsIdentity(Q->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionDot(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionDot(Q1->_vect, Q2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionMultiply(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionMultiply(Q1->_vect, Q2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionLengthSq(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionLengthSq(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionReciprocalLength(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionReciprocalLength(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionLength(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionLength(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionNormalizeEst(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionNormalizeEst(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionNormalize(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionNormalize(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionConjugate(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionConjugate(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionInverse(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionInverse(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionLn(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionLn(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionExp(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionExp(Q->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSlerp(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionSlerp(Q0->_vect, Q1->_vect, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSlerpV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionSlerpV(Q0->_vect, Q1->_vect, T->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSquad(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionSquad(Q0->_vect, Q1->_vect, Q2->_vect, Q3->_vect, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSquadV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionSquadV(Q0->_vect, Q1->_vect, Q2->_vect, Q3->_vect, T->_vect));
}

inline void DirectX::DirectXMath::XMQuaternionSquadSetup(DirectX::Math::XMVECTOR^ pA, DirectX::Math::XMVECTOR^ pB, DirectX::Math::XMVECTOR^ pC, DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3)
{
    DirectX::Math::XMQuaternionSquadSetup(pA->_vect, pB->_vect, pC->_vect, Q0->_vect, Q1->_vect, Q2->_vect, Q3->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionBaryCentric(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, float f, float g)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionBaryCentric(Q0->_vect, Q1->_vect, Q2->_vect, f, g));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionBaryCentricV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ F, DirectX::Math::XMVECTOR^ G)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionBaryCentricV(Q0->_vect, Q1->_vect, Q2->_vect, F->_vect, G->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionIdentity()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionIdentity());
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationRollPitchYaw(float Pitch, float Yaw, float Roll)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionRotationRollPitchYaw(Pitch, Yaw, Roll));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationRollPitchYawFromVector(DirectX::Math::XMVECTOR^ Angles)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionRotationRollPitchYawFromVector(Angles->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationNormal(DirectX::Math::XMVECTOR^ NormalAxis, float Angle)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionRotationNormal(NormalAxis->_vect, Angle));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationAxis(DirectX::Math::XMVECTOR^ Axis, float Angle)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionRotationAxis(Axis->_vect, Angle));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationMatrix(DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMQuaternionRotationMatrix(M->_mat));
}

inline void DirectX::DirectXMath::XMQuaternionToAxisAngle(DirectX::Math::XMVECTOR^ pAxis, float% pAngle, DirectX::Math::XMVECTOR^ Q)
{
	pin_ptr<float>angle = &pAngle;
    DirectX::Math::XMQuaternionToAxisAngle(pAxis->_vect, angle, Q->_vect);
}

inline bool DirectX::DirectXMath::XMPlaneEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2)
{
    return DirectX::Math::XMPlaneEqual(P1->_vect, P2->_vect);
}

inline bool DirectX::DirectXMath::XMPlaneNearEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::Math::XMPlaneNearEqual(P1->_vect, P2->_vect, Epsilon->_vect);
}

inline bool DirectX::DirectXMath::XMPlaneNotEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2)
{
    return DirectX::Math::XMPlaneNotEqual(P1->_vect, P2->_vect);
}

inline bool DirectX::DirectXMath::XMPlaneIsNaN(DirectX::Math::XMVECTOR^ P)
{
    return DirectX::Math::XMPlaneIsNaN(P->_vect);
}

inline bool DirectX::DirectXMath::XMPlaneIsInfinite(DirectX::Math::XMVECTOR^ P)
{
    return DirectX::Math::XMPlaneIsInfinite(P->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneDot(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneDot(P->_vect, V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneDotCoord(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneDotCoord(P->_vect, V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneDotNormal(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneDotNormal(P->_vect, V->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneNormalizeEst(DirectX::Math::XMVECTOR^ P)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneNormalizeEst(P->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneNormalize(DirectX::Math::XMVECTOR^ P)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneNormalize(P->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneIntersectLine(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneIntersectLine(P->_vect, LinePoint1->_vect, LinePoint2->_vect));
}

inline void DirectX::DirectXMath::XMPlaneIntersectPlane(DirectX::Math::XMVECTOR^ pLinePoint1, DirectX::Math::XMVECTOR^ pLinePoint2, DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2)
{
    DirectX::Math::XMPlaneIntersectPlane(pLinePoint1->_vect, pLinePoint2->_vect, P1->_vect, P2->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneTransform(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneTransform(P->_vect, M->_mat));
}

inline array<Vector4>^ DirectX::DirectXMath::XMPlaneTransformStream(array<Vector4>^ pOutputStream, unsigned int OutputStride, array<Vector4>^ pInputStream, unsigned int InputStride, unsigned int PlaneCount, DirectX::Math::XMMATRIX^ M)
{
    DirectX::XMFLOAT4* in = new DirectX::XMFLOAT4[PlaneCount];
    DirectX::XMFLOAT4* out = new DirectX::XMFLOAT4[PlaneCount];
	pOutputStream = gcnew array<Vector4>(PlaneCount);

    for (unsigned int i = 0; i < PlaneCount; i++)
        in[i] = XMFLOAT4(pInputStream[i].X, pInputStream[i].Y, pInputStream[0].Z, pInputStream[0].W);
    
    DirectX::Math::XMPlaneTransformStream(out, OutputStride, in, InputStride, PlaneCount, M->_mat);

    for (unsigned int i = 0; i < PlaneCount; i++)
        pOutputStream[i] = Vector4(out[i].x, out[i].y, out[0].z, out[0].w);

	delete out;
	delete in;

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneFromPointNormal(DirectX::Math::XMVECTOR^ Point, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneFromPointNormal(Point->_vect, Normal->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneFromPoints(DirectX::Math::XMVECTOR^ Point1, DirectX::Math::XMVECTOR^ Point2, DirectX::Math::XMVECTOR^ Point3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMPlaneFromPoints(Point1->_vect, Point2->_vect, Point3->_vect));
}

inline bool DirectX::DirectXMath::XMColorEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::Math::XMColorEqual(C1->_vect, C2->_vect);
}

inline bool DirectX::DirectXMath::XMColorNotEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::Math::XMColorNotEqual(C1->_vect, C2->_vect);
}

inline bool DirectX::DirectXMath::XMColorGreater(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::Math::XMColorGreater(C1->_vect, C2->_vect);
}

inline bool DirectX::DirectXMath::XMColorGreaterOrEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::Math::XMColorGreaterOrEqual(C1->_vect, C2->_vect);
}

inline bool DirectX::DirectXMath::XMColorLess(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::Math::XMColorLess(C1->_vect, C2->_vect);
}

inline bool DirectX::DirectXMath::XMColorLessOrEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::Math::XMColorLessOrEqual(C1->_vect, C2->_vect);
}

inline bool DirectX::DirectXMath::XMColorIsNaN(DirectX::Math::XMVECTOR^ C)
{
    return DirectX::Math::XMColorIsNaN(C->_vect);
}

inline bool DirectX::DirectXMath::XMColorIsInfinite(DirectX::Math::XMVECTOR^ C)
{
    return DirectX::Math::XMColorIsInfinite(C->_vect);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorNegative(DirectX::Math::XMVECTOR^ C)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorNegative(C->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorModulate(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorModulate(C1->_vect, C2->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorAdjustSaturation(DirectX::Math::XMVECTOR^ C, float Saturation)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorAdjustSaturation(C->_vect, Saturation));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorAdjustContrast(DirectX::Math::XMVECTOR^ C, float Contrast)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorAdjustContrast(C->_vect, Contrast));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToHSL(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorRGBToHSL(rgb->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorHSLToRGB(DirectX::Math::XMVECTOR^ hsl)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorHSLToRGB(hsl->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToHSV(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorRGBToHSV(rgb->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorHSVToRGB(DirectX::Math::XMVECTOR^ hsv)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorHSVToRGB(hsv->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToYUV(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorRGBToYUV(rgb->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorYUVToRGB(DirectX::Math::XMVECTOR^ yuv)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorYUVToRGB(yuv->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToYUV_HD(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorRGBToYUV_HD(rgb->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorYUVToRGB_HD(DirectX::Math::XMVECTOR^ yuv)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorYUVToRGB_HD(yuv->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToXYZ(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorRGBToXYZ(rgb->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorXYZToRGB(DirectX::Math::XMVECTOR^ xyz)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorRGBToXYZ(xyz->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorXYZToSRGB(DirectX::Math::XMVECTOR^ xyz)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorXYZToSRGB(xyz->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorSRGBToXYZ(DirectX::Math::XMVECTOR^ srgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorSRGBToXYZ(srgb->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToSRGB(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorRGBToSRGB(rgb->_vect));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorSRGBToRGB(DirectX::Math::XMVECTOR^ srgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMColorSRGBToRGB(srgb->_vect));
}

inline bool DirectX::DirectXMath::XMVerifyCPUSupport()
{
    return DirectX::Math::XMVerifyCPUSupport();
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMFresnelTerm(DirectX::Math::XMVECTOR^ CosIncidentAngle, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::Math::XMFresnelTerm(CosIncidentAngle->_vect, RefractionIndex->_vect));
}

inline bool DirectX::DirectXMath::XMScalarNearEqual(float S1, float S2, float Epsilon)
{
    return DirectX::Math::XMScalarNearEqual(S1, S2, Epsilon);
}

inline float DirectX::DirectXMath::XMScalarModAngle(float Value)
{
    return DirectX::Math::XMScalarModAngle(Value);
}

inline float DirectX::DirectXMath::XMScalarSin(float Value)
{
    return DirectX::Math::XMScalarSin(Value);
}

inline float DirectX::DirectXMath::XMScalarSinEst(float Value)
{
    return DirectX::Math::XMScalarSinEst(Value);
}

inline float DirectX::DirectXMath::XMScalarCos(float Value)
{
    return DirectX::Math::XMScalarCos(Value);
}

inline float DirectX::DirectXMath::XMScalarCosEst(float Value)
{
    return DirectX::Math::XMScalarCosEst(Value);
}

inline void DirectX::DirectXMath::XMScalarSinCos(float% pSin, float% pCos, float Value)
{
	pin_ptr<float> sin = &pSin, cos = &pCos;
    return DirectX::Math::XMScalarSinCos(sin, cos, Value);
}

inline void DirectX::DirectXMath::XMScalarSinCosEst(float% pSin, float% pCos, float Value)
{
	pin_ptr<float> sin = &pSin, cos = &pCos;
    return DirectX::Math::XMScalarSinCosEst(sin, cos, Value);
}

inline float DirectX::DirectXMath::XMScalarASin(float Value)
{
    return DirectX::Math::XMScalarASin(Value);
}

inline float DirectX::DirectXMath::XMScalarASinEst(float Value)
{
    return DirectX::Math::XMScalarASinEst(Value);
}

inline float DirectX::DirectXMath::XMScalarACos(float Value)
{
    return DirectX::Math::XMScalarACos(Value);
}

inline float DirectX::DirectXMath::XMScalarACosEst(float Value)
{
    return DirectX::Math::XMScalarACosEst(Value);
}
