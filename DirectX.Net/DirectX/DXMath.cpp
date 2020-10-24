
#include "pch.h"
#include "DXMath.h"
#include <DirectXMath.h>

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

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorIntToFloat(DirectX::Math::XMVECTOR^ VInt, unsigned int DivExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMConvertVectorIntToFloat((DirectX::XMVECTOR*)VInt, DivExponent));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorFloatToInt(DirectX::Math::XMVECTOR^ VFloat, unsigned int MulExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMConvertVectorFloatToInt((DirectX::XMVECTOR*)VFloat, MulExponent));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorUIntToFloat(DirectX::Math::XMVECTOR^ VUInt, unsigned int DivExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMConvertVectorUIntToFloat((DirectX::XMVECTOR*)VUInt, DivExponent));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMConvertVectorFloatToUInt(DirectX::Math::XMVECTOR^ VFloat, unsigned int MulExponent)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMConvertVectorFloatToUInt((DirectX::XMVECTOR*)VFloat, MulExponent));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetBinaryConstant(unsigned int C0, unsigned int C1, unsigned int C2, unsigned int C3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetBinaryConstant(C0, C1, C2, C3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatConstant(int IntConstant, unsigned int DivExponent)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatConstant(IntConstant, DivExponent));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatConstantInt(int IntConstant)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatConstantInt(IntConstant));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadInt(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat(array<float>^ pSource)
{
    cli::pin_ptr<float> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadFloat(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt2(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadInt2(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt2A(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadInt2A(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat2(DirectX::Math::XMFLOAT2* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadFloat2((DirectX::XMFLOAT2*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat2A(DirectX::Math::XMFLOAT2A* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadFloat2A((DirectX::XMFLOAT2A*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadSInt2(const DirectX::Math::XMINT2* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadSInt2((DirectX::XMINT2*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadUInt2(const DirectX::Math::XMUINT2* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadUInt2((DirectX::XMUINT2*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt3(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadInt3(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt3A(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadInt3A(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat3(DirectX::Math::XMFLOAT3* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadFloat3((DirectX::XMFLOAT3*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat3A(DirectX::Math::XMFLOAT3A* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadFloat3A((DirectX::XMFLOAT3A*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadSInt3(const DirectX::Math::XMINT3* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadSInt3((DirectX::XMINT3*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadUInt3(const DirectX::Math::XMUINT3* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadUInt3((DirectX::XMUINT3*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt4(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadInt4(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadInt4A(array<unsigned int>^ pSource)
{
    cli::pin_ptr<unsigned int> arr = &pSource[0];
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadInt4A(arr));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat4(DirectX::Math::XMFLOAT4* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadFloat4((DirectX::XMFLOAT4*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadFloat4A(DirectX::Math::XMFLOAT4A* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadFloat4A((DirectX::XMFLOAT4A*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadSInt4(const DirectX::Math::XMINT4* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadSInt4((DirectX::XMINT4*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMLoadUInt4(const DirectX::Math::XMUINT4* pSource)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMLoadUInt4((DirectX::XMUINT4*)pSource));
}

inline Matrix^ DirectX::DirectXMath::XMLoadFloat3x3(DirectX::Math::XMFLOAT3X3* pSource)
{
	return gcnew Matrix(DirectX::ManagedFunction::XMLoadFloat3x3((DirectX::XMFLOAT3X3*)pSource));
}

inline Matrix^ DirectX::DirectXMath::XMLoadFloat4x3(DirectX::Math::XMFLOAT4X3* pSource)
{
	return gcnew Matrix(DirectX::ManagedFunction::XMLoadFloat4x3((DirectX::XMFLOAT4X3*)pSource));
}

inline Matrix^ DirectX::DirectXMath::XMLoadFloat4x3A(DirectX::Math::XMFLOAT4X3A* pSource)
{
	return gcnew Matrix(DirectX::ManagedFunction::XMLoadFloat4x3A((DirectX::XMFLOAT4X3A*)pSource));
}

inline Matrix^ DirectX::DirectXMath::XMLoadFloat3x4(DirectX::Math::XMFLOAT3X4* pSource)
{
	return gcnew Matrix(DirectX::ManagedFunction::XMLoadFloat3x4((DirectX::XMFLOAT3X4*)pSource));
}

inline Matrix^ DirectX::DirectXMath::XMLoadFloat3x4A(DirectX::Math::XMFLOAT3X4A* pSource)
{
	return gcnew Matrix(DirectX::ManagedFunction::XMLoadFloat3x4A((DirectX::XMFLOAT3X4A*)pSource));
}

inline Matrix^ DirectX::DirectXMath::XMLoadFloat4x4(DirectX::Math::XMFLOAT4X4* pSource)
{
	return gcnew Matrix(DirectX::ManagedFunction::XMLoadFloat4x4((DirectX::XMFLOAT4X4*)pSource));
}

inline Matrix^ DirectX::DirectXMath::XMLoadFloat4x4A(DirectX::Math::XMFLOAT4X4A* pSource)
{
	return gcnew Matrix(DirectX::ManagedFunction::XMLoadFloat4x4A((DirectX::XMFLOAT4X4A*)pSource));
}
inline void DirectX::DirectXMath::XMStoreInt(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreInt(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat(array<float>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<float> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreFloat(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreInt2(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreInt2(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreInt2A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreInt2A(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat2(DirectX::Math::XMFLOAT2* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreFloat2((DirectX::XMFLOAT2*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat2A(DirectX::Math::XMFLOAT2A* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreFloat2A((DirectX::XMFLOAT2A*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreSInt2(DirectX::Math::XMINT2* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreSInt2((DirectX::XMINT2*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreUInt2(DirectX::Math::XMUINT2* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreUInt2((DirectX::XMUINT2*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreInt3(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreInt3(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreInt3A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreInt3A(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat3(DirectX::Math::XMFLOAT3* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreFloat3((DirectX::XMFLOAT3*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat3A(DirectX::Math::XMFLOAT3A* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreFloat3A((DirectX::XMFLOAT3A*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreSInt3(DirectX::Math::XMINT3* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreSInt3((DirectX::XMINT3*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreUInt3(DirectX::Math::XMUINT3* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreUInt3((DirectX::XMUINT3*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreInt4(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreInt4(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreInt4A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V)
{
    cli::pin_ptr<unsigned int> arr = &pDestination[0];
    DirectX::ManagedFunction::XMStoreInt4A(arr, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat4(DirectX::Math::XMFLOAT4* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreFloat4((DirectX::XMFLOAT4*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat4A(DirectX::Math::XMFLOAT4A* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreFloat4A((DirectX::XMFLOAT4A*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreSInt4(DirectX::Math::XMINT4* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreSInt4((DirectX::XMINT4*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreUInt4(DirectX::Math::XMUINT4* pDestination, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMStoreUInt4((DirectX::XMUINT4*)pDestination, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMStoreFloat3x3(DirectX::Math::XMFLOAT3X3* pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::ManagedFunction::XMStoreFloat3x3((DirectX::XMFLOAT3X3*)pDestination, (DirectX::XMMATRIX*)M);
}
inline void DirectX::DirectXMath::XMStoreFloat4x3(DirectX::Math::XMFLOAT4X3* pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::ManagedFunction::XMStoreFloat4x3((DirectX::XMFLOAT4X3*)pDestination, (DirectX::XMMATRIX*)M);
}
inline void DirectX::DirectXMath::XMStoreFloat4x3A(DirectX::Math::XMFLOAT4X3A* pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::ManagedFunction::XMStoreFloat4x3A((DirectX::XMFLOAT4X3A*)pDestination, (DirectX::XMMATRIX*)M);
}
inline void DirectX::DirectXMath::XMStoreFloat3x4(DirectX::Math::XMFLOAT3X4* pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::ManagedFunction::XMStoreFloat3x4((DirectX::XMFLOAT3X4*)pDestination, (DirectX::XMMATRIX*)M);
}
inline void DirectX::DirectXMath::XMStoreFloat3x4A(DirectX::Math::XMFLOAT3X4A* pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::ManagedFunction::XMStoreFloat3x4A((DirectX::XMFLOAT3X4A*)pDestination, (DirectX::XMMATRIX*)M);
}
inline void DirectX::DirectXMath::XMStoreFloat4x4(DirectX::Math::XMFLOAT4X4* pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::ManagedFunction::XMStoreFloat4x4((DirectX::XMFLOAT4X4*)pDestination, (DirectX::XMMATRIX*)M);
}
inline void DirectX::DirectXMath::XMStoreFloat4x4A(DirectX::Math::XMFLOAT4X4A* pDestination, DirectX::Math::XMMATRIX^ M)
{
    DirectX::ManagedFunction::XMStoreFloat4x4A((DirectX::XMFLOAT4X4A*)pDestination, (DirectX::XMMATRIX*)M);
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorZero()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorZero());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSet(float x, float y, float z, float w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSet(x, y, z, w));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetInt(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetInt(x, y, z, w));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicate(float Value)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReplicate(Value));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicatePtr(float% pValue)
{
	pin_ptr<float> val = &pValue;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReplicatePtr(val));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicateInt(unsigned int Value)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReplicateInt(Value));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReplicateIntPtr(unsigned int% pValue)
{
	pin_ptr<unsigned int> val = &pValue;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReplicateIntPtr(val));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTrueInt()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorTrueInt());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorFalseInt()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorFalseInt());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatX(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatX((DirectX::XMVECTOR*)V));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatY(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatY((DirectX::XMVECTOR*)V));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatZ(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatZ((DirectX::XMVECTOR*)V));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatW(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatW((DirectX::XMVECTOR*)V));
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatOne()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatOne());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatInfinity()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatInfinity());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatQNaN()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatQNaN());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatEpsilon()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatEpsilon());
}
inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSplatSignMask()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSplatSignMask());
}
inline float DirectX::DirectXMath::XMVectorGetByIndex(DirectX::Math::XMVECTOR^ V, unsigned int i)
{
    return DirectX::ManagedFunction::XMVectorGetByIndex((DirectX::XMVECTOR*)V, i);
}
inline float DirectX::DirectXMath::XMVectorGetX(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetX((DirectX::XMVECTOR*)V);
}
inline float DirectX::DirectXMath::XMVectorGetY(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetY((DirectX::XMVECTOR*)V);
}
inline float DirectX::DirectXMath::XMVectorGetZ(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetZ((DirectX::XMVECTOR*)V);
}
inline float DirectX::DirectXMath::XMVectorGetW(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetW((DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetByIndexPtr(float% f, DirectX::Math::XMVECTOR^ V, unsigned int i)
{
	pin_ptr<float> val = &f;
    return DirectX::ManagedFunction::XMVectorGetByIndexPtr(val, (DirectX::XMVECTOR*)V, i);
}
inline void DirectX::DirectXMath::XMVectorGetXPtr(float% x, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &x;
    return DirectX::ManagedFunction::XMVectorGetXPtr(val, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetYPtr(float% y, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &y;
    return DirectX::ManagedFunction::XMVectorGetYPtr(val, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetZPtr(float% z, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &z;
    return DirectX::ManagedFunction::XMVectorGetZPtr(val, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetWPtr(float% w, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<float> val = &w;
    return DirectX::ManagedFunction::XMVectorGetWPtr(val, (DirectX::XMVECTOR*)V);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntByIndex(DirectX::Math::XMVECTOR^ V, unsigned int i)
{
    return DirectX::ManagedFunction::XMVectorGetIntByIndex((DirectX::XMVECTOR*)V, i);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntX(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetIntX((DirectX::XMVECTOR*)V);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntY(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetIntY((DirectX::XMVECTOR*)V);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntZ(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetIntZ((DirectX::XMVECTOR*)V);
}
inline unsigned int DirectX::DirectXMath::XMVectorGetIntW(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVectorGetIntW((DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetIntByIndexPtr(unsigned int% f, DirectX::Math::XMVECTOR^ V, unsigned int i)
{
	pin_ptr<unsigned int> val = &f;
    return DirectX::ManagedFunction::XMVectorGetIntByIndexPtr(val, (DirectX::XMVECTOR*)V, i);
}
inline void DirectX::DirectXMath::XMVectorGetIntXPtr(unsigned int% x, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &x;
    return DirectX::ManagedFunction::XMVectorGetIntXPtr(val, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetIntYPtr(unsigned int% y, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &y;
    return DirectX::ManagedFunction::XMVectorGetIntYPtr(val, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetIntZPtr(unsigned int% z, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &z;
    return DirectX::ManagedFunction::XMVectorGetIntZPtr(val, (DirectX::XMVECTOR*)V);
}
inline void DirectX::DirectXMath::XMVectorGetIntWPtr(unsigned int% w, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<unsigned int> val = &w;
    return DirectX::ManagedFunction::XMVectorGetIntWPtr(val, (DirectX::XMVECTOR*)V);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetByIndex(DirectX::Math::XMVECTOR^ V, float f, unsigned int i)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetByIndex((DirectX::XMVECTOR*)V, f, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetX(DirectX::Math::XMVECTOR^ V, float x)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetX((DirectX::XMVECTOR*)V, x));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetY(DirectX::Math::XMVECTOR^ V, float y)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetY((DirectX::XMVECTOR*)V, y));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetZ(DirectX::Math::XMVECTOR^ V, float z)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetZ((DirectX::XMVECTOR*)V, z));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetW(DirectX::Math::XMVECTOR^ V, float w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetW((DirectX::XMVECTOR*)V, w));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetByIndexPtr(DirectX::Math::XMVECTOR^ V, float% f, unsigned int i)
{
	pin_ptr<float> val = &f;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetByIndexPtr((DirectX::XMVECTOR*)V, val, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetXPtr(DirectX::Math::XMVECTOR^ V, float% x)
{
	pin_ptr<float> val = &x;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetXPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetYPtr(DirectX::Math::XMVECTOR^ V, float% y)
{
	pin_ptr<float> val = &y;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetYPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetZPtr(DirectX::Math::XMVECTOR^ V, float% z)
{
	pin_ptr<float> val = &z;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetZPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetWPtr(DirectX::Math::XMVECTOR^ V, float% w)
{
	pin_ptr<float> val = &w;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetWPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntByIndex(DirectX::Math::XMVECTOR^ V, unsigned int f, unsigned int i)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntByIndex((DirectX::XMVECTOR*)V, f, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntX(DirectX::Math::XMVECTOR^ V, unsigned int x)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntX((DirectX::XMVECTOR*)V, x));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntY(DirectX::Math::XMVECTOR^ V, unsigned int y)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntY((DirectX::XMVECTOR*)V, y));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntZ(DirectX::Math::XMVECTOR^ V, unsigned int z)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntZ((DirectX::XMVECTOR*)V, z));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntW(DirectX::Math::XMVECTOR^ V, unsigned int w)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntW((DirectX::XMVECTOR*)V, w));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntByIndexPtr(DirectX::Math::XMVECTOR^ V, unsigned int% f, unsigned int i)
{
	pin_ptr<unsigned int> val = &f;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntByIndexPtr((DirectX::XMVECTOR*)V, val, i));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntXPtr(DirectX::Math::XMVECTOR^ V, unsigned int% x)
{
	pin_ptr<unsigned int> val = &x;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntXPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntYPtr(DirectX::Math::XMVECTOR^ V, unsigned int% y)
{
	pin_ptr<unsigned int> val = &y;
	return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntYPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntZPtr(DirectX::Math::XMVECTOR^ V, unsigned int% z)
{
	pin_ptr<unsigned int> val = &z;
	return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntZPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSetIntWPtr(DirectX::Math::XMVECTOR^ V, unsigned int% w)
{
	pin_ptr<unsigned int> val = &w;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSetIntWPtr((DirectX::XMVECTOR*)V, val));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSwizzle(DirectX::Math::XMVECTOR^ V, unsigned int E0, unsigned int E1, unsigned int E2, unsigned int E3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSwizzle((DirectX::XMVECTOR*)V, E0, E1, E2, E3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorPermute(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, unsigned int PermuteX, unsigned int PermuteY, unsigned int PermuteZ, unsigned int PermuteW)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorPermute((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, PermuteX, PermuteY, PermuteZ, PermuteW));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSelectControl(unsigned int VectorIndex0, unsigned int VectorIndex1, unsigned int VectorIndex2, unsigned int VectorIndex3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSelectControl(VectorIndex0, VectorIndex1, VectorIndex2, VectorIndex3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSelect(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Control)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSelect((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)Control));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMergeXY(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorMergeXY((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMergeZW(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorMergeZW((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorShiftLeft(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, unsigned int Elements)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorShiftLeft((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, Elements));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorRotateLeft(DirectX::Math::XMVECTOR^ V, unsigned int Elements)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorRotateLeft((DirectX::XMVECTOR*)V, Elements));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorRotateRight(DirectX::Math::XMVECTOR^ V, unsigned int Elements)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorRotateRight((DirectX::XMVECTOR*)V, Elements));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorInsert(DirectX::Math::XMVECTOR^ VD, DirectX::Math::XMVECTOR^ VS, unsigned int VSLeftRotateElements, unsigned int Select0, unsigned int Select1, unsigned int Select2, unsigned int Select3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorInsert((DirectX::XMVECTOR*)VD, (DirectX::XMVECTOR*)VS, VSLeftRotateElements, Select0, Select1, Select2, Select3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqualR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorEqualR(val, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorEqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorEqualIntR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorEqualIntR(val, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorNearEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)Epsilon));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorNotEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorNotEqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorGreater((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreaterR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorGreaterR(val, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorGreaterOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorGreaterOrEqualR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorGreaterOrEqualR(val, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLess(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorLess((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorLessOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorInBounds(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorInBounds((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorInBoundsR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
	pin_ptr<unsigned int> val = &pCR;
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorInBoundsR(val, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorIsNaN(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorIsNaN((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorIsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorIsInfinite((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMin(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorMin((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMax(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorMax((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorRound(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorRound((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTruncate(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorTruncate((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorFloor(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorFloor((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCeiling(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorCeiling((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorClamp(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Min, DirectX::Math::XMVECTOR^ Max)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorClamp((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)Min, (DirectX::XMVECTOR*)Max));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSaturate(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSaturate((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAndInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorAndInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAndCInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorAndCInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorOrInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorOrInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNorInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorNorInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorXorInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorXorInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNegate(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorNegate((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAdd(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorAdd((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSum(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSum((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAddAngles(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorAddAngles((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSubtract(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSubtract((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSubtractAngles(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSubtractAngles((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMultiply(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorMultiply((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMultiplyAdd(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorMultiplyAdd((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)V3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorDivide(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorDivide((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorNegativeMultiplySubtract(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorNegativeMultiplySubtract((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)V3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorScale(DirectX::Math::XMVECTOR^ V, float ScaleFactor)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorScale((DirectX::XMVECTOR*)V, ScaleFactor));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocalEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReciprocalEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReciprocal((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSqrtEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSqrtEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSqrt(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSqrt((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocalSqrtEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReciprocalSqrtEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorReciprocalSqrt(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorReciprocalSqrt((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorExp2(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorExp2((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorExpE(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorExpE((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorExp(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorExp((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLog2(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorLog2((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLogE(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorLogE((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLog(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorLog((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorPow(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorPow((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorAbs(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorAbs((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorMod(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorMod((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorModAngles(DirectX::Math::XMVECTOR^ Angles)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorModAngles((DirectX::XMVECTOR*)Angles));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSin(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSin((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSinEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSinEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCos(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorCos((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCosEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorCosEst((DirectX::XMVECTOR*)V));
}

inline void DirectX::DirectXMath::XMVectorSinCos(DirectX::Math::XMVECTOR^ pSin, DirectX::Math::XMVECTOR^ pCos, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMVectorSinCos((DirectX::XMVECTOR*)pSin, (DirectX::XMVECTOR*)pCos, (DirectX::XMVECTOR*)V);
}

inline void DirectX::DirectXMath::XMVectorSinCosEst(DirectX::Math::XMVECTOR^ pSin, DirectX::Math::XMVECTOR^ pCos, DirectX::Math::XMVECTOR^ V)
{
    DirectX::ManagedFunction::XMVectorSinCosEst((DirectX::XMVECTOR*)pSin, (DirectX::XMVECTOR*)pCos, (DirectX::XMVECTOR*)V);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTan(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorTan((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTanEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorTanEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorSinH(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorSinH((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCosH(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorCosH((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorTanH(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorTanH((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorASin(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorASin((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorASinEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorASinEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorACos(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorACos((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorACosEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorACosEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATan(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorATan((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATanEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorATanEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATan2(DirectX::Math::XMVECTOR^ Y, DirectX::Math::XMVECTOR^ X)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorATan2((DirectX::XMVECTOR*)Y, (DirectX::XMVECTOR*)X));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorATan2Est(DirectX::Math::XMVECTOR^ Y, DirectX::Math::XMVECTOR^ X)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorATan2Est((DirectX::XMVECTOR*)Y, (DirectX::XMVECTOR*)X));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLerp(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorLerp((DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorLerpV(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorLerpV((DirectX::XMVECTOR*)V0, (DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)T));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorHermite(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Tangent0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Tangent1, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorHermite((DirectX::XMVECTOR*)Position0, (DirectX::XMVECTOR*)Tangent0, (DirectX::XMVECTOR*)Position1, (DirectX::XMVECTOR*)Tangent1, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorHermiteV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Tangent0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Tangent1, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorHermiteV((DirectX::XMVECTOR*)Position0, (DirectX::XMVECTOR*)Tangent0, (DirectX::XMVECTOR*)Position1, (DirectX::XMVECTOR*)Tangent1, (DirectX::XMVECTOR*)T));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCatmullRom(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ Position3, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorCatmullRom((DirectX::XMVECTOR*)Position0, (DirectX::XMVECTOR*)Position1, (DirectX::XMVECTOR*)Position2, (DirectX::XMVECTOR*)Position3, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorCatmullRomV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ Position3, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorCatmullRomV((DirectX::XMVECTOR*)Position0, (DirectX::XMVECTOR*)Position1, (DirectX::XMVECTOR*)Position2, (DirectX::XMVECTOR*)Position3, (DirectX::XMVECTOR*)T));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorBaryCentric(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, float f, float g)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorBaryCentric((DirectX::XMVECTOR*)Position0, (DirectX::XMVECTOR*)Position1, (DirectX::XMVECTOR*)Position2, f,g));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVectorBaryCentricV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ F, DirectX::Math::XMVECTOR^ G)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVectorBaryCentricV((DirectX::XMVECTOR*)Position0, (DirectX::XMVECTOR*)Position1, (DirectX::XMVECTOR*)Position2, (DirectX::XMVECTOR*)F, (DirectX::XMVECTOR*)G));
}

inline bool DirectX::DirectXMath::XMVector2Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2Equal((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector2EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2EqualR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2EqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector2EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2EqualIntR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::ManagedFunction::XMVector2NearEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)Epsilon);
}

inline bool DirectX::DirectXMath::XMVector2NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2NotEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2NotEqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2Greater((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector2GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2GreaterR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2GreaterOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector2GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2GreaterOrEqualR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2Less((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector2LessOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector2InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds)
{
    return DirectX::ManagedFunction::XMVector2InBounds((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)Bounds);
}

inline bool DirectX::DirectXMath::XMVector2IsNaN(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVector2IsNaN((DirectX::XMVECTOR*)V);
}

inline bool DirectX::DirectXMath::XMVector2IsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVector2IsInfinite((DirectX::XMVECTOR*)V);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Dot((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Cross((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2LengthSq(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2LengthSq((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2ReciprocalLengthEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ReciprocalLength(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2ReciprocalLength((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2LengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2LengthEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Length(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Length((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2NormalizeEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2NormalizeEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Normalize(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Normalize((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2ClampLength((DirectX::XMVECTOR*)V, LengthMin, LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2ClampLengthV((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)LengthMin, (DirectX::XMVECTOR*)LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Reflect((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Refract((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal, RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2RefractV((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal, (DirectX::XMVECTOR*)RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Orthogonal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Orthogonal((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2AngleBetweenNormalsEst((DirectX::XMVECTOR*)N1, (DirectX::XMVECTOR*)N2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2AngleBetweenNormals((DirectX::XMVECTOR*)N1, (DirectX::XMVECTOR*)N2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2AngleBetweenVectors((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2LinePointDistance(DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2, DirectX::Math::XMVECTOR^ Point)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2LinePointDistance((DirectX::XMVECTOR*)LinePoint1, (DirectX::XMVECTOR*)LinePoint2, (DirectX::XMVECTOR*)Point));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2IntersectLine(DirectX::Math::XMVECTOR^ Line1Point1, DirectX::Math::XMVECTOR^ Line1Point2, DirectX::Math::XMVECTOR^ Line2Point1, DirectX::Math::XMVECTOR^ Line2Point2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2IntersectLine((DirectX::XMVECTOR*)Line1Point1, (DirectX::XMVECTOR*)Line1Point2, (DirectX::XMVECTOR*)Line2Point1, (DirectX::XMVECTOR*)Line2Point2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2Transform((DirectX::XMVECTOR*)V, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT4>^ DirectX::DirectXMath::XMVector2TransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT4> pOut = &pOutputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT2> pIn = &pInputStream[0];

    DirectX::ManagedFunction::XMVector2TransformStream((DirectX::XMFLOAT4*)pOut, OutputStride, (DirectX::XMFLOAT2*)pIn, InputStride, VectorCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2TransformCoord(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2TransformCoord((DirectX::XMVECTOR*)V, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT2>^ DirectX::DirectXMath::XMVector2TransformCoordStream(array<DirectX::Math::XMFLOAT2>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT2> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT2> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector2TransformCoordStream((DirectX::XMFLOAT2*)pOut, OutputStride, (DirectX::XMFLOAT2*)pIn, InputStride, VectorCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector2TransformNormal(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector2TransformNormal((DirectX::XMVECTOR*)V, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT2>^ DirectX::DirectXMath::XMVector2TransformNormalStream(array<DirectX::Math::XMFLOAT2>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT2> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT2> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector2TransformNormalStream((DirectX::XMFLOAT2*)pOut, OutputStride, (DirectX::XMFLOAT2*)pIn, InputStride, VectorCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline bool DirectX::DirectXMath::XMVector3Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3Equal((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector3EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3EqualR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3EqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector3EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3EqualIntR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::ManagedFunction::XMVector3NearEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)Epsilon);
}

inline bool DirectX::DirectXMath::XMVector3NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3NotEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3NotEqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3Greater((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector3GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3GreaterR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3GreaterOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector3GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3GreaterOrEqualR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3Less((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector3LessOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector3InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds)
{
    return DirectX::ManagedFunction::XMVector3InBounds((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)Bounds);
}

inline bool DirectX::DirectXMath::XMVector3IsNaN(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVector3IsNaN((DirectX::XMVECTOR*)V);
}

inline bool DirectX::DirectXMath::XMVector3IsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVector3IsInfinite((DirectX::XMVECTOR*)V);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Dot((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Cross((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3LengthSq(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3LengthSq((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3ReciprocalLengthEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ReciprocalLength(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3ReciprocalLength((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3LengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3LengthEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Length(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Length((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3NormalizeEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3NormalizeEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Normalize(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Normalize((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3ClampLength((DirectX::XMVECTOR*)V, LengthMin, LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3ClampLengthV((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)LengthMin, (DirectX::XMVECTOR*)LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Reflect((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Refract((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal, RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3RefractV((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal, (DirectX::XMVECTOR*)RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Orthogonal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Orthogonal((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3AngleBetweenNormalsEst((DirectX::XMVECTOR*)N1, (DirectX::XMVECTOR*)N2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3AngleBetweenNormals((DirectX::XMVECTOR*)N1, (DirectX::XMVECTOR*)N2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3AngleBetweenVectors((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3LinePointDistance(DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2, DirectX::Math::XMVECTOR^ Point)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3LinePointDistance((DirectX::XMVECTOR*)LinePoint1, (DirectX::XMVECTOR*)LinePoint2, (DirectX::XMVECTOR*)Point));
}

inline void DirectX::DirectXMath::XMVector3ComponentsFromNormal(DirectX::Math::XMVECTOR^ pParallel, DirectX::Math::XMVECTOR^ pPerpendicular, DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Normal)
{
    DirectX::ManagedFunction::XMVector3ComponentsFromNormal((DirectX::XMVECTOR*)pParallel, (DirectX::XMVECTOR*)pPerpendicular, (DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)Normal);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Rotate(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ RotationQuaternion)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Rotate((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)RotationQuaternion));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3InverseRotate(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ RotationQuaternion)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3InverseRotate((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)RotationQuaternion));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Transform((DirectX::XMVECTOR*)V, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT4>^ DirectX::DirectXMath::XMVector3TransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT3> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT4> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector3TransformStream((DirectX::XMFLOAT4*)pOut, OutputStride, (DirectX::XMFLOAT3*)pIn, InputStride, VectorCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3TransformCoord(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3TransformCoord((DirectX::XMVECTOR*)V, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT3>^ DirectX::DirectXMath::XMVector3TransformCoordStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT3> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT3> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector3TransformCoordStream((DirectX::XMFLOAT3*)pOut, OutputStride, (DirectX::XMFLOAT3*)pIn, InputStride, VectorCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3TransformNormal(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3TransformNormal((DirectX::XMVECTOR*)V, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT3>^ DirectX::DirectXMath::XMVector3TransformNormalStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT3> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT3> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector3TransformNormalStream((DirectX::XMFLOAT3*)pOut, OutputStride, (DirectX::XMFLOAT3*)pIn, InputStride, VectorCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Project(DirectX::Math::XMVECTOR^ V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Project((DirectX::XMVECTOR*)V, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, (DirectX::XMMATRIX*)Projection, (DirectX::XMMATRIX*)View, (DirectX::XMMATRIX*)World));
}

inline array<DirectX::Math::XMFLOAT3>^ DirectX::DirectXMath::XMVector3ProjectStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    pin_ptr<DirectX::Math::XMFLOAT3> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT3> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector3ProjectStream((DirectX::XMFLOAT3*)pOut, OutputStride, (DirectX::XMFLOAT3*)pIn, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, (DirectX::XMMATRIX*)Projection, (DirectX::XMMATRIX*)View, (DirectX::XMMATRIX*)World);

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector3Unproject(DirectX::Math::XMVECTOR^ V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector3Unproject((DirectX::XMVECTOR*)V, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, (DirectX::XMMATRIX*)Projection, (DirectX::XMMATRIX*)View, (DirectX::XMMATRIX*)World));
}

inline array<DirectX::Math::XMFLOAT3>^ DirectX::DirectXMath::XMVector3UnprojectStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World)
{
    pin_ptr<DirectX::Math::XMFLOAT3> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT3> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector3UnprojectStream((DirectX::XMFLOAT3*)pOut, OutputStride, (DirectX::XMFLOAT3*)pIn, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, (DirectX::XMMATRIX*)Projection, (DirectX::XMMATRIX*)View, (DirectX::XMMATRIX*)World);

    return pOutputStream;
}

inline bool DirectX::DirectXMath::XMVector4Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4Equal((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector4EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4EqualR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4EqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector4EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4EqualIntR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::ManagedFunction::XMVector4NearEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)Epsilon);
}

inline bool DirectX::DirectXMath::XMVector4NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4NotEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4NotEqualInt((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4Greater((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector4GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4GreaterR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4GreaterOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline unsigned int DirectX::DirectXMath::XMVector4GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4GreaterOrEqualR((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4Less((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return DirectX::ManagedFunction::XMVector4LessOrEqual((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2);
}

inline bool DirectX::DirectXMath::XMVector4InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds)
{
    return DirectX::ManagedFunction::XMVector4InBounds((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)Bounds);
}

inline bool DirectX::DirectXMath::XMVector4IsNaN(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVector4IsNaN((DirectX::XMVECTOR*)V);
}

inline bool DirectX::DirectXMath::XMVector4IsInfinite(DirectX::Math::XMVECTOR^ V)
{
    return DirectX::ManagedFunction::XMVector4IsInfinite((DirectX::XMVECTOR*)V);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Dot((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Cross((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2, (DirectX::XMVECTOR*)V3));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4LengthSq(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4LengthSq((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4ReciprocalLengthEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ReciprocalLength(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4ReciprocalLength((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4LengthEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4LengthEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Length(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Length((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4NormalizeEst(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4NormalizeEst((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Normalize(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Normalize((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4ClampLength((DirectX::XMVECTOR*)V, LengthMin, LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4ClampLengthV((DirectX::XMVECTOR*)V, (DirectX::XMVECTOR*)LengthMin, (DirectX::XMVECTOR*)LengthMax));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Reflect((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Refract((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal, RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4RefractV((DirectX::XMVECTOR*)Incident, (DirectX::XMVECTOR*)Normal, (DirectX::XMVECTOR*)RefractionIndex));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Orthogonal(DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Orthogonal((DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4AngleBetweenNormalsEst((DirectX::XMVECTOR*)N1, (DirectX::XMVECTOR*)N2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4AngleBetweenNormals((DirectX::XMVECTOR*)N1, (DirectX::XMVECTOR*)N2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4AngleBetweenVectors((DirectX::XMVECTOR*)V1, (DirectX::XMVECTOR*)V2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMVector4Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMVector4Transform((DirectX::XMVECTOR*)V, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT4>^ DirectX::DirectXMath::XMVector4TransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT4>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT4> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT4> pOut = &pOutputStream[0];

    DirectX::ManagedFunction::XMVector4TransformStream((DirectX::XMFLOAT4*)pOut, OutputStride, (DirectX::XMFLOAT4*)pIn, InputStride, VectorCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline bool DirectX::DirectXMath::XMMatrixIsNaN(DirectX::Math::XMMATRIX^ M)
{
    return DirectX::ManagedFunction::XMMatrixIsNaN((DirectX::XMMATRIX*)M);
}

inline bool DirectX::DirectXMath::XMMatrixIsInfinite(DirectX::Math::XMMATRIX^ M)
{
    return DirectX::ManagedFunction::XMMatrixIsInfinite((DirectX::XMMATRIX*)M);
}

inline bool DirectX::DirectXMath::XMMatrixIsIdentity(DirectX::Math::XMMATRIX^ M)
{
    return DirectX::ManagedFunction::XMMatrixIsIdentity((DirectX::XMMATRIX*)M);
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixMultiply(DirectX::Math::XMMATRIX^ M1, DirectX::Math::XMMATRIX^ M2)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixMultiply((DirectX::XMMATRIX*)M1, (DirectX::XMMATRIX*)M2));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixMultiplyTranspose(DirectX::Math::XMMATRIX^ M1, DirectX::Math::XMMATRIX^ M2)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixMultiplyTranspose((DirectX::XMMATRIX*)M1, (DirectX::XMMATRIX*)M2));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTranspose(DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixTranspose((DirectX::XMMATRIX*)M));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixInverse(DirectX::Math::XMVECTOR^ pDeterminant, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixInverse((DirectX::XMVECTOR*)pDeterminant, (DirectX::XMMATRIX*)M));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMMatrixDeterminant(DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMMatrixDeterminant((DirectX::XMMATRIX*)M));
}

inline bool DirectX::DirectXMath::XMMatrixDecompose(DirectX::Math::XMVECTOR^ outScale, DirectX::Math::XMVECTOR^ outRotQuat, DirectX::Math::XMVECTOR^ outTrans, DirectX::Math::XMMATRIX^ M)
{
    return DirectX::ManagedFunction::XMMatrixDecompose((DirectX::XMVECTOR*)outScale, (DirectX::XMVECTOR*)outRotQuat, (DirectX::XMVECTOR*)outTrans, (DirectX::XMMATRIX*)M);
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixIdentity()
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixIdentity());
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixSet(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixSet(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTranslation(float OffsetX, float OffsetY, float OffsetZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixTranslation(OffsetX, OffsetY, OffsetZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTranslationFromVector(DirectX::Math::XMVECTOR^ Offset)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixTranslationFromVector((DirectX::XMVECTOR*)Offset));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixScaling(float ScaleX, float ScaleY, float ScaleZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixScaling(ScaleX, ScaleY, ScaleZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixScalingFromVector(DirectX::Math::XMVECTOR^ Scale)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixScalingFromVector((DirectX::XMVECTOR*)Scale));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationX(float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationX(Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationY(float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationY(Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationZ(float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationZ(Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationRollPitchYaw(float Pitch, float Yaw, float Roll)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationRollPitchYaw(Pitch, Yaw, Roll));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationRollPitchYawFromVector(DirectX::Math::XMVECTOR^ Angles)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationRollPitchYawFromVector((DirectX::XMVECTOR*)Angles));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationNormal(DirectX::Math::XMVECTOR^ NormalAxis, float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationNormal((DirectX::XMVECTOR*)NormalAxis, Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationAxis(DirectX::Math::XMVECTOR^ Axis, float Angle)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationAxis((DirectX::XMVECTOR*)Axis, Angle));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixRotationQuaternion(DirectX::Math::XMVECTOR^ Quaternion)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixRotationQuaternion((DirectX::XMVECTOR*)Quaternion));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTransformation2D(DirectX::Math::XMVECTOR^ ScalingOrigin, float ScalingOrientation, DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, float Rotation, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixTransformation2D((DirectX::XMVECTOR*)ScalingOrigin, ScalingOrientation, (DirectX::XMVECTOR*)Scaling, (DirectX::XMVECTOR*)RotationOrigin, Rotation, (DirectX::XMVECTOR*)Translation));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixTransformation(DirectX::Math::XMVECTOR^ ScalingOrigin, DirectX::Math::XMVECTOR^ ScalingOrientationQuaternion, DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, DirectX::Math::XMVECTOR^ RotationQuaternion, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixTransformation((DirectX::XMVECTOR*)ScalingOrigin, (DirectX::XMVECTOR*)ScalingOrientationQuaternion, (DirectX::XMVECTOR*)Scaling, (DirectX::XMVECTOR*)RotationOrigin, (DirectX::XMVECTOR*)RotationQuaternion, (DirectX::XMVECTOR*)Translation));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixAffineTransformation2D(DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, float Rotation, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixAffineTransformation2D((DirectX::XMVECTOR*)Scaling, (DirectX::XMVECTOR*)RotationOrigin, Rotation, (DirectX::XMVECTOR*)Translation));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixAffineTransformation(DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, DirectX::Math::XMVECTOR^ RotationQuaternion, DirectX::Math::XMVECTOR^ Translation)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixAffineTransformation((DirectX::XMVECTOR*)Scaling, (DirectX::XMVECTOR*)RotationOrigin, (DirectX::XMVECTOR*)RotationQuaternion, (DirectX::XMVECTOR*)Translation));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixReflect(DirectX::Math::XMVECTOR^ ReflectionPlane)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixReflect((DirectX::XMVECTOR*)ReflectionPlane));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixShadow(DirectX::Math::XMVECTOR^ ShadowPlane, DirectX::Math::XMVECTOR^ LightPosition)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixShadow((DirectX::XMVECTOR*)ShadowPlane, (DirectX::XMVECTOR*)LightPosition));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookAtLH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ FocusPosition, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixLookAtLH((DirectX::XMVECTOR*)EyePosition, (DirectX::XMVECTOR*)FocusPosition, (DirectX::XMVECTOR*)UpDirection));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookAtRH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ FocusPosition, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixLookAtRH((DirectX::XMVECTOR*)EyePosition, (DirectX::XMVECTOR*)FocusPosition, (DirectX::XMVECTOR*)UpDirection));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookToLH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ EyeDirection, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixLookToLH((DirectX::XMVECTOR*)EyePosition, (DirectX::XMVECTOR*)EyeDirection, (DirectX::XMVECTOR*)UpDirection));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixLookToRH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ EyeDirection, DirectX::Math::XMVECTOR^ UpDirection)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixLookToRH((DirectX::XMVECTOR*)EyePosition, (DirectX::XMVECTOR*)EyeDirection, (DirectX::XMVECTOR*)UpDirection));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixPerspectiveLH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixPerspectiveRH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveFovLH(float FovAngleY, float AspectRatio, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixPerspectiveFovLH(FovAngleY, AspectRatio, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveFovRH(float FovAngleY, float AspectRatio, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixPerspectiveFovRH(FovAngleY, AspectRatio, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixPerspectiveOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixPerspectiveOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixPerspectiveOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixOrthographicLH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixOrthographicRH(ViewWidth, ViewHeight, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixOrthographicOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline DirectX::Math::XMMATRIX^ DirectX::DirectXMath::XMMatrixOrthographicOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
{
    return gcnew DirectX::Math::XMMATRIX(DirectX::ManagedFunction::XMMatrixOrthographicOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
}

inline bool DirectX::DirectXMath::XMQuaternionEqual(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return DirectX::ManagedFunction::XMQuaternionEqual((DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2);
}

inline bool DirectX::DirectXMath::XMQuaternionNotEqual(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return DirectX::ManagedFunction::XMQuaternionNotEqual((DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2);
}

inline bool DirectX::DirectXMath::XMQuaternionIsNaN(DirectX::Math::XMVECTOR^ Q)
{
    return DirectX::ManagedFunction::XMQuaternionIsNaN((DirectX::XMVECTOR*)Q);
}

inline bool DirectX::DirectXMath::XMQuaternionIsInfinite(DirectX::Math::XMVECTOR^ Q)
{
    return DirectX::ManagedFunction::XMQuaternionIsInfinite((DirectX::XMVECTOR*)Q);
}

inline bool DirectX::DirectXMath::XMQuaternionIsIdentity(DirectX::Math::XMVECTOR^ Q)
{
    return DirectX::ManagedFunction::XMQuaternionIsIdentity((DirectX::XMVECTOR*)Q);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionDot(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionDot((DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionMultiply(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionMultiply((DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionLengthSq(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionLengthSq((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionReciprocalLength(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionReciprocalLength((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionLength(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionLength((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionNormalizeEst(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionNormalizeEst((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionNormalize(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionNormalize((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionConjugate(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionConjugate((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionInverse(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionInverse((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionLn(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionLn((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionExp(DirectX::Math::XMVECTOR^ Q)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionExp((DirectX::XMVECTOR*)Q));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSlerp(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionSlerp((DirectX::XMVECTOR*)Q0, (DirectX::XMVECTOR*)Q1, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSlerpV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionSlerpV((DirectX::XMVECTOR*)Q0, (DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)T));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSquad(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3, float t)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionSquad((DirectX::XMVECTOR*)Q0, (DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2, (DirectX::XMVECTOR*)Q3, t));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionSquadV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3, DirectX::Math::XMVECTOR^ T)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionSquadV((DirectX::XMVECTOR*)Q0, (DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2, (DirectX::XMVECTOR*)Q3, (DirectX::XMVECTOR*)T));
}

inline void DirectX::DirectXMath::XMQuaternionSquadSetup(DirectX::Math::XMVECTOR^ pA, DirectX::Math::XMVECTOR^ pB, DirectX::Math::XMVECTOR^ pC, DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3)
{
    DirectX::ManagedFunction::XMQuaternionSquadSetup((DirectX::XMVECTOR*)pA, (DirectX::XMVECTOR*)pB, (DirectX::XMVECTOR*)pC, (DirectX::XMVECTOR*)Q0, (DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2, (DirectX::XMVECTOR*)Q3);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionBaryCentric(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, float f, float g)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionBaryCentric((DirectX::XMVECTOR*)Q0, (DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2, f, g));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionBaryCentricV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ F, DirectX::Math::XMVECTOR^ G)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionBaryCentricV((DirectX::XMVECTOR*)Q0, (DirectX::XMVECTOR*)Q1, (DirectX::XMVECTOR*)Q2, (DirectX::XMVECTOR*)F, (DirectX::XMVECTOR*)G));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionIdentity()
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionIdentity());
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationRollPitchYaw(float Pitch, float Yaw, float Roll)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionRotationRollPitchYaw(Pitch, Yaw, Roll));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationRollPitchYawFromVector(DirectX::Math::XMVECTOR^ Angles)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionRotationRollPitchYawFromVector((DirectX::XMVECTOR*)Angles));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationNormal(DirectX::Math::XMVECTOR^ NormalAxis, float Angle)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionRotationNormal((DirectX::XMVECTOR*)NormalAxis, Angle));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationAxis(DirectX::Math::XMVECTOR^ Axis, float Angle)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionRotationAxis((DirectX::XMVECTOR*)Axis, Angle));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMQuaternionRotationMatrix(DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMQuaternionRotationMatrix((DirectX::XMMATRIX*)M));
}

inline void DirectX::DirectXMath::XMQuaternionToAxisAngle(DirectX::Math::XMVECTOR^ pAxis, float% pAngle, DirectX::Math::XMVECTOR^ Q)
{
	pin_ptr<float>angle = &pAngle;
    DirectX::ManagedFunction::XMQuaternionToAxisAngle((DirectX::XMVECTOR*)pAxis, angle, (DirectX::XMVECTOR*)Q);
}

inline bool DirectX::DirectXMath::XMPlaneEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2)
{
    return DirectX::ManagedFunction::XMPlaneEqual((DirectX::XMVECTOR*)P1, (DirectX::XMVECTOR*)P2);
}

inline bool DirectX::DirectXMath::XMPlaneNearEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2, DirectX::Math::XMVECTOR^ Epsilon)
{
    return DirectX::ManagedFunction::XMPlaneNearEqual((DirectX::XMVECTOR*)P1, (DirectX::XMVECTOR*)P2, (DirectX::XMVECTOR*)Epsilon);
}

inline bool DirectX::DirectXMath::XMPlaneNotEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2)
{
    return DirectX::ManagedFunction::XMPlaneNotEqual((DirectX::XMVECTOR*)P1, (DirectX::XMVECTOR*)P2);
}

inline bool DirectX::DirectXMath::XMPlaneIsNaN(DirectX::Math::XMVECTOR^ P)
{
    return DirectX::ManagedFunction::XMPlaneIsNaN((DirectX::XMVECTOR*)P);
}

inline bool DirectX::DirectXMath::XMPlaneIsInfinite(DirectX::Math::XMVECTOR^ P)
{
    return DirectX::ManagedFunction::XMPlaneIsInfinite((DirectX::XMVECTOR*)P);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneDot(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneDot((DirectX::XMVECTOR*)P, (DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneDotCoord(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneDotCoord((DirectX::XMVECTOR*)P, (DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneDotNormal(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneDotNormal((DirectX::XMVECTOR*)P, (DirectX::XMVECTOR*)V));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneNormalizeEst(DirectX::Math::XMVECTOR^ P)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneNormalizeEst((DirectX::XMVECTOR*)P));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneNormalize(DirectX::Math::XMVECTOR^ P)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneNormalize((DirectX::XMVECTOR*)P));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneIntersectLine(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneIntersectLine((DirectX::XMVECTOR*)P, (DirectX::XMVECTOR*)LinePoint1, (DirectX::XMVECTOR*)LinePoint2));
}

inline void DirectX::DirectXMath::XMPlaneIntersectPlane(DirectX::Math::XMVECTOR^ pLinePoint1, DirectX::Math::XMVECTOR^ pLinePoint2, DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2)
{
    DirectX::ManagedFunction::XMPlaneIntersectPlane((DirectX::XMVECTOR*)pLinePoint1, (DirectX::XMVECTOR*)pLinePoint2, (DirectX::XMVECTOR*)P1, (DirectX::XMVECTOR*)P2);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneTransform(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMMATRIX^ M)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneTransform((DirectX::XMVECTOR*)P, (DirectX::XMMATRIX*)M));
}

inline array<DirectX::Math::XMFLOAT4>^ DirectX::DirectXMath::XMPlaneTransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT4>^ pInputStream, unsigned int InputStride, unsigned int PlaneCount, DirectX::Math::XMMATRIX^ M)
{
    pin_ptr<DirectX::Math::XMFLOAT4> pIn = &pInputStream[0];
    pin_ptr<DirectX::Math::XMFLOAT4> pOut = &pOutputStream[0];
    
    DirectX::ManagedFunction::XMPlaneTransformStream((DirectX::XMFLOAT4*)pOut, OutputStride, (DirectX::XMFLOAT4*)pIn, InputStride, PlaneCount, (DirectX::XMMATRIX*)M);

    return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneFromPointNormal(DirectX::Math::XMVECTOR^ Point, DirectX::Math::XMVECTOR^ Normal)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneFromPointNormal((DirectX::XMVECTOR*)Point, (DirectX::XMVECTOR*)Normal));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMPlaneFromPoints(DirectX::Math::XMVECTOR^ Point1, DirectX::Math::XMVECTOR^ Point2, DirectX::Math::XMVECTOR^ Point3)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMPlaneFromPoints((DirectX::XMVECTOR*)Point1, (DirectX::XMVECTOR*)Point2, (DirectX::XMVECTOR*)Point3));
}

inline bool DirectX::DirectXMath::XMColorEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::ManagedFunction::XMColorEqual((DirectX::XMVECTOR*)C1, (DirectX::XMVECTOR*)C2);
}

inline bool DirectX::DirectXMath::XMColorNotEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::ManagedFunction::XMColorNotEqual((DirectX::XMVECTOR*)C1, (DirectX::XMVECTOR*)C2);
}

inline bool DirectX::DirectXMath::XMColorGreater(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::ManagedFunction::XMColorGreater((DirectX::XMVECTOR*)C1, (DirectX::XMVECTOR*)C2);
}

inline bool DirectX::DirectXMath::XMColorGreaterOrEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::ManagedFunction::XMColorGreaterOrEqual((DirectX::XMVECTOR*)C1, (DirectX::XMVECTOR*)C2);
}

inline bool DirectX::DirectXMath::XMColorLess(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::ManagedFunction::XMColorLess((DirectX::XMVECTOR*)C1, (DirectX::XMVECTOR*)C2);
}

inline bool DirectX::DirectXMath::XMColorLessOrEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return DirectX::ManagedFunction::XMColorLessOrEqual((DirectX::XMVECTOR*)C1, (DirectX::XMVECTOR*)C2);
}

inline bool DirectX::DirectXMath::XMColorIsNaN(DirectX::Math::XMVECTOR^ C)
{
    return DirectX::ManagedFunction::XMColorIsNaN((DirectX::XMVECTOR*)C);
}

inline bool DirectX::DirectXMath::XMColorIsInfinite(DirectX::Math::XMVECTOR^ C)
{
    return DirectX::ManagedFunction::XMColorIsInfinite((DirectX::XMVECTOR*)C);
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorNegative(DirectX::Math::XMVECTOR^ C)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorNegative((DirectX::XMVECTOR*)C));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorModulate(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorModulate((DirectX::XMVECTOR*)C1, (DirectX::XMVECTOR*)C2));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorAdjustSaturation(DirectX::Math::XMVECTOR^ C, float Saturation)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorAdjustSaturation((DirectX::XMVECTOR*)C, Saturation));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorAdjustContrast(DirectX::Math::XMVECTOR^ C, float Contrast)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorAdjustContrast((DirectX::XMVECTOR*)C, Contrast));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToHSL(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorRGBToHSL((DirectX::XMVECTOR*)rgb));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorHSLToRGB(DirectX::Math::XMVECTOR^ hsl)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorHSLToRGB((DirectX::XMVECTOR*)hsl));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToHSV(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorRGBToHSV((DirectX::XMVECTOR*)rgb));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorHSVToRGB(DirectX::Math::XMVECTOR^ hsv)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorHSVToRGB((DirectX::XMVECTOR*)hsv));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToYUV(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorRGBToYUV((DirectX::XMVECTOR*)rgb));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorYUVToRGB(DirectX::Math::XMVECTOR^ yuv)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorYUVToRGB((DirectX::XMVECTOR*)yuv));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToYUV_HD(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorRGBToYUV_HD((DirectX::XMVECTOR*)rgb));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorYUVToRGB_HD(DirectX::Math::XMVECTOR^ yuv)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorYUVToRGB_HD((DirectX::XMVECTOR*)yuv));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToXYZ(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorRGBToXYZ((DirectX::XMVECTOR*)rgb));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorXYZToRGB(DirectX::Math::XMVECTOR^ xyz)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorRGBToXYZ((DirectX::XMVECTOR*)xyz));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorXYZToSRGB(DirectX::Math::XMVECTOR^ xyz)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorXYZToSRGB((DirectX::XMVECTOR*)xyz));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorSRGBToXYZ(DirectX::Math::XMVECTOR^ srgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorSRGBToXYZ((DirectX::XMVECTOR*)srgb));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorRGBToSRGB(DirectX::Math::XMVECTOR^ rgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorRGBToSRGB((DirectX::XMVECTOR*)rgb));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMColorSRGBToRGB(DirectX::Math::XMVECTOR^ srgb)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMColorSRGBToRGB((DirectX::XMVECTOR*)srgb));
}

inline bool DirectX::DirectXMath::XMVerifyCPUSupport()
{
    return DirectX::ManagedFunction::XMVerifyCPUSupport();
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXMath::XMFresnelTerm(DirectX::Math::XMVECTOR^ CosIncidentAngle, DirectX::Math::XMVECTOR^ RefractionIndex)
{
    return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::XMFresnelTerm((DirectX::XMVECTOR*)CosIncidentAngle, (DirectX::XMVECTOR*)RefractionIndex));
}

inline bool DirectX::DirectXMath::XMScalarNearEqual(float S1, float S2, float Epsilon)
{
    return DirectX::XMScalarNearEqual(S1, S2, Epsilon);
}

inline float DirectX::DirectXMath::XMScalarModAngle(float Value)
{
    return DirectX::XMScalarModAngle(Value);
}

inline float DirectX::DirectXMath::XMScalarSin(float Value)
{
    return DirectX::XMScalarSin(Value);
}

inline float DirectX::DirectXMath::XMScalarSinEst(float Value)
{
    return DirectX::XMScalarSinEst(Value);
}

inline float DirectX::DirectXMath::XMScalarCos(float Value)
{
    return DirectX::XMScalarCos(Value);
}

inline float DirectX::DirectXMath::XMScalarCosEst(float Value)
{
    return DirectX::XMScalarCosEst(Value);
}

inline void DirectX::DirectXMath::XMScalarSinCos(float% pSin, float% pCos, float Value)
{
	pin_ptr<float> sin = &pSin, cos = &pCos;
    return DirectX::XMScalarSinCos(sin, cos, Value);
}

inline void DirectX::DirectXMath::XMScalarSinCosEst(float% pSin, float% pCos, float Value)
{
	pin_ptr<float> sin = &pSin, cos = &pCos;
    return DirectX::XMScalarSinCosEst(sin, cos, Value);
}

inline float DirectX::DirectXMath::XMScalarASin(float Value)
{
    return DirectX::XMScalarASin(Value);
}

inline float DirectX::DirectXMath::XMScalarASinEst(float Value)
{
    return DirectX::XMScalarASinEst(Value);
}

inline float DirectX::DirectXMath::XMScalarACos(float Value)
{
    return DirectX::XMScalarACos(Value);
}

inline float DirectX::DirectXMath::XMScalarACosEst(float Value)
{
    return DirectX::XMScalarACosEst(Value);
}
