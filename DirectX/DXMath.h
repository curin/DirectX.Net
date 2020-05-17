#pragma once

#include "DXColors.h"
#include "UDXMath.h"
#include "Math/XMINT.h"
#include "Math/XMUINT.h"
#include "Math/XMFLOAT.h"
#include "Math/XMMATRIX.h"
#include "Math/XMVECTOR.h"

#define PropertyConvert(type, Name, Namespace) const type Name = Namespace::Name;
#define MathProperty(Name) static property DirectX::Math::XMVECTOR^ Name { DirectX::Math::XMVECTOR^ get() { return gcnew DirectX::Math::XMVECTOR(DirectX::ManagedFunction::Name()); }}

using namespace System;
using namespace System::Numerics;
using namespace System::Runtime::InteropServices;
using namespace DirectX::Math;



#pragma managed
namespace DirectX 
{
    namespace Math
    {
        ref class XMMATRIX;
    }

	public ref class DirectXMath
	{
    public:
        PropertyConvert(float, XM_PI, DirectX)
        PropertyConvert(float, XM_2PI, DirectX)
        PropertyConvert(float, XM_1DIVPI, DirectX)
        PropertyConvert(float, XM_1DIV2PI, DirectX)
        PropertyConvert(float, XM_PIDIV2, DirectX)
        PropertyConvert(float, XM_PIDIV4, DirectX)

        PropertyConvert(unsigned int, XM_SELECT_0, DirectX)
        PropertyConvert(unsigned int, XM_SELECT_1, DirectX)

        PropertyConvert(unsigned int, XM_PERMUTE_0X, DirectX)
        PropertyConvert(unsigned int, XM_PERMUTE_0Y, DirectX)
        PropertyConvert(unsigned int, XM_PERMUTE_0Z, DirectX)
        PropertyConvert(unsigned int, XM_PERMUTE_0W, DirectX)
        PropertyConvert(unsigned int, XM_PERMUTE_1X, DirectX)
        PropertyConvert(unsigned int, XM_PERMUTE_1Y, DirectX)
        PropertyConvert(unsigned int, XM_PERMUTE_1Z, DirectX)
        PropertyConvert(unsigned int, XM_PERMUTE_1W, DirectX)

        PropertyConvert(unsigned int, XM_SWIZZLE_X, DirectX)
        PropertyConvert(unsigned int, XM_SWIZZLE_Y, DirectX)
        PropertyConvert(unsigned int, XM_SWIZZLE_Z, DirectX)
        PropertyConvert(unsigned int, XM_SWIZZLE_W, DirectX)

        PropertyConvert(unsigned int, XM_CRMASK_CR6, DirectX)
        PropertyConvert(unsigned int, XM_CRMASK_CR6TRUE, DirectX)
        PropertyConvert(unsigned int, XM_CRMASK_CR6FALSE, DirectX)
        PropertyConvert(unsigned int, XM_CRMASK_CR6BOUNDS, DirectX)

        PropertyConvert(unsigned int, XM_CACHE_LINE_SIZE, DirectX)

        static constexpr inline float XMConvertToRadians(float fDegrees);
		static constexpr inline float XMConvertToDegrees(float fRadians);

		static inline bool XMComparisonAllTrue(unsigned int CR);
		static inline bool XMComparisonAnyTrue(unsigned int CR);
		static inline bool XMComparisonAllFalse(unsigned int CR);
		static inline bool XMComparisonAnyFalse(unsigned int CR);
		static inline bool XMComparisonMixed(unsigned int CR);
		static inline bool XMComparisonAllInBounds(unsigned int CR);
		static inline bool XMComparisonAnyOutOfBounds(unsigned int CR);

		static inline DirectX::Math::XMVECTOR^ XMConvertVectorIntToFloat(DirectX::Math::XMVECTOR^ VInt, unsigned int DivExponent);
		static inline DirectX::Math::XMVECTOR^ XMConvertVectorFloatToInt(DirectX::Math::XMVECTOR^ VFloat, unsigned int MulExponent);
		static inline DirectX::Math::XMVECTOR^ XMConvertVectorUIntToFloat(DirectX::Math::XMVECTOR^ VUInt, unsigned int DivExponent);
		static inline DirectX::Math::XMVECTOR^ XMConvertVectorFloatToUInt(DirectX::Math::XMVECTOR^ VFloat, unsigned int MulExponent);

        static inline DirectX::Math::XMVECTOR^ XMVectorSetBinaryConstant(unsigned int C0, unsigned int C1, unsigned int C2, unsigned int C3);
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatConstant(int IntConstant, unsigned int DivExponent);
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatConstantInt(int IntConstant);

        static inline DirectX::Math::XMVECTOR^ XMLoadInt(array<unsigned int>^ pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadFloat(array<float>^ pSource);

		static inline DirectX::Math::XMVECTOR^ XMLoadInt2(array<unsigned int>^ pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadInt2A(array<unsigned int>^ pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadFloat2(DirectX::Math::XMFLOAT2* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadFloat2A(DirectX::Math::XMFLOAT2A* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadSInt2(const DirectX::Math::XMINT2* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadUInt2(const DirectX::Math::XMUINT2* pSource);

		static inline DirectX::Math::XMVECTOR^ XMLoadInt3(array<unsigned int>^ pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadInt3A(array<unsigned int>^ pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadFloat3(DirectX::Math::XMFLOAT3* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadFloat3A(DirectX::Math::XMFLOAT3A* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadSInt3(const DirectX::Math::XMINT3* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadUInt3(const DirectX::Math::XMUINT3* pSource);

		static inline DirectX::Math::XMVECTOR^ XMLoadInt4(array<unsigned int>^ pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadInt4A(array<unsigned int>^ pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadFloat4(DirectX::Math::XMFLOAT4* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadFloat4A(DirectX::Math::XMFLOAT4A* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadSInt4(const DirectX::Math::XMINT4* pSource);
		static inline DirectX::Math::XMVECTOR^ XMLoadUInt4(const DirectX::Math::XMUINT4* pSource);
        
        static inline DirectX::Math::XMMATRIX^ XMLoadFloat3x3(DirectX::Math::XMFLOAT3X3* pSource);
        static inline DirectX::Math::XMMATRIX^ XMLoadFloat4x3(DirectX::Math::XMFLOAT4X3* pSource);
        static inline DirectX::Math::XMMATRIX^ XMLoadFloat4x3A(DirectX::Math::XMFLOAT4X3A* pSource);
        static inline DirectX::Math::XMMATRIX^ XMLoadFloat3x4(DirectX::Math::XMFLOAT3X4* pSource);
        static inline DirectX::Math::XMMATRIX^ XMLoadFloat3x4A(DirectX::Math::XMFLOAT3X4A* pSource);
        static inline DirectX::Math::XMMATRIX^ XMLoadFloat4x4(DirectX::Math::XMFLOAT4X4* pSource);
        static inline DirectX::Math::XMMATRIX^ XMLoadFloat4x4A(DirectX::Math::XMFLOAT4X4A* pSource);
        
        static inline void XMStoreInt(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat(array<float>^ pDestination, DirectX::Math::XMVECTOR^ V);

        static inline void XMStoreInt2(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreInt2A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat2(DirectX::Math::XMFLOAT2* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat2A(DirectX::Math::XMFLOAT2A* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreSInt2(DirectX::Math::XMINT2* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUInt2(DirectX::Math::XMUINT2* pDestination, DirectX::Math::XMVECTOR^ V);

        static inline void XMStoreInt3(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreInt3A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat3(DirectX::Math::XMFLOAT3* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat3A(DirectX::Math::XMFLOAT3A* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreSInt3(DirectX::Math::XMINT3* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUInt3(DirectX::Math::XMUINT3* pDestination, DirectX::Math::XMVECTOR^ V);

        static inline void XMStoreInt4(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreInt4A(array<unsigned int>^ pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat4(DirectX::Math::XMFLOAT4* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat4A(DirectX::Math::XMFLOAT4A* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreSInt4(DirectX::Math::XMINT4* pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUInt4(DirectX::Math::XMUINT4* pDestination, DirectX::Math::XMVECTOR^ V);

        static inline void XMStoreFloat3x3(DirectX::Math::XMFLOAT3X3* pDestination, DirectX::Math::XMMATRIX^ M);
        static inline void XMStoreFloat4x3(DirectX::Math::XMFLOAT4X3* pDestination, DirectX::Math::XMMATRIX^ M);
        static inline void XMStoreFloat4x3A(DirectX::Math::XMFLOAT4X3A* pDestination, DirectX::Math::XMMATRIX^ M);
        static inline void XMStoreFloat3x4(DirectX::Math::XMFLOAT3X4* pDestination, DirectX::Math::XMMATRIX^ M);
        static inline void XMStoreFloat3x4A(DirectX::Math::XMFLOAT3X4A* pDestination, DirectX::Math::XMMATRIX^ M);
        static inline void XMStoreFloat4x4(DirectX::Math::XMFLOAT4X4* pDestination, DirectX::Math::XMMATRIX^ M);
        static inline void XMStoreFloat4x4A(DirectX::Math::XMFLOAT4X4A* pDestination, DirectX::Math::XMMATRIX^ M);

        static inline DirectX::Math::XMVECTOR^ XMVectorZero();
        static inline DirectX::Math::XMVECTOR^ XMVectorSet(float x, float y, float z, float w);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetInt(unsigned int x, unsigned int y, unsigned int z, unsigned int w);
        static inline DirectX::Math::XMVECTOR^ XMVectorReplicate(float Value);
        static inline DirectX::Math::XMVECTOR^ XMVectorReplicatePtr(float% pValue);
        static inline DirectX::Math::XMVECTOR^ XMVectorReplicateInt(unsigned int Value);
        static inline DirectX::Math::XMVECTOR^ XMVectorReplicateIntPtr(unsigned int% pValue);
        static inline DirectX::Math::XMVECTOR^ XMVectorTrueInt();
        static inline DirectX::Math::XMVECTOR^ XMVectorFalseInt();
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatX(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatY(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatZ(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatW(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatOne();
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatInfinity();
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatQNaN();
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatEpsilon();
        static inline DirectX::Math::XMVECTOR^ XMVectorSplatSignMask();

        static inline float XMVectorGetByIndex(DirectX::Math::XMVECTOR^ V, unsigned int i);
        static inline float XMVectorGetX(DirectX::Math::XMVECTOR^ V);
        static inline float XMVectorGetY(DirectX::Math::XMVECTOR^ V);
        static inline float XMVectorGetZ(DirectX::Math::XMVECTOR^ V);
        static inline float XMVectorGetW(DirectX::Math::XMVECTOR^ V);

        static inline void XMVectorGetByIndexPtr([Out] float% f, DirectX::Math::XMVECTOR^ V, unsigned int i);
        static inline void XMVectorGetXPtr([Out] float% x, DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorGetYPtr([Out] float% y, DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorGetZPtr([Out] float% z, DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorGetWPtr([Out] float% w, DirectX::Math::XMVECTOR^ V);

        static inline unsigned int XMVectorGetIntByIndex(DirectX::Math::XMVECTOR^ V, unsigned int i);
        static inline unsigned int XMVectorGetIntX(DirectX::Math::XMVECTOR^ V);
        static inline unsigned int XMVectorGetIntY(DirectX::Math::XMVECTOR^ V);
        static inline unsigned int XMVectorGetIntZ(DirectX::Math::XMVECTOR^ V);
        static inline unsigned int XMVectorGetIntW(DirectX::Math::XMVECTOR^ V);

        static inline void XMVectorGetIntByIndexPtr([Out] unsigned int% f, DirectX::Math::XMVECTOR^ V, unsigned int i);
        static inline void XMVectorGetIntXPtr([Out] unsigned int% x, DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorGetIntYPtr([Out] unsigned int% y, DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorGetIntZPtr([Out] unsigned int% z, DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorGetIntWPtr([Out] unsigned int% w, DirectX::Math::XMVECTOR^ V);

        static inline DirectX::Math::XMVECTOR^ XMVectorSetByIndex(DirectX::Math::XMVECTOR^ V, float f, unsigned int i);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetX(DirectX::Math::XMVECTOR^ V, float x);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetY(DirectX::Math::XMVECTOR^ V, float y);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetZ(DirectX::Math::XMVECTOR^ V, float z);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetW(DirectX::Math::XMVECTOR^ V, float w);

        static inline DirectX::Math::XMVECTOR^ XMVectorSetByIndexPtr(DirectX::Math::XMVECTOR^ V, float% f, unsigned int i);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetXPtr(DirectX::Math::XMVECTOR^ V, float% x);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetYPtr(DirectX::Math::XMVECTOR^ V, float% y);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetZPtr(DirectX::Math::XMVECTOR^ V, float% z);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetWPtr(DirectX::Math::XMVECTOR^ V, float% w);

        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntByIndex(DirectX::Math::XMVECTOR^ V, unsigned int f, unsigned int i);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntX(DirectX::Math::XMVECTOR^ V, unsigned int x);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntY(DirectX::Math::XMVECTOR^ V, unsigned int y);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntZ(DirectX::Math::XMVECTOR^ V, unsigned int z);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntW(DirectX::Math::XMVECTOR^ V, unsigned int w);

        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntByIndexPtr(DirectX::Math::XMVECTOR^ V, unsigned int% f, unsigned int i);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntXPtr(DirectX::Math::XMVECTOR^ V, unsigned int% x);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntYPtr(DirectX::Math::XMVECTOR^ V, unsigned int% y);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntZPtr(DirectX::Math::XMVECTOR^ V, unsigned int% z);
        static inline DirectX::Math::XMVECTOR^ XMVectorSetIntWPtr(DirectX::Math::XMVECTOR^ V, unsigned int% w);

        static inline DirectX::Math::XMVECTOR^ XMVectorSwizzle(DirectX::Math::XMVECTOR^ V, unsigned int E0, unsigned int E1, unsigned int E2, unsigned int E3);
        static inline DirectX::Math::XMVECTOR^ XMVectorPermute(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, unsigned int PermuteX, unsigned int PermuteY, unsigned int PermuteZ, unsigned int PermuteW);
        static inline DirectX::Math::XMVECTOR^ XMVectorSelectControl(unsigned int VectorIndex0, unsigned int VectorIndex1, unsigned int VectorIndex2, unsigned int VectorIndex3);
        static inline DirectX::Math::XMVECTOR^ XMVectorSelect(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Control);
        static inline DirectX::Math::XMVECTOR^ XMVectorMergeXY(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorMergeZW(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);

        static inline DirectX::Math::XMVECTOR^ XMVectorShiftLeft(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, unsigned int Elements);
        static inline DirectX::Math::XMVECTOR^ XMVectorRotateLeft(DirectX::Math::XMVECTOR^ V, unsigned int Elements);
        static inline DirectX::Math::XMVECTOR^ XMVectorRotateRight(DirectX::Math::XMVECTOR^ V, unsigned int Elements);
        static inline DirectX::Math::XMVECTOR^ XMVectorInsert(DirectX::Math::XMVECTOR^ VD, DirectX::Math::XMVECTOR^ VS, unsigned int VSLeftRotateElements,
            unsigned int Select0, unsigned int Select1, unsigned int Select2, unsigned int Select3);

        static inline DirectX::Math::XMVECTOR^ XMVectorEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorEqualR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorEqualIntR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorNearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon);
        static inline DirectX::Math::XMVECTOR^ XMVectorNotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorNotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorGreater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorGreaterR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorGreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorGreaterOrEqualR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorLess(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorLessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorInBounds(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorInBoundsR(unsigned int% pCR, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);

        static inline DirectX::Math::XMVECTOR^ XMVectorIsNaN(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorIsInfinite(DirectX::Math::XMVECTOR^ V);

        static inline DirectX::Math::XMVECTOR^ XMVectorMin(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorMax(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorRound(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorTruncate(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorFloor(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorCeiling(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorClamp(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Min, DirectX::Math::XMVECTOR^ Max);
        static inline DirectX::Math::XMVECTOR^ XMVectorSaturate(DirectX::Math::XMVECTOR^ V);

        static inline DirectX::Math::XMVECTOR^ XMVectorAndInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorAndCInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorOrInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorNorInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorXorInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);

        static inline DirectX::Math::XMVECTOR^ XMVectorNegate(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorAdd(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorSum(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorAddAngles(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorSubtract(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorSubtractAngles(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorMultiply(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorMultiplyAdd(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3);
        static inline DirectX::Math::XMVECTOR^ XMVectorDivide(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorNegativeMultiplySubtract(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3);
        static inline DirectX::Math::XMVECTOR^ XMVectorScale(DirectX::Math::XMVECTOR^ V, float ScaleFactor);
        static inline DirectX::Math::XMVECTOR^ XMVectorReciprocalEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorReciprocal(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSqrtEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSqrt(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorReciprocalSqrtEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorReciprocalSqrt(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorExp2(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorExpE(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorExp(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorLog2(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorLogE(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorLog(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorPow(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorAbs(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorMod(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVectorModAngles(DirectX::Math::XMVECTOR^ Angles);
        static inline DirectX::Math::XMVECTOR^ XMVectorSin(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSinEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorCos(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorCosEst(DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorSinCos(DirectX::Math::XMVECTOR^ pSin, DirectX::Math::XMVECTOR^ pCos, DirectX::Math::XMVECTOR^ V);
        static inline void XMVectorSinCosEst(DirectX::Math::XMVECTOR^ pSin, DirectX::Math::XMVECTOR^ pCos, DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorTan(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorTanEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorSinH(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorCosH(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorTanH(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorASin(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorASinEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorACos(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorACosEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorATan(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorATanEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVectorATan2(DirectX::Math::XMVECTOR^ Y, DirectX::Math::XMVECTOR^ X);
        static inline DirectX::Math::XMVECTOR^ XMVectorATan2Est(DirectX::Math::XMVECTOR^ Y, DirectX::Math::XMVECTOR^ X);
        static inline DirectX::Math::XMVECTOR^ XMVectorLerp(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, float t);
        static inline DirectX::Math::XMVECTOR^ XMVectorLerpV(DirectX::Math::XMVECTOR^ V0, DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ T);
        static inline DirectX::Math::XMVECTOR^ XMVectorHermite(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Tangent0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Tangent1, float t);
        static inline DirectX::Math::XMVECTOR^ XMVectorHermiteV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Tangent0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Tangent1, DirectX::Math::XMVECTOR^ T);
        static inline DirectX::Math::XMVECTOR^ XMVectorCatmullRom(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ Position3, float t);
        static inline DirectX::Math::XMVECTOR^ XMVectorCatmullRomV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ Position3, DirectX::Math::XMVECTOR^ T);
        static inline DirectX::Math::XMVECTOR^ XMVectorBaryCentric(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, float f, float g); 
        static inline DirectX::Math::XMVECTOR^ XMVectorBaryCentricV(DirectX::Math::XMVECTOR^ Position0, DirectX::Math::XMVECTOR^ Position1, DirectX::Math::XMVECTOR^ Position2, DirectX::Math::XMVECTOR^ F, DirectX::Math::XMVECTOR^ G);

        static inline bool XMVector2Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector2EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector2EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon);
        static inline bool XMVector2NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector2GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector2GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector2InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds);

        static inline bool XMVector2IsNaN(DirectX::Math::XMVECTOR^ V);
        static inline bool XMVector2IsInfinite(DirectX::Math::XMVECTOR^ V);

        static inline DirectX::Math::XMVECTOR^ XMVector2Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector2Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector2LengthSq(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2ReciprocalLength(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2LengthEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2Length(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2NormalizeEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2Normalize(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax);
        static inline DirectX::Math::XMVECTOR^ XMVector2ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax);
        static inline DirectX::Math::XMVECTOR^ XMVector2Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal);
        static inline DirectX::Math::XMVECTOR^ XMVector2Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex);
        static inline DirectX::Math::XMVECTOR^ XMVector2RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex);
        static inline DirectX::Math::XMVECTOR^ XMVector2Orthogonal(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector2AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2);
        static inline DirectX::Math::XMVECTOR^ XMVector2AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2);
        static inline DirectX::Math::XMVECTOR^ XMVector2AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector2LinePointDistance(DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2, DirectX::Math::XMVECTOR^ Point);
        static inline DirectX::Math::XMVECTOR^ XMVector2IntersectLine(DirectX::Math::XMVECTOR^ Line1Point1, DirectX::Math::XMVECTOR^ Line1Point2, DirectX::Math::XMVECTOR^ Line2Point1, DirectX::Math::XMVECTOR^ Line2Point2);
        static inline DirectX::Math::XMVECTOR^ XMVector2Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT4>^ XMVector2TransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M);
        static inline DirectX::Math::XMVECTOR^ XMVector2TransformCoord(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT2>^ XMVector2TransformCoordStream(array<DirectX::Math::XMFLOAT2>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M);
        static inline DirectX::Math::XMVECTOR^ XMVector2TransformNormal(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT2>^ XMVector2TransformNormalStream(array<DirectX::Math::XMFLOAT2>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT2>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M);
	    
        static inline bool XMVector3Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector3EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector3EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon);
        static inline bool XMVector3NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector3GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector3GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector3InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds);

        static inline bool XMVector3IsNaN(DirectX::Math::XMVECTOR^ V);
        static inline bool XMVector3IsInfinite(DirectX::Math::XMVECTOR^ V);

        static inline DirectX::Math::XMVECTOR^ XMVector3Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector3Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector3LengthSq(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3ReciprocalLength(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3LengthEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3Length(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3NormalizeEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3Normalize(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax);
        static inline DirectX::Math::XMVECTOR^ XMVector3ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax);
        static inline DirectX::Math::XMVECTOR^ XMVector3Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal);
        static inline DirectX::Math::XMVECTOR^ XMVector3Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex);
        static inline DirectX::Math::XMVECTOR^ XMVector3RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex);
        static inline DirectX::Math::XMVECTOR^ XMVector3Orthogonal(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector3AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2);
        static inline DirectX::Math::XMVECTOR^ XMVector3AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2);
        static inline DirectX::Math::XMVECTOR^ XMVector3AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector3LinePointDistance(DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2, DirectX::Math::XMVECTOR^ Point);
        static inline void XMVector3ComponentsFromNormal(DirectX::Math::XMVECTOR^ pParallel, DirectX::Math::XMVECTOR^ pPerpendicular, DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Normal);
        static inline DirectX::Math::XMVECTOR^ XMVector3Rotate(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ RotationQuaternion);
        static inline DirectX::Math::XMVECTOR^ XMVector3InverseRotate(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ RotationQuaternion);
        static inline DirectX::Math::XMVECTOR^ XMVector3Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT4>^ XMVector3TransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M);
        static inline DirectX::Math::XMVECTOR^ XMVector3TransformCoord(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT3>^ XMVector3TransformCoordStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M);
        static inline DirectX::Math::XMVECTOR^ XMVector3TransformNormal(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT3>^ XMVector3TransformNormalStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M);
        static inline DirectX::Math::XMVECTOR^ XMVector3Project(DirectX::Math::XMVECTOR^ V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World);
        static inline array<DirectX::Math::XMFLOAT3>^ XMVector3ProjectStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream,
            unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World);
        static inline DirectX::Math::XMVECTOR^ XMVector3Unproject(DirectX::Math::XMVECTOR^ V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World);
        static inline array<DirectX::Math::XMFLOAT3>^ XMVector3UnprojectStream(array<DirectX::Math::XMFLOAT3>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT3>^ pInputStream,
            unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::Math::XMMATRIX^ Projection, DirectX::Math::XMMATRIX^ View, DirectX::Math::XMMATRIX^ World);

        static inline bool XMVector4Equal(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector4EqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4EqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector4EqualIntR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4NearEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ Epsilon);
        static inline bool XMVector4NotEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4NotEqualInt(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4Greater(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector4GreaterR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4GreaterOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline unsigned int XMVector4GreaterOrEqualR(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4Less(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4LessOrEqual(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline bool XMVector4InBounds(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ Bounds);

        static inline bool XMVector4IsNaN(DirectX::Math::XMVECTOR^ V);
        static inline bool XMVector4IsInfinite(DirectX::Math::XMVECTOR^ V);

        static inline DirectX::Math::XMVECTOR^ XMVector4Dot(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector4Cross(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2, DirectX::Math::XMVECTOR^ V3);
        static inline DirectX::Math::XMVECTOR^ XMVector4LengthSq(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4ReciprocalLengthEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4ReciprocalLength(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4LengthEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4Length(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4NormalizeEst(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4Normalize(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4ClampLength(DirectX::Math::XMVECTOR^ V, float LengthMin, float LengthMax);
        static inline DirectX::Math::XMVECTOR^ XMVector4ClampLengthV(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMVECTOR^ LengthMin, DirectX::Math::XMVECTOR^ LengthMax);
        static inline DirectX::Math::XMVECTOR^ XMVector4Reflect(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal);
        static inline DirectX::Math::XMVECTOR^ XMVector4Refract(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, float RefractionIndex);
        static inline DirectX::Math::XMVECTOR^ XMVector4RefractV(DirectX::Math::XMVECTOR^ Incident, DirectX::Math::XMVECTOR^ Normal, DirectX::Math::XMVECTOR^ RefractionIndex);
        static inline DirectX::Math::XMVECTOR^ XMVector4Orthogonal(DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMVector4AngleBetweenNormalsEst(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2);
        static inline DirectX::Math::XMVECTOR^ XMVector4AngleBetweenNormals(DirectX::Math::XMVECTOR^ N1, DirectX::Math::XMVECTOR^ N2);
        static inline DirectX::Math::XMVECTOR^ XMVector4AngleBetweenVectors(DirectX::Math::XMVECTOR^ V1, DirectX::Math::XMVECTOR^ V2);
        static inline DirectX::Math::XMVECTOR^ XMVector4Transform(DirectX::Math::XMVECTOR^ V, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT4>^ XMVector4TransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT4>^ pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::Math::XMMATRIX^ M);

        static inline bool XMMatrixIsNaN(DirectX::Math::XMMATRIX^ M);
        static inline bool XMMatrixIsInfinite(DirectX::Math::XMMATRIX^ M);
        static inline bool XMMatrixIsIdentity(DirectX::Math::XMMATRIX^ M);

        static inline DirectX::Math::XMMATRIX^ XMMatrixMultiply(DirectX::Math::XMMATRIX^ M1, DirectX::Math::XMMATRIX^ M2);
        static inline DirectX::Math::XMMATRIX^ XMMatrixMultiplyTranspose(DirectX::Math::XMMATRIX^ M1, DirectX::Math::XMMATRIX^ M2);
        static inline DirectX::Math::XMMATRIX^ XMMatrixTranspose(DirectX::Math::XMMATRIX^ M);
        static inline DirectX::Math::XMMATRIX^ XMMatrixInverse(DirectX::Math::XMVECTOR^ pDeterminant, DirectX::Math::XMMATRIX^ M);
        static inline DirectX::Math::XMVECTOR^ XMMatrixDeterminant(DirectX::Math::XMMATRIX^ M);
        static inline bool XMMatrixDecompose(DirectX::Math::XMVECTOR^ outScale, DirectX::Math::XMVECTOR^ outRotQuat, DirectX::Math::XMVECTOR^ outTrans, DirectX::Math::XMMATRIX^ M);

        static inline DirectX::Math::XMMATRIX^ XMMatrixIdentity();
        static inline DirectX::Math::XMMATRIX^ XMMatrixSet(float m00, float m01, float m02, float m03,
            float m10, float m11, float m12, float m13,
            float m20, float m21, float m22, float m23,
            float m30, float m31, float m32, float m33);
        static inline DirectX::Math::XMMATRIX^ XMMatrixTranslation(float OffsetX, float OffsetY, float OffsetZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixTranslationFromVector(DirectX::Math::XMVECTOR^ Offset);
        static inline DirectX::Math::XMMATRIX^ XMMatrixScaling(float ScaleX, float ScaleY, float ScaleZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixScalingFromVector(DirectX::Math::XMVECTOR^ Scale);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationX(float Angle);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationY(float Angle);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationZ(float Angle);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationRollPitchYaw(float Pitch, float Yaw, float Roll);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationRollPitchYawFromVector(DirectX::Math::XMVECTOR^ Angles);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationNormal(DirectX::Math::XMVECTOR^ NormalAxis, float Angle);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationAxis(DirectX::Math::XMVECTOR^ Axis, float Angle);
        static inline DirectX::Math::XMMATRIX^ XMMatrixRotationQuaternion(DirectX::Math::XMVECTOR^ Quaternion);
        static inline DirectX::Math::XMMATRIX^ XMMatrixTransformation2D(DirectX::Math::XMVECTOR^ ScalingOrigin, float ScalingOrientation, DirectX::Math::XMVECTOR^ Scaling,
            DirectX::Math::XMVECTOR^ RotationOrigin, float Rotation, DirectX::Math::XMVECTOR^ Translation);
        static inline DirectX::Math::XMMATRIX^ XMMatrixTransformation(DirectX::Math::XMVECTOR^ ScalingOrigin, DirectX::Math::XMVECTOR^ ScalingOrientationQuaternion, DirectX::Math::XMVECTOR^ Scaling,
            DirectX::Math::XMVECTOR^ RotationOrigin, DirectX::Math::XMVECTOR^ RotationQuaternion, DirectX::Math::XMVECTOR^ Translation);
        static inline DirectX::Math::XMMATRIX^ XMMatrixAffineTransformation2D(DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, float Rotation, DirectX::Math::XMVECTOR^ Translation);
        static inline DirectX::Math::XMMATRIX^ XMMatrixAffineTransformation(DirectX::Math::XMVECTOR^ Scaling, DirectX::Math::XMVECTOR^ RotationOrigin, DirectX::Math::XMVECTOR^ RotationQuaternion, DirectX::Math::XMVECTOR^ Translation);
        static inline DirectX::Math::XMMATRIX^ XMMatrixReflect(DirectX::Math::XMVECTOR^ ReflectionPlane);
        static inline DirectX::Math::XMMATRIX^ XMMatrixShadow(DirectX::Math::XMVECTOR^ ShadowPlane, DirectX::Math::XMVECTOR^ LightPosition);

        static inline DirectX::Math::XMMATRIX^ XMMatrixLookAtLH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ FocusPosition, DirectX::Math::XMVECTOR^ UpDirection);
        static inline DirectX::Math::XMMATRIX^ XMMatrixLookAtRH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ FocusPosition, DirectX::Math::XMVECTOR^ UpDirection);
        static inline DirectX::Math::XMMATRIX^ XMMatrixLookToLH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ EyeDirection, DirectX::Math::XMVECTOR^ UpDirection);
        static inline DirectX::Math::XMMATRIX^ XMMatrixLookToRH(DirectX::Math::XMVECTOR^ EyePosition, DirectX::Math::XMVECTOR^ EyeDirection, DirectX::Math::XMVECTOR^ UpDirection);
        static inline DirectX::Math::XMMATRIX^ XMMatrixPerspectiveLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixPerspectiveRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixPerspectiveFovLH(float FovAngleY, float AspectRatio, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixPerspectiveFovRH(float FovAngleY, float AspectRatio, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixPerspectiveOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixPerspectiveOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixOrthographicLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixOrthographicRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixOrthographicOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
        static inline DirectX::Math::XMMATRIX^ XMMatrixOrthographicOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
    
        static inline bool XMQuaternionEqual(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2);
        static inline bool XMQuaternionNotEqual(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2);

        static inline bool XMQuaternionIsNaN(DirectX::Math::XMVECTOR^ Q);
        static inline bool XMQuaternionIsInfinite(DirectX::Math::XMVECTOR^ Q);
        static inline bool XMQuaternionIsIdentity(DirectX::Math::XMVECTOR^ Q);

        static inline DirectX::Math::XMVECTOR^ XMQuaternionDot(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionMultiply(DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionLengthSq(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionReciprocalLength(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionLength(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionNormalizeEst(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionNormalize(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionConjugate(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionInverse(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionLn(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionExp(DirectX::Math::XMVECTOR^ Q);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionSlerp(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, float t);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionSlerpV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ T);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionSquad(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3, float t);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionSquadV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3, DirectX::Math::XMVECTOR^ T);
        static inline void XMQuaternionSquadSetup(DirectX::Math::XMVECTOR^ pA, DirectX::Math::XMVECTOR^ pB, DirectX::Math::XMVECTOR^ pC, DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ Q3);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionBaryCentric(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, float f, float g);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionBaryCentricV(DirectX::Math::XMVECTOR^ Q0, DirectX::Math::XMVECTOR^ Q1, DirectX::Math::XMVECTOR^ Q2, DirectX::Math::XMVECTOR^ F, DirectX::Math::XMVECTOR^ G);

        static inline DirectX::Math::XMVECTOR^ XMQuaternionIdentity();
        static inline DirectX::Math::XMVECTOR^ XMQuaternionRotationRollPitchYaw(float Pitch, float Yaw, float Roll);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionRotationRollPitchYawFromVector(DirectX::Math::XMVECTOR^ Angles);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionRotationNormal(DirectX::Math::XMVECTOR^ NormalAxis, float Angle);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionRotationAxis(DirectX::Math::XMVECTOR^ Axis, float Angle);
        static inline DirectX::Math::XMVECTOR^ XMQuaternionRotationMatrix(DirectX::Math::XMMATRIX^ M);

        static inline void XMQuaternionToAxisAngle([Out] DirectX::Math::XMVECTOR^ pAxis, [Out] float% pAngle, DirectX::Math::XMVECTOR^ Q);

        static inline bool XMPlaneEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2);
        static inline bool XMPlaneNearEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2, DirectX::Math::XMVECTOR^ Epsilon);
        static inline bool XMPlaneNotEqual(DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2);

        static inline bool XMPlaneIsNaN(DirectX::Math::XMVECTOR^ P);
        static inline bool XMPlaneIsInfinite(DirectX::Math::XMVECTOR^ P);

        static inline DirectX::Math::XMVECTOR^ XMPlaneDot(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMPlaneDotCoord(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMPlaneDotNormal(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ V);
        static inline DirectX::Math::XMVECTOR^ XMPlaneNormalizeEst(DirectX::Math::XMVECTOR^ P);
        static inline DirectX::Math::XMVECTOR^ XMPlaneNormalize(DirectX::Math::XMVECTOR^ P);
        static inline DirectX::Math::XMVECTOR^ XMPlaneIntersectLine(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMVECTOR^ LinePoint1, DirectX::Math::XMVECTOR^ LinePoint2);
        static inline void XMPlaneIntersectPlane(DirectX::Math::XMVECTOR^ pLinePoint1, DirectX::Math::XMVECTOR^ pLinePoint2, DirectX::Math::XMVECTOR^ P1, DirectX::Math::XMVECTOR^ P2);
        static inline DirectX::Math::XMVECTOR^ XMPlaneTransform(DirectX::Math::XMVECTOR^ P, DirectX::Math::XMMATRIX^ M);
        static inline array<DirectX::Math::XMFLOAT4>^ XMPlaneTransformStream(array<DirectX::Math::XMFLOAT4>^ pOutputStream, unsigned int OutputStride, array<DirectX::Math::XMFLOAT4>^ pInputStream, unsigned int InputStride, unsigned int PlaneCount, DirectX::Math::XMMATRIX^ M);

        static inline DirectX::Math::XMVECTOR^ XMPlaneFromPointNormal(DirectX::Math::XMVECTOR^ Point, DirectX::Math::XMVECTOR^ Normal);
        static inline DirectX::Math::XMVECTOR^ XMPlaneFromPoints(DirectX::Math::XMVECTOR^ Point1, DirectX::Math::XMVECTOR^ Point2, DirectX::Math::XMVECTOR^ Point3);

        static inline bool XMColorEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2);
        static inline bool XMColorNotEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2);
        static inline bool XMColorGreater(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2);
        static inline bool XMColorGreaterOrEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2);
        static inline bool XMColorLess(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2);
        static inline bool XMColorLessOrEqual(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2);

        static inline bool XMColorIsNaN(DirectX::Math::XMVECTOR^ C);
        static inline bool XMColorIsInfinite(DirectX::Math::XMVECTOR^ C);

        static inline DirectX::Math::XMVECTOR^ XMColorNegative(DirectX::Math::XMVECTOR^ C);
        static inline DirectX::Math::XMVECTOR^ XMColorModulate(DirectX::Math::XMVECTOR^ C1, DirectX::Math::XMVECTOR^ C2);
        static inline DirectX::Math::XMVECTOR^ XMColorAdjustSaturation(DirectX::Math::XMVECTOR^ C, float Saturation);
        static inline DirectX::Math::XMVECTOR^ XMColorAdjustContrast(DirectX::Math::XMVECTOR^ C, float Contrast);

        static inline DirectX::Math::XMVECTOR^ XMColorRGBToHSL(DirectX::Math::XMVECTOR^ rgb);
        static inline DirectX::Math::XMVECTOR^ XMColorHSLToRGB(DirectX::Math::XMVECTOR^ hsl);

        static inline DirectX::Math::XMVECTOR^ XMColorRGBToHSV(DirectX::Math::XMVECTOR^ rgb);
        static inline DirectX::Math::XMVECTOR^ XMColorHSVToRGB(DirectX::Math::XMVECTOR^ hsv);

        static inline DirectX::Math::XMVECTOR^ XMColorRGBToYUV(DirectX::Math::XMVECTOR^ rgb);
        static inline DirectX::Math::XMVECTOR^ XMColorYUVToRGB(DirectX::Math::XMVECTOR^ yuv);

        static inline DirectX::Math::XMVECTOR^ XMColorRGBToYUV_HD(DirectX::Math::XMVECTOR^ rgb);
        static inline DirectX::Math::XMVECTOR^ XMColorYUVToRGB_HD(DirectX::Math::XMVECTOR^ yuv);

        static inline DirectX::Math::XMVECTOR^ XMColorRGBToXYZ(DirectX::Math::XMVECTOR^ rgb);
        static inline DirectX::Math::XMVECTOR^ XMColorXYZToRGB(DirectX::Math::XMVECTOR^ xyz);

        static inline DirectX::Math::XMVECTOR^ XMColorXYZToSRGB(DirectX::Math::XMVECTOR^ xyz);
        static inline DirectX::Math::XMVECTOR^ XMColorSRGBToXYZ(DirectX::Math::XMVECTOR^ srgb);

        static inline DirectX::Math::XMVECTOR^ XMColorRGBToSRGB(DirectX::Math::XMVECTOR^ rgb);
        static inline DirectX::Math::XMVECTOR^ XMColorSRGBToRGB(DirectX::Math::XMVECTOR^ srgb);

        static inline bool XMVerifyCPUSupport();

        static inline DirectX::Math::XMVECTOR^ XMFresnelTerm(DirectX::Math::XMVECTOR^ CosIncidentAngle, DirectX::Math::XMVECTOR^ RefractionIndex);

        static inline bool XMScalarNearEqual(float S1, float S2, float Epsilon);
        static inline float XMScalarModAngle(float Value);

        static inline float XMScalarSin(float Value);
        static inline float XMScalarSinEst(float Value);

        static inline float XMScalarCos(float Value);
        static inline float XMScalarCosEst(float Value);

        static inline void XMScalarSinCos([Out]float% pSin, [Out] float% pCos, float Value);
        static inline void XMScalarSinCosEst([Out]float% pSin, [Out] float% pCos, float Value);

        static inline float XMScalarASin(float Value);
        static inline float XMScalarASinEst(float Value);

        static inline float XMScalarACos(float Value);
        static inline float XMScalarACosEst(float Value);

        MathProperty(g_XMSinCoefficients0)
        MathProperty(g_XMSinCoefficients1)
        MathProperty(g_XMCosCoefficients0)
        MathProperty(g_XMCosCoefficients1)
        MathProperty(g_XMTanCoefficients0)
        MathProperty(g_XMTanCoefficients1)
        MathProperty(g_XMTanCoefficients2)
        MathProperty(g_XMArcCoefficients0)
        MathProperty(g_XMArcCoefficients1)
        MathProperty(g_XMATanCoefficients0)
        MathProperty(g_XMATanCoefficients1)
        MathProperty(g_XMATanEstCoefficients0)
        MathProperty(g_XMATanEstCoefficients1)
        MathProperty(g_XMTanEstCoefficients)
        MathProperty(g_XMArcEstCoefficients)
        MathProperty(g_XMPiConstants0)
        MathProperty(g_XMIdentityR0)
        MathProperty(g_XMIdentityR1)
        MathProperty(g_XMIdentityR2)
        MathProperty(g_XMIdentityR3)
        MathProperty(g_XMNegIdentityR0)
        MathProperty(g_XMNegIdentityR1)
        MathProperty(g_XMNegIdentityR2)
        MathProperty(g_XMNegIdentityR3)
        MathProperty(g_XMNegativeZero)
        MathProperty(g_XMNegate3)
        MathProperty(g_XMMaskXY)
        MathProperty(g_XMMask3)
        MathProperty(g_XMMaskX)
        MathProperty(g_XMMaskY)
        MathProperty(g_XMMaskZ)
        MathProperty(g_XMMaskW)
        MathProperty(g_XMOne)
        MathProperty(g_XMOne3)
        MathProperty(g_XMZero)
        MathProperty(g_XMTwo)
        MathProperty(g_XMFour)
        MathProperty(g_XMSix)
        MathProperty(g_XMNegativeOne)
        MathProperty(g_XMOneHalf)
        MathProperty(g_XMNegativeOneHalf)
        MathProperty(g_XMNegativeTwoPi)
        MathProperty(g_XMNegativePi)
        MathProperty(g_XMHalfPi)
        MathProperty(g_XMPi)
        MathProperty(g_XMReciprocalPi)
        MathProperty(g_XMTwoPi)
        MathProperty(g_XMReciprocalTwoPi)
        MathProperty(g_XMEpsilon)
        MathProperty(g_XMInfinity)
        MathProperty(g_XMQNaN)
        MathProperty(g_XMQNaNTest)
        MathProperty(g_XMAbsMask)
        MathProperty(g_XMFltMin)
        MathProperty(g_XMFltMax)
        MathProperty(g_XMNegOneMask)
        MathProperty(g_XMMaskA8R8G8B8)
        MathProperty(g_XMFlipA8R8G8B8)
        MathProperty(g_XMFixAA8R8G8B8)
        MathProperty(g_XMNormalizeA8R8G8B8)
        MathProperty(g_XMMaskA2B10G10R10)
        MathProperty(g_XMFlipA2B10G10R10)
        MathProperty(g_XMFixAA2B10G10R10)
        MathProperty(g_XMNormalizeA2B10G10R10)
        MathProperty(g_XMMaskX16Y16)
        MathProperty(g_XMFlipX16Y16)
        MathProperty(g_XMFixX16Y16)
        MathProperty(g_XMNormalizeX16Y16)
        MathProperty(g_XMMaskX16Y16Z16W16)
        MathProperty(g_XMFlipX16Y16Z16W16)
        MathProperty(g_XMFixX16Y16Z16W16)
        MathProperty(g_XMNormalizeX16Y16Z16W16)
        MathProperty(g_XMNoFraction)
        MathProperty(g_XMMaskByte)
        MathProperty(g_XMNegateX)
        MathProperty(g_XMNegateY)
        MathProperty(g_XMNegateZ)
        MathProperty(g_XMNegateW)
        MathProperty(g_XMSelect0101)
        MathProperty(g_XMSelect1010)
        MathProperty(g_XMOneHalfMinusEpsilon)
        MathProperty(g_XMSelect1000)
        MathProperty(g_XMSelect1100)
        MathProperty(g_XMSelect1110)
        MathProperty(g_XMSelect1011)
        MathProperty(g_XMFixupY16)
        MathProperty(g_XMFixupY16W16)
        MathProperty(g_XMFlipY)
        MathProperty(g_XMFlipZ)
        MathProperty(g_XMFlipW)
        MathProperty(g_XMFlipYZ)
        MathProperty(g_XMFlipZW)
        MathProperty(g_XMFlipYW)
        MathProperty(g_XMMaskDec4)
        MathProperty(g_XMXorDec4)
        MathProperty(g_XMAddUDec4)
        MathProperty(g_XMAddDec4)
        MathProperty(g_XMMulDec4)
        MathProperty(g_XMMaskByte4)
        MathProperty(g_XMXorByte4)
        MathProperty(g_XMAddByte4)
        MathProperty(g_XMFixUnsigned)
        MathProperty(g_XMMaxInt)
        MathProperty(g_XMMaxUInt)
        MathProperty(g_XMUnsignedFix)
        MathProperty(g_XMsrgbScale)
        MathProperty(g_XMsrgbA)
        MathProperty(g_XMsrgbA1)
        MathProperty(g_XMExponentBias)
        MathProperty(g_XMSubnormalExponent)
        MathProperty(g_XMNumTrailing)
        MathProperty(g_XMMinNormal)
        MathProperty(g_XMNegInfinity)
        MathProperty(g_XMNegQNaN)
        MathProperty(g_XMBin128)
        MathProperty(g_XMBinNeg150)
        MathProperty(g_XM253)
        MathProperty(g_XMExpEst1)
        MathProperty(g_XMExpEst2)
        MathProperty(g_XMExpEst3)
        MathProperty(g_XMExpEst4)
        MathProperty(g_XMExpEst5)
        MathProperty(g_XMExpEst6)
        MathProperty(g_XMExpEst7)
        MathProperty(g_XMLogEst0)
        MathProperty(g_XMLogEst1)
        MathProperty(g_XMLogEst2)
        MathProperty(g_XMLogEst3)
        MathProperty(g_XMLogEst4)
        MathProperty(g_XMLogEst5)
        MathProperty(g_XMLogEst6)
        MathProperty(g_XMLogEst7)
        MathProperty(g_XMLgE)
        MathProperty(g_XMInvLgE)
        MathProperty(g_UByteMax)
        MathProperty(g_ByteMin)
        MathProperty(g_ByteMax)
        MathProperty(g_ShortMin)
        MathProperty(g_ShortMax)
        MathProperty(g_UShortMax)
    };
}

