#pragma once
#include<DirectXMath.h>


namespace DirectX
{
    namespace Math
    {
#define UMVecPropConvert(Name) inline DirectX::XMVECTOR* Name() { UMAllocVectorReturn(DirectX::Name); }
#define UMAllocVectorReturn(Func) DirectX::XMVECTOR* ptr = (DirectX::XMVECTOR*)_aligned_malloc(16U, 16); *ptr = DirectX::XMVECTOR(Func); return ptr;
        inline DirectX::XMVECTOR* XMConvertVectorIntToFloat(DirectX::XMVECTOR* VInt, unsigned int DivExponent) { UMAllocVectorReturn(DirectX::XMConvertVectorIntToFloat(*VInt, DivExponent)); }
        inline DirectX::XMVECTOR* XMConvertVectorFloatToInt(DirectX::XMVECTOR* VFloat, unsigned int MulExponent) { UMAllocVectorReturn(DirectX::XMConvertVectorFloatToInt(*VFloat, MulExponent)); }
        inline DirectX::XMVECTOR* XMConvertVectorUIntToFloat(DirectX::XMVECTOR* VUInt, unsigned int DivExponent) { UMAllocVectorReturn(DirectX::XMConvertVectorUIntToFloat(*VUInt, DivExponent)); }
        inline DirectX::XMVECTOR* XMConvertVectorFloatToUInt(DirectX::XMVECTOR* VFloat, unsigned int MulExponent) { UMAllocVectorReturn(DirectX::XMConvertVectorFloatToUInt(*VFloat, MulExponent)); }

        inline DirectX::XMVECTOR* XMVectorSetBinaryConstant(unsigned int C0, unsigned int C1, unsigned int C2, unsigned int C3) { UMAllocVectorReturn(DirectX::XMVectorSetBinaryConstant(C0, C1, C2, C3)); }
        inline DirectX::XMVECTOR* XMVectorSplatConstant(int IntConstant, unsigned int DivExponent) { UMAllocVectorReturn(DirectX::XMVectorSplatConstant(IntConstant, DivExponent)); }
        inline DirectX::XMVECTOR* XMVectorSplatConstantInt(int IntConstant) { UMAllocVectorReturn(DirectX::XMVectorSplatConstantInt(IntConstant)); }

        inline DirectX::XMVECTOR* XMLoadInt(const unsigned int* pSource) { UMAllocVectorReturn(DirectX::XMLoadInt(pSource)); }
        inline DirectX::XMVECTOR* XMLoadFloat(const float* pSource) { UMAllocVectorReturn(DirectX::XMLoadFloat(pSource)); }

        inline DirectX::XMVECTOR* XMLoadInt2(unsigned int* pSource) { UMAllocVectorReturn(DirectX::XMLoadInt2(pSource)); }
        inline DirectX::XMVECTOR* XMLoadInt2A(unsigned int* pSource) { UMAllocVectorReturn(DirectX::XMLoadInt2A(pSource)); }
        inline DirectX::XMVECTOR* XMLoadFloat2(float x, float y) { UMAllocVectorReturn(DirectX::XMLoadFloat2(new DirectX::XMFLOAT2(x, y))); }
        inline DirectX::XMVECTOR* XMLoadFloat2A(float x, float y) { UMAllocVectorReturn(DirectX::XMLoadFloat2A(new DirectX::XMFLOAT2A(x, y))); }
        inline DirectX::XMVECTOR* XMLoadSInt2(const DirectX::XMINT2* pSource) { UMAllocVectorReturn(DirectX::XMLoadSInt2(pSource)); }
        inline DirectX::XMVECTOR* XMLoadUInt2(const DirectX::XMUINT2* pSource) { UMAllocVectorReturn(DirectX::XMLoadUInt2(pSource)); }

        inline DirectX::XMVECTOR* XMLoadInt3(unsigned int* pSource) { UMAllocVectorReturn(DirectX::XMLoadInt3(pSource)); }
        inline DirectX::XMVECTOR* XMLoadInt3A(unsigned int* pSource) { UMAllocVectorReturn(DirectX::XMLoadInt3A(pSource)); }
        inline DirectX::XMVECTOR* XMLoadFloat3(float x, float y, float z) { UMAllocVectorReturn(DirectX::XMLoadFloat3(new DirectX::XMFLOAT3(x, y, z))); }
        inline DirectX::XMVECTOR* XMLoadFloat3A(float x, float y, float z) { UMAllocVectorReturn(DirectX::XMLoadFloat3A(new DirectX::XMFLOAT3A(x, y, z))); }
        inline DirectX::XMVECTOR* XMLoadSInt3(const DirectX::XMINT3* pSource) { UMAllocVectorReturn(DirectX::XMLoadSInt3(pSource)); }
        inline DirectX::XMVECTOR* XMLoadUInt3(const DirectX::XMUINT3* pSource) { UMAllocVectorReturn(DirectX::XMLoadUInt3(pSource)); }

        inline DirectX::XMVECTOR* XMLoadInt4(unsigned int* pSource) { UMAllocVectorReturn(DirectX::XMLoadInt4(pSource)); }
        inline DirectX::XMVECTOR* XMLoadInt4A(unsigned int* pSource) { UMAllocVectorReturn(DirectX::XMLoadInt4A(pSource)); }
        inline DirectX::XMVECTOR* XMLoadFloat4(float x, float y, float z, float w) { UMAllocVectorReturn(DirectX::XMLoadFloat4(new DirectX::XMFLOAT4(x, y, z, w))); }
        inline DirectX::XMVECTOR* XMLoadFloat4A(float x, float y, float z, float w) { UMAllocVectorReturn(DirectX::XMLoadFloat4A(new DirectX::XMFLOAT4A(x, y, z, w))); }
        inline DirectX::XMVECTOR* XMLoadSInt4(const DirectX::XMINT4* pSource) { UMAllocVectorReturn(DirectX::XMLoadSInt4(pSource)); }
        inline DirectX::XMVECTOR* XMLoadUInt4(const DirectX::XMUINT4* pSource) { UMAllocVectorReturn(DirectX::XMLoadUInt4(pSource)); }

        inline DirectX::XMMATRIX* XMLoadFloat3x3(DirectX::XMFLOAT3X3* mat) { return new DirectX::XMMATRIX(DirectX::XMLoadFloat3x3(mat)); }
        inline DirectX::XMMATRIX* XMLoadFloat4x3(DirectX::XMFLOAT4X3* mat) { return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x3(mat)); }
        inline DirectX::XMMATRIX* XMLoadFloat4x3A(DirectX::XMFLOAT4X3A* mat) { return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x3A(mat)); }
        inline DirectX::XMMATRIX* XMLoadFloat3x4(DirectX::XMFLOAT3X4* mat) { return new DirectX::XMMATRIX(DirectX::XMLoadFloat3x4(mat)); }
        inline DirectX::XMMATRIX* XMLoadFloat3x4A(DirectX::XMFLOAT3X4A* mat) { return new DirectX::XMMATRIX(DirectX::XMLoadFloat3x4A(mat)); }
        inline DirectX::XMMATRIX* XMLoadFloat4x4(DirectX::XMFLOAT4X4* mat) { return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x4(mat)); }
        inline DirectX::XMMATRIX* XMLoadFloat4x4A(DirectX::XMFLOAT4X4A* mat) { return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x4A(mat)); }

        inline DirectX::XMVECTOR* XMVectorZero() { UMAllocVectorReturn(DirectX::XMVectorZero()); }
        inline DirectX::XMVECTOR* XMVectorSet(float x, float y, float z, float w) { UMAllocVectorReturn(DirectX::XMVectorSet(x, y, z, w)); }
        inline DirectX::XMVECTOR* XMVectorSetInt(unsigned int x, unsigned int y, unsigned int z, unsigned int w) { UMAllocVectorReturn(DirectX::XMVectorSetInt(x, y, z, w)); }
        inline DirectX::XMVECTOR* XMVectorReplicate(float Value) { UMAllocVectorReturn(DirectX::XMVectorReplicate(Value)); }
        inline DirectX::XMVECTOR* XMVectorReplicatePtr(const float* pValue) { UMAllocVectorReturn(DirectX::XMVectorReplicatePtr(pValue)); }
        inline DirectX::XMVECTOR* XMVectorReplicateInt(unsigned int Value) { UMAllocVectorReturn(DirectX::XMVectorReplicateInt(Value)); }
        inline DirectX::XMVECTOR* XMVectorReplicateIntPtr(const unsigned int* pValue) { UMAllocVectorReturn(DirectX::XMVectorReplicateIntPtr(pValue)); }
        inline DirectX::XMVECTOR* XMVectorTrueInt() { UMAllocVectorReturn(DirectX::XMVectorTrueInt()); }
        inline DirectX::XMVECTOR* XMVectorFalseInt() { UMAllocVectorReturn(DirectX::XMVectorFalseInt()); }
        inline DirectX::XMVECTOR* XMVectorSplatX(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSplatX(*V)); }
        inline DirectX::XMVECTOR* XMVectorSplatY(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSplatY(*V)); }
        inline DirectX::XMVECTOR* XMVectorSplatZ(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSplatZ(*V)); }
        inline DirectX::XMVECTOR* XMVectorSplatW(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSplatW(*V)); }
        inline DirectX::XMVECTOR* XMVectorSplatOne() { UMAllocVectorReturn(DirectX::XMVectorSplatOne()); }
        inline DirectX::XMVECTOR* XMVectorSplatInfinity() { UMAllocVectorReturn(DirectX::XMVectorSplatInfinity()); }
        inline DirectX::XMVECTOR* XMVectorSplatQNaN() { UMAllocVectorReturn(DirectX::XMVectorSplatQNaN()); }
        inline DirectX::XMVECTOR* XMVectorSplatEpsilon() { UMAllocVectorReturn(DirectX::XMVectorSplatEpsilon()); }
        inline DirectX::XMVECTOR* XMVectorSplatSignMask() { UMAllocVectorReturn(DirectX::XMVectorSplatSignMask()); }

        inline void XMStoreInt(unsigned int* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreInt(pDestination, *V); }
        inline void XMStoreFloat(float* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreFloat(pDestination, *V); }

        inline void XMStoreInt2(unsigned int* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreInt2(pDestination, *V); }
        inline void XMStoreInt2A(unsigned int* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreInt2A(pDestination, *V); }
        inline void XMStoreFloat2(DirectX::XMFLOAT2* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreFloat2(pDestination, *V); }
        inline void XMStoreFloat2A(DirectX::XMFLOAT2A* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreFloat2A(pDestination, *V); }
        inline void XMStoreSInt2(DirectX::XMINT2* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreSInt2(pDestination, *V); }
        inline void XMStoreUInt2(DirectX::XMUINT2* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreUInt2(pDestination, *V); }

        inline void XMStoreInt3(unsigned int* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreInt3(pDestination, *V); }
        inline void XMStoreInt3A(unsigned int* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreInt3A(pDestination, *V); }
        inline void XMStoreFloat3(DirectX::XMFLOAT3* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreFloat3(pDestination, *V); }
        inline void XMStoreFloat3A(DirectX::XMFLOAT3A* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreFloat3A(pDestination, *V); }
        inline void XMStoreSInt3(DirectX::XMINT3* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreSInt3(pDestination, *V); }
        inline void XMStoreUInt3(DirectX::XMUINT3* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreUInt3(pDestination, *V); }

        inline void XMStoreInt4(unsigned int* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreInt4(pDestination, *V); }
        inline void XMStoreInt4A(unsigned int* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreInt4A(pDestination, *V); }
        inline void XMStoreFloat4(DirectX::XMFLOAT4* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreFloat4(pDestination, *V); }
        inline void XMStoreFloat4A(DirectX::XMFLOAT4A* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreFloat4A(pDestination, *V); }
        inline void XMStoreSInt4(DirectX::XMINT4* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreSInt4(pDestination, *V); }
        inline void XMStoreUInt4(DirectX::XMUINT4* pDestination, DirectX::XMVECTOR* V) { DirectX::XMStoreUInt4(pDestination, *V); }

        inline void XMStoreFloat3x3(DirectX::XMFLOAT3X3* pDestination, DirectX::XMMATRIX* M) { DirectX::XMStoreFloat3x3(pDestination, *M); }
        inline void XMStoreFloat4x3(DirectX::XMFLOAT4X3* pDestination, DirectX::XMMATRIX* M) { DirectX::XMStoreFloat4x3(pDestination, *M); }
        inline void XMStoreFloat4x3A(DirectX::XMFLOAT4X3A* pDestination, DirectX::XMMATRIX* M) { DirectX::XMStoreFloat4x3A(pDestination, *M); }
        inline void XMStoreFloat3x4(DirectX::XMFLOAT3X4* pDestination, DirectX::XMMATRIX* M) { DirectX::XMStoreFloat3x4(pDestination, *M); }
        inline void XMStoreFloat3x4A(DirectX::XMFLOAT3X4A* pDestination, DirectX::XMMATRIX* M) { DirectX::XMStoreFloat3x4(pDestination, *M); }
        inline void XMStoreFloat4x4(DirectX::XMFLOAT4X4* pDestination, DirectX::XMMATRIX* M) { DirectX::XMStoreFloat4x4(pDestination, *M); }
        inline void XMStoreFloat4x4A(DirectX::XMFLOAT4X4A* pDestination, DirectX::XMMATRIX* M) { DirectX::XMStoreFloat4x4A(pDestination, *M); }

        inline float XMVectorGetByIndex(DirectX::XMVECTOR* V, unsigned int i) { return DirectX::XMVectorGetByIndex(*V, i); }
        inline float XMVectorGetX(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetX(*V); }
        inline float XMVectorGetY(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetY(*V); }
        inline float XMVectorGetZ(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetW(*V); }
        inline float XMVectorGetW(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetZ(*V); }

        inline void XMVectorGetByIndexPtr(float* f, DirectX::XMVECTOR* V, unsigned int i) { DirectX::XMVectorGetByIndexPtr(f, *V, i); }
        inline void XMVectorGetXPtr(float* x, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetXPtr(x, *V); }
        inline void XMVectorGetYPtr(float* y, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetYPtr(y, *V); }
        inline void XMVectorGetZPtr(float* z, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetZPtr(z, *V); }
        inline void XMVectorGetWPtr(float* w, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetWPtr(w, *V); }

        inline unsigned int XMVectorGetIntByIndex(DirectX::XMVECTOR* V, unsigned int i) { return DirectX::XMVectorGetIntByIndex(*V, i); }
        inline unsigned int XMVectorGetIntX(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntX(*V); }
        inline unsigned int XMVectorGetIntY(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntY(*V); }
        inline unsigned int XMVectorGetIntZ(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntZ(*V); }
        inline unsigned int XMVectorGetIntW(DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntW(*V); }

        inline void XMVectorGetIntByIndexPtr(unsigned int* f, DirectX::XMVECTOR* V, unsigned int i) { DirectX::XMVectorGetIntByIndexPtr(f, *V, i); }
        inline void XMVectorGetIntXPtr(unsigned int* x, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntXPtr(x, *V); }
        inline void XMVectorGetIntYPtr(unsigned int* y, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntYPtr(y, *V); }
        inline void XMVectorGetIntZPtr(unsigned int* z, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntZPtr(z, *V); }
        inline void XMVectorGetIntWPtr(unsigned int* w, DirectX::XMVECTOR* V) { return DirectX::XMVectorGetIntWPtr(w, *V); }

        inline DirectX::XMVECTOR* XMVectorSetByIndex(DirectX::XMVECTOR* V, float f, unsigned int i) { UMAllocVectorReturn(DirectX::XMVectorSetByIndex(*V, f, i)); }
        inline DirectX::XMVECTOR* XMVectorSetX(DirectX::XMVECTOR* V, float x) { UMAllocVectorReturn(DirectX::XMVectorSetX(*V, x)); }
        inline DirectX::XMVECTOR* XMVectorSetY(DirectX::XMVECTOR* V, float y) { UMAllocVectorReturn(DirectX::XMVectorSetY(*V, y)); }
        inline DirectX::XMVECTOR* XMVectorSetZ(DirectX::XMVECTOR* V, float z) { UMAllocVectorReturn(DirectX::XMVectorSetZ(*V, z)); }
        inline DirectX::XMVECTOR* XMVectorSetW(DirectX::XMVECTOR* V, float w) { UMAllocVectorReturn(DirectX::XMVectorSetW(*V, w)); }

        inline DirectX::XMVECTOR* XMVectorSetByIndexPtr(DirectX::XMVECTOR* V, float* f, unsigned int i) { UMAllocVectorReturn(DirectX::XMVectorSetByIndexPtr(*V, f, i)); }
        inline DirectX::XMVECTOR* XMVectorSetXPtr(DirectX::XMVECTOR* V, float* x) { UMAllocVectorReturn(DirectX::XMVectorSetXPtr(*V, x)); }
        inline DirectX::XMVECTOR* XMVectorSetYPtr(DirectX::XMVECTOR* V, float* y) { UMAllocVectorReturn(DirectX::XMVectorSetYPtr(*V, y)); }
        inline DirectX::XMVECTOR* XMVectorSetZPtr(DirectX::XMVECTOR* V, float* z) { UMAllocVectorReturn(DirectX::XMVectorSetZPtr(*V, z)); }
        inline DirectX::XMVECTOR* XMVectorSetWPtr(DirectX::XMVECTOR* V, float* w) { UMAllocVectorReturn(DirectX::XMVectorSetWPtr(*V, w)); }

        inline DirectX::XMVECTOR* XMVectorSetIntByIndex(DirectX::XMVECTOR* V, unsigned int f, unsigned int i) { UMAllocVectorReturn(DirectX::XMVectorSetIntByIndex(*V, f, i)); }
        inline DirectX::XMVECTOR* XMVectorSetIntX(DirectX::XMVECTOR* V, unsigned int x) { UMAllocVectorReturn(DirectX::XMVectorSetIntX(*V, x)); }
        inline DirectX::XMVECTOR* XMVectorSetIntY(DirectX::XMVECTOR* V, unsigned int y) { UMAllocVectorReturn(DirectX::XMVectorSetIntY(*V, y)); }
        inline DirectX::XMVECTOR* XMVectorSetIntZ(DirectX::XMVECTOR* V, unsigned int z) { UMAllocVectorReturn(DirectX::XMVectorSetIntZ(*V, z)); }
        inline DirectX::XMVECTOR* XMVectorSetIntW(DirectX::XMVECTOR* V, unsigned int w) { UMAllocVectorReturn(DirectX::XMVectorSetIntW(*V, w)); }

        inline DirectX::XMVECTOR* XMVectorSetIntByIndexPtr(DirectX::XMVECTOR* V, const unsigned int* f, unsigned int i) { UMAllocVectorReturn(DirectX::XMVectorSetIntByIndexPtr(*V, f, i)); }
        inline DirectX::XMVECTOR* XMVectorSetIntXPtr(DirectX::XMVECTOR* V, const unsigned int* x) { UMAllocVectorReturn(DirectX::XMVectorSetIntXPtr(*V, x)); }
        inline DirectX::XMVECTOR* XMVectorSetIntYPtr(DirectX::XMVECTOR* V, const unsigned int* y) { UMAllocVectorReturn(DirectX::XMVectorSetIntYPtr(*V, y)); }
        inline DirectX::XMVECTOR* XMVectorSetIntZPtr(DirectX::XMVECTOR* V, const unsigned int* z) { UMAllocVectorReturn(DirectX::XMVectorSetIntZPtr(*V, z)); }
        inline DirectX::XMVECTOR* XMVectorSetIntWPtr(DirectX::XMVECTOR* V, const unsigned int* w) { UMAllocVectorReturn(DirectX::XMVectorSetIntWPtr(*V, w)); }
	
        inline DirectX::XMVECTOR* XMVectorSwizzle(DirectX::XMVECTOR* V, unsigned int E0, unsigned int E1, unsigned int E2, unsigned int E3) { UMAllocVectorReturn(DirectX::XMVectorSwizzle(*V, E0, E1, E2, E3)); }
        inline DirectX::XMVECTOR* XMVectorPermute(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, unsigned int PermuteX, unsigned int PermuteY, unsigned int PermuteZ, unsigned int PermuteW) { UMAllocVectorReturn(DirectX::XMVectorPermute(*V1, *V2, PermuteX, PermuteY, PermuteZ, PermuteW)); }
        inline DirectX::XMVECTOR* XMVectorSelectControl(unsigned int VectorIndex0, unsigned int VectorIndex1, unsigned int VectorIndex2, unsigned int VectorIndex3) { UMAllocVectorReturn(DirectX::XMVectorSelectControl(VectorIndex0, VectorIndex1, VectorIndex2, VectorIndex3)); }
        inline DirectX::XMVECTOR* XMVectorSelect(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Control) { UMAllocVectorReturn(DirectX::XMVectorSelect(*V1, *V2, *Control)); }
        inline DirectX::XMVECTOR* XMVectorMergeXY(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorMergeXY(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorMergeZW(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorMergeZW(*V1, *V2)); }

        inline DirectX::XMVECTOR* XMVectorShiftLeft(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, unsigned int Elements) { UMAllocVectorReturn(DirectX::XMVectorShiftLeft(*V1, *V2, Elements)); }
        inline DirectX::XMVECTOR* XMVectorRotateLeft(DirectX::XMVECTOR* V, unsigned int Elements) { UMAllocVectorReturn(DirectX::XMVectorRotateLeft(*V, Elements)); }
        inline DirectX::XMVECTOR* XMVectorRotateRight(DirectX::XMVECTOR* V, unsigned int Elements) { UMAllocVectorReturn(DirectX::XMVectorRotateRight(*V, Elements)); }
        inline DirectX::XMVECTOR* XMVectorInsert(DirectX::XMVECTOR* VD, DirectX::XMVECTOR* VS, unsigned int VSLeftRotateElements,
            unsigned int Select0, unsigned int Select1, unsigned int Select2, unsigned int Select3)
        {
            UMAllocVectorReturn(DirectX::XMVectorInsert(*VD, *VS, VSLeftRotateElements, Select0, Select1, Select2, Select3));
        }

        inline DirectX::XMVECTOR* XMVectorEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorEqual(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorEqualR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorEqualR(pCR, *V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorEqualInt(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorEqualIntR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorEqualIntR(pCR, *V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorNearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon) { UMAllocVectorReturn(DirectX::XMVectorNearEqual(*V1, *V2, *Epsilon)); }
        inline DirectX::XMVECTOR* XMVectorNotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorNotEqual(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorNotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorNotEqualInt(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorGreater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorGreater(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorGreaterR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorGreaterR(pCR, *V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorGreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorGreaterOrEqual(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorGreaterOrEqualR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorGreaterOrEqualR(pCR, *V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorLess(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorLess(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorLessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorLessOrEqual(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorInBounds(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorInBounds(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorInBoundsR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorInBoundsR(pCR, *V1, *V2)); }

        inline DirectX::XMVECTOR* XMVectorIsNaN(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorIsNaN(*V)); }
        inline DirectX::XMVECTOR* XMVectorIsInfinite(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorIsInfinite(*V)); }

        inline DirectX::XMVECTOR* XMVectorMin(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorMin(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorMax(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorMax(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorRound(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorRound(*V)); }
        inline DirectX::XMVECTOR* XMVectorTruncate(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorTruncate(*V)); }
        inline DirectX::XMVECTOR* XMVectorFloor(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorFloor(*V)); }
        inline DirectX::XMVECTOR* XMVectorCeiling(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorCeiling(*V)); }
        inline DirectX::XMVECTOR* XMVectorClamp(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Min, DirectX::XMVECTOR* Max) { UMAllocVectorReturn(DirectX::XMVectorClamp(*V, *Min, *Max)); }
        inline DirectX::XMVECTOR* XMVectorSaturate(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSaturate(*V)); }

        inline DirectX::XMVECTOR* XMVectorAndInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorAndInt(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorAndCInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorAndCInt(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorOrInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorOrInt(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorNorInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorNorInt(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorXorInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorXorInt(*V1, *V2)); }

        inline DirectX::XMVECTOR* XMVectorNegate(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorNegate(*V)); }
        inline DirectX::XMVECTOR* XMVectorAdd(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorAdd(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorSum(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSum(*V)); }
        inline DirectX::XMVECTOR* XMVectorAddAngles(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorAddAngles(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorSubtract(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorSubtract(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorSubtractAngles(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorSubtractAngles(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorMultiply(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorMultiply(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorMultiplyAdd(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* V3) { UMAllocVectorReturn(DirectX::XMVectorMultiplyAdd(*V1, *V2, *V3)); }
        inline DirectX::XMVECTOR* XMVectorDivide(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorDivide(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorNegativeMultiplySubtract(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* V3) { UMAllocVectorReturn(DirectX::XMVectorNegativeMultiplySubtract(*V1, *V2, *V3)); }
        inline DirectX::XMVECTOR* XMVectorScale(DirectX::XMVECTOR* V, float ScaleFactor) { UMAllocVectorReturn(DirectX::XMVectorScale(*V, ScaleFactor)); }
        inline DirectX::XMVECTOR* XMVectorReciprocalEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorReciprocalEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorReciprocal(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorReciprocal(*V)); }
        inline DirectX::XMVECTOR* XMVectorSqrtEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSqrtEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorSqrt(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSqrt(*V)); }
        inline DirectX::XMVECTOR* XMVectorReciprocalSqrtEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorReciprocalSqrtEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorReciprocalSqrt(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorReciprocalSqrt(*V)); }
        inline DirectX::XMVECTOR* XMVectorExp2(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorExp2(*V)); }
        inline DirectX::XMVECTOR* XMVectorExpE(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorExpE(*V)); }
        inline DirectX::XMVECTOR* XMVectorExp(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorExp(*V)); }
        inline DirectX::XMVECTOR* XMVectorLog2(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorLog2(*V)); }
        inline DirectX::XMVECTOR* XMVectorLogE(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorLogE(*V)); }
        inline DirectX::XMVECTOR* XMVectorLog(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorLog(*V)); }
        inline DirectX::XMVECTOR* XMVectorPow(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorPow(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorAbs(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorAbs(*V)); }
        inline DirectX::XMVECTOR* XMVectorMod(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVectorMod(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVectorModAngles(DirectX::XMVECTOR* Angles) { UMAllocVectorReturn(DirectX::XMVectorModAngles(*Angles)); }
        inline DirectX::XMVECTOR* XMVectorSin(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSin(*V)); }
        inline DirectX::XMVECTOR* XMVectorSinEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSinEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorCos(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorCos(*V)); }
        inline DirectX::XMVECTOR* XMVectorCosEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorCosEst(*V)); }
        inline void XMVectorSinCos(DirectX::XMVECTOR* pSin, DirectX::XMVECTOR* pCos, DirectX::XMVECTOR* V) { DirectX::XMVectorSinCos(pSin, pCos, *V); }
        inline void XMVectorSinCosEst(DirectX::XMVECTOR* pSin, DirectX::XMVECTOR* pCos, DirectX::XMVECTOR* V) { DirectX::XMVectorSinCosEst(pSin, pCos, *V); }
        inline DirectX::XMVECTOR* XMVectorTan(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorTan(*V)); }
        inline DirectX::XMVECTOR* XMVectorTanEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorTanEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorSinH(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorSinH(*V)); }
        inline DirectX::XMVECTOR* XMVectorCosH(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorCosH(*V)); }
        inline DirectX::XMVECTOR* XMVectorTanH(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorTanH(*V)); }
        inline DirectX::XMVECTOR* XMVectorASin(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorASin(*V)); }
        inline DirectX::XMVECTOR* XMVectorASinEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorASinEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorACos(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorACos(*V)); }
        inline DirectX::XMVECTOR* XMVectorACosEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorACosEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorATan(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorATan(*V)); }
        inline DirectX::XMVECTOR* XMVectorATanEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVectorATanEst(*V)); }
        inline DirectX::XMVECTOR* XMVectorATan2(DirectX::XMVECTOR* Y, DirectX::XMVECTOR* X) { UMAllocVectorReturn(DirectX::XMVectorATan2(*Y, *X)); }
        inline DirectX::XMVECTOR* XMVectorATan2Est(DirectX::XMVECTOR* Y, DirectX::XMVECTOR* X) { UMAllocVectorReturn(DirectX::XMVectorATan2Est(*Y, *X)); }
        inline DirectX::XMVECTOR* XMVectorLerp(DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, float t) { UMAllocVectorReturn(DirectX::XMVectorLerp(*V0, *V1, t)); }
        inline DirectX::XMVECTOR* XMVectorLerpV(DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* T) { UMAllocVectorReturn(DirectX::XMVectorLerpV(*V0, *V1, *T)); }
        inline DirectX::XMVECTOR* XMVectorHermite(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Tangent0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Tangent1, float t) { UMAllocVectorReturn(DirectX::XMVectorHermite(*Position0, *Tangent0, *Position1, *Tangent1, t)); }
        inline DirectX::XMVECTOR* XMVectorHermiteV(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Tangent0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Tangent1, DirectX::XMVECTOR* T) { UMAllocVectorReturn(DirectX::XMVectorHermiteV(*Position0, *Tangent0, *Position1, *Tangent1, *T)); }
        inline DirectX::XMVECTOR* XMVectorCatmullRom(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, DirectX::XMVECTOR* Position3, float t) { UMAllocVectorReturn(DirectX::XMVectorCatmullRom(*Position0, *Position1, *Position2, *Position3, t)); }
        inline DirectX::XMVECTOR* XMVectorCatmullRomV(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, DirectX::XMVECTOR* Position3, DirectX::XMVECTOR* T) { UMAllocVectorReturn(DirectX::XMVectorCatmullRomV(*Position0, *Position1, *Position2, *Position3, *T)); }
        inline DirectX::XMVECTOR* XMVectorBaryCentric(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, float f, float g) { UMAllocVectorReturn(DirectX::XMVectorBaryCentric(*Position0, *Position1, *Position2, f, g)); }
        inline DirectX::XMVECTOR* XMVectorBaryCentricV(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, DirectX::XMVECTOR* F, DirectX::XMVECTOR* G) { UMAllocVectorReturn(DirectX::XMVectorBaryCentricV(*Position0, *Position1, *Position2, *F, *G)); }
        
        inline bool XMVector2Equal(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2Equal(*V1, *V2); }
        inline unsigned int XMVector2EqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2EqualR(*V1, *V2); }
        inline bool XMVector2EqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2EqualInt(*V1, *V2); }
        inline unsigned int XMVector2EqualIntR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2EqualIntR(*V1, *V2); }
        inline bool XMVector2NearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon) { return DirectX::XMVector2NearEqual(*V1, *V2, *Epsilon); }
        inline bool XMVector2NotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2NotEqual(*V1, *V2); }
        inline bool XMVector2NotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2NotEqualInt(*V1, *V2); }
        inline bool XMVector2Greater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2Greater(*V1, *V2); }
        inline unsigned int XMVector2GreaterR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2GreaterR(*V1, *V2); }
        inline bool XMVector2GreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2GreaterOrEqual(*V1, *V2); }
        inline unsigned int XMVector2GreaterOrEqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2GreaterOrEqualR(*V1, *V2); }
        inline bool XMVector2Less(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2Less(*V1, *V2); }
        inline bool XMVector2LessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector2LessOrEqual(*V1, *V2); }
        inline bool XMVector2InBounds(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Bounds) { return DirectX::XMVector2InBounds(*V, *Bounds); }

        inline bool XMVector2IsNaN(DirectX::XMVECTOR* V) { return DirectX::XMVector2IsNaN(*V); }
        inline bool XMVector2IsInfinite(DirectX::XMVECTOR* V) { return DirectX::XMVector2IsInfinite(*V); }

        inline DirectX::XMVECTOR* XMVector2Dot(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector2Dot(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector2Cross(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector2Cross(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector2LengthSq(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2LengthSq(*V)); }
        inline DirectX::XMVECTOR* XMVector2ReciprocalLengthEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2ReciprocalLengthEst(*V)); }
        inline DirectX::XMVECTOR* XMVector2ReciprocalLength(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2ReciprocalLength(*V)); }
        inline DirectX::XMVECTOR* XMVector2LengthEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2LengthEst(*V)); }
        inline DirectX::XMVECTOR* XMVector2Length(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2Length(*V)); }
        inline DirectX::XMVECTOR* XMVector2NormalizeEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2NormalizeEst(*V)); }
        inline DirectX::XMVECTOR* XMVector2Normalize(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2Normalize(*V)); }
        inline DirectX::XMVECTOR* XMVector2ClampLength(DirectX::XMVECTOR* V, float LengthMin, float LengthMax) { UMAllocVectorReturn(DirectX::XMVector2ClampLength(*V, LengthMin, LengthMax)); }
        inline DirectX::XMVECTOR* XMVector2ClampLengthV(DirectX::XMVECTOR* V, DirectX::XMVECTOR* LengthMin, DirectX::XMVECTOR* LengthMax) { UMAllocVectorReturn(DirectX::XMVector2ClampLengthV(*V, *LengthMin, *LengthMax)); }
        inline DirectX::XMVECTOR* XMVector2Reflect(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal) { UMAllocVectorReturn(DirectX::XMVector2Reflect(*Incident, *Normal)); }
        inline DirectX::XMVECTOR* XMVector2Refract(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, float RefractionIndex) { UMAllocVectorReturn(DirectX::XMVector2Refract(*Incident, *Normal, RefractionIndex)); }
        inline DirectX::XMVECTOR* XMVector2RefractV(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, DirectX::XMVECTOR* RefractionIndex) { UMAllocVectorReturn(DirectX::XMVector2RefractV(*Incident, *Normal, *RefractionIndex)); }
        inline DirectX::XMVECTOR* XMVector2Orthogonal(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector2Orthogonal(*V)); }
        inline DirectX::XMVECTOR* XMVector2AngleBetweenNormalsEst(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2) { UMAllocVectorReturn(DirectX::XMVector2AngleBetweenNormalsEst(*N1, *N2)); }
        inline DirectX::XMVECTOR* XMVector2AngleBetweenNormals(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2) { UMAllocVectorReturn(DirectX::XMVector2AngleBetweenNormals(*N1, *N2)); }
        inline DirectX::XMVECTOR* XMVector2AngleBetweenVectors(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector2AngleBetweenVectors(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector2LinePointDistance(DirectX::XMVECTOR* LinePoint1, DirectX::XMVECTOR* LinePoint2, DirectX::XMVECTOR* Point) { UMAllocVectorReturn(DirectX::XMVector2LinePointDistance(*LinePoint1, *LinePoint2, *Point)); }
        inline DirectX::XMVECTOR* XMVector2IntersectLine(DirectX::XMVECTOR* Line1Point1, DirectX::XMVECTOR* Line1Point2, DirectX::XMVECTOR* Line2Point1, DirectX::XMVECTOR* Line2Point2) { UMAllocVectorReturn(DirectX::XMVector2IntersectLine(*Line1Point1, *Line1Point2, *Line2Point1, *Line2Point2)); }
        inline DirectX::XMVECTOR* XMVector2Transform(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMVector2Transform(*V, *M)); }
        inline DirectX::XMFLOAT4* XMVector2TransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, const XMFLOAT2* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M) { return DirectX::XMVector2TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M); }
        inline DirectX::XMVECTOR* XMVector2TransformCoord(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMVector2TransformCoord(*V, *M)); }
        inline DirectX::XMFLOAT2* XMVector2TransformCoordStream(DirectX::XMFLOAT2* pOutputStream, unsigned int OutputStride, const XMFLOAT2* pInputStream, unsigned int InputStride,  unsigned int VectorCount, DirectX::XMMATRIX* M) { return DirectX::XMVector2TransformCoordStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M); }
        inline DirectX::XMVECTOR* XMVector2TransformNormal(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMVector2TransformNormal(*V, *M)); }
        inline DirectX::XMFLOAT2* XMVector2TransformNormalStream(DirectX::XMFLOAT2* pOutputStream, unsigned int OutputStride, const XMFLOAT2* pInputStream, unsigned int InputStride,  unsigned int VectorCount, DirectX::XMMATRIX* M) { return DirectX::XMVector2TransformNormalStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M); }

        inline bool XMVector3Equal(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3Equal(*V1, *V2); }
        inline unsigned int XMVector3EqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3EqualR(*V1, *V2); }
        inline bool XMVector3EqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3EqualInt(*V1, *V2); }
        inline unsigned int XMVector3EqualIntR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3EqualIntR(*V1, *V2); }
        inline bool XMVector3NearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon) { return DirectX::XMVector3NearEqual(*V1, *V2, *Epsilon); }
        inline bool XMVector3NotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3NotEqual(*V1, *V2); }
        inline bool XMVector3NotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3NotEqualInt(*V1, *V2); }
        inline bool XMVector3Greater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3Greater(*V1, *V2); }
        inline unsigned int XMVector3GreaterR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3GreaterR(*V1, *V2); }
        inline bool XMVector3GreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3GreaterOrEqual(*V1, *V2); }
        inline unsigned int XMVector3GreaterOrEqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3GreaterOrEqualR(*V1, *V2); }
        inline bool XMVector3Less(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3Less(*V1, *V2); }
        inline bool XMVector3LessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector3LessOrEqual(*V1, *V2); }
        inline bool XMVector3InBounds(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Bounds) { return DirectX::XMVector3InBounds(*V, *Bounds); }

        inline bool XMVector3IsNaN(DirectX::XMVECTOR* V) { return DirectX::XMVector3IsNaN(*V); }
        inline bool XMVector3IsInfinite(DirectX::XMVECTOR* V) { return DirectX::XMVector3IsInfinite(*V); }

        inline DirectX::XMVECTOR* XMVector3Dot(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector3Dot(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector3Cross(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector3Cross(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector3LengthSq(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3LengthSq(*V)); }
        inline DirectX::XMVECTOR* XMVector3ReciprocalLengthEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3ReciprocalLengthEst(*V)); }
        inline DirectX::XMVECTOR* XMVector3ReciprocalLength(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3ReciprocalLength(*V)); }
        inline DirectX::XMVECTOR* XMVector3LengthEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3LengthEst(*V)); }
        inline DirectX::XMVECTOR* XMVector3Length(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3Length(*V)); }
        inline DirectX::XMVECTOR* XMVector3NormalizeEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3NormalizeEst(*V)); }
        inline DirectX::XMVECTOR* XMVector3Normalize(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3Normalize(*V)); }
        inline DirectX::XMVECTOR* XMVector3ClampLength(DirectX::XMVECTOR* V, float LengthMin, float LengthMax) { UMAllocVectorReturn(DirectX::XMVector3ClampLength(*V, LengthMin, LengthMax)); }
        inline DirectX::XMVECTOR* XMVector3ClampLengthV(DirectX::XMVECTOR* V, DirectX::XMVECTOR* LengthMin, DirectX::XMVECTOR* LengthMax) { UMAllocVectorReturn(DirectX::XMVector3ClampLengthV(*V, *LengthMin, *LengthMax)); }
        inline DirectX::XMVECTOR* XMVector3Reflect(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal) { UMAllocVectorReturn(DirectX::XMVector3Reflect(*Incident, *Normal)); }
        inline DirectX::XMVECTOR* XMVector3Refract(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, float RefractionIndex) { UMAllocVectorReturn(DirectX::XMVector3Refract(*Incident, *Normal, RefractionIndex)); }
        inline DirectX::XMVECTOR* XMVector3RefractV(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, DirectX::XMVECTOR* RefractionIndex) { UMAllocVectorReturn(DirectX::XMVector3RefractV(*Incident, *Normal, *RefractionIndex)); }
        inline DirectX::XMVECTOR* XMVector3Orthogonal(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector3Orthogonal(*V)); }
        inline DirectX::XMVECTOR* XMVector3AngleBetweenNormalsEst(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2) { UMAllocVectorReturn(DirectX::XMVector3AngleBetweenNormalsEst(*N1, *N2)); }
        inline DirectX::XMVECTOR* XMVector3AngleBetweenNormals(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2) { UMAllocVectorReturn(DirectX::XMVector3AngleBetweenNormals(*N1, *N2)); }
        inline DirectX::XMVECTOR* XMVector3AngleBetweenVectors(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector3AngleBetweenVectors(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector3LinePointDistance(DirectX::XMVECTOR* LinePoint1, DirectX::XMVECTOR* LinePoint2, DirectX::XMVECTOR* Point) { UMAllocVectorReturn(DirectX::XMVector3LinePointDistance(*LinePoint1, *LinePoint2, *Point)); }
        inline void XMVector3ComponentsFromNormal(DirectX::XMVECTOR* pParallel, DirectX::XMVECTOR* pPerpendicular, DirectX::XMVECTOR* V, DirectX::XMVECTOR* Normal) { DirectX::XMVector3ComponentsFromNormal(pParallel, pPerpendicular, *V, *Normal); }
        inline DirectX::XMVECTOR* XMVector3Rotate(DirectX::XMVECTOR* V, DirectX::XMVECTOR* RotationQuaternion) { UMAllocVectorReturn(DirectX::XMVector3Rotate(*V, *RotationQuaternion)); }
        inline DirectX::XMVECTOR* XMVector3InverseRotate(DirectX::XMVECTOR* V, DirectX::XMVECTOR* RotationQuaternion) { UMAllocVectorReturn(DirectX::XMVector3InverseRotate(*V, *RotationQuaternion)); }
        inline DirectX::XMVECTOR* XMVector3Transform(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMVector3Transform(*V, *M)); }
        inline DirectX::XMFLOAT4* XMVector3TransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, const XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M) { return DirectX::XMVector3TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M); }
        inline DirectX::XMVECTOR* XMVector3TransformCoord(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMVector3TransformCoord(*V, *M)); }
        inline DirectX::XMFLOAT3* XMVector3TransformCoordStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, const XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M) { return DirectX::XMVector3TransformCoordStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M); }
        inline DirectX::XMVECTOR* XMVector3TransformNormal(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMVector3TransformNormal(*V, *M)); }
        inline DirectX::XMFLOAT3* XMVector3TransformNormalStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, const XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M) { return DirectX::XMVector3TransformNormalStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M); }
        inline DirectX::XMVECTOR* XMVector3Project(DirectX::XMVECTOR* V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World) {
            UMAllocVectorReturn(DirectX::XMVector3Project(*V, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World));
        }
        inline DirectX::XMFLOAT3* XMVector3ProjectStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, const DirectX::XMFLOAT3* pInputStream,
            unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World) {
            return DirectX::XMVector3ProjectStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World);
        }
        inline DirectX::XMVECTOR* XMVector3Unproject(DirectX::XMVECTOR* V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World) {
            UMAllocVectorReturn(DirectX::XMVector3Unproject(*V, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World));
        }
        inline DirectX::XMFLOAT3* XMVector3UnprojectStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, const DirectX::XMFLOAT3* pInputStream,
            unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight,
            float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World) {
            return DirectX::XMVector3UnprojectStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World);
        }


        inline bool XMVector4Equal(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4Equal(*V1, *V2); }
        inline unsigned int XMVector4EqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4EqualR(*V1, *V2); }
        inline bool XMVector4EqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4EqualInt(*V1, *V2); }
        inline unsigned int XMVector4EqualIntR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4EqualIntR(*V1, *V2); }
        inline bool XMVector4NearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon) { return DirectX::XMVector4NearEqual(*V1, *V2, *Epsilon); }
        inline bool XMVector4NotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4NotEqual(*V1, *V2); }
        inline bool XMVector4NotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4NotEqualInt(*V1, *V2); }
        inline bool XMVector4Greater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4Greater(*V1, *V2); }
        inline unsigned int XMVector4GreaterR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4GreaterR(*V1, *V2); }
        inline bool XMVector4GreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4GreaterOrEqual(*V1, *V2); }
        inline unsigned int XMVector4GreaterOrEqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4GreaterOrEqualR(*V1, *V2); }
        inline bool XMVector4Less(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4Less(*V1, *V2); }
        inline bool XMVector4LessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { return DirectX::XMVector4LessOrEqual(*V1, *V2); }
        inline bool XMVector4InBounds(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Bounds) { return DirectX::XMVector4InBounds(*V, *Bounds); }

        inline bool XMVector4IsNaN(DirectX::XMVECTOR* V) { return DirectX::XMVector4IsNaN(*V); }
        inline bool XMVector4IsInfinite(DirectX::XMVECTOR* V) { return DirectX::XMVector4IsInfinite(*V); }

        inline DirectX::XMVECTOR* XMVector4Dot(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector4Dot(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector4Cross(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* V3) { UMAllocVectorReturn(DirectX::XMVector4Cross(*V1, *V2, *V3)); }
        inline DirectX::XMVECTOR* XMVector4LengthSq(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4LengthSq(*V)); }
        inline DirectX::XMVECTOR* XMVector4ReciprocalLengthEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4ReciprocalLengthEst(*V)); }
        inline DirectX::XMVECTOR* XMVector4ReciprocalLength(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4ReciprocalLength(*V)); }
        inline DirectX::XMVECTOR* XMVector4LengthEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4LengthEst(*V)); }
        inline DirectX::XMVECTOR* XMVector4Length(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4Length(*V)); }
        inline DirectX::XMVECTOR* XMVector4NormalizeEst(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4NormalizeEst(*V)); }
        inline DirectX::XMVECTOR* XMVector4Normalize(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4Normalize(*V)); }
        inline DirectX::XMVECTOR* XMVector4ClampLength(DirectX::XMVECTOR* V, float LengthMin, float LengthMax) { UMAllocVectorReturn(DirectX::XMVector4ClampLength(*V, LengthMin, LengthMax)); }
        inline DirectX::XMVECTOR* XMVector4ClampLengthV(DirectX::XMVECTOR* V, DirectX::XMVECTOR* LengthMin, DirectX::XMVECTOR* LengthMax) { UMAllocVectorReturn(DirectX::XMVector4ClampLengthV(*V, *LengthMin, *LengthMax)); }
        inline DirectX::XMVECTOR* XMVector4Reflect(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal) { UMAllocVectorReturn(DirectX::XMVector4Reflect(*Incident, *Normal)); }
        inline DirectX::XMVECTOR* XMVector4Refract(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, float RefractionIndex) { UMAllocVectorReturn(DirectX::XMVector4Refract(*Incident, *Normal, RefractionIndex)); }
        inline DirectX::XMVECTOR* XMVector4RefractV(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, DirectX::XMVECTOR* RefractionIndex) { UMAllocVectorReturn(DirectX::XMVector4RefractV(*Incident, *Normal, *RefractionIndex)); }
        inline DirectX::XMVECTOR* XMVector4Orthogonal(DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMVector4Orthogonal(*V)); }
        inline DirectX::XMVECTOR* XMVector4AngleBetweenNormalsEst(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2) { UMAllocVectorReturn(DirectX::XMVector4AngleBetweenNormalsEst(*N1, *N2)); }
        inline DirectX::XMVECTOR* XMVector4AngleBetweenNormals(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2) { UMAllocVectorReturn(DirectX::XMVector4AngleBetweenNormals(*N1, *N2)); }
        inline DirectX::XMVECTOR* XMVector4AngleBetweenVectors(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2) { UMAllocVectorReturn(DirectX::XMVector4AngleBetweenVectors(*V1, *V2)); }
        inline DirectX::XMVECTOR* XMVector4Transform(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMVector4Transform(*V, *M)); }
        inline DirectX::XMFLOAT4* XMVector4TransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, const DirectX::XMFLOAT4* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M) { return DirectX::XMVector4TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M); }

        inline bool XMMatrixIsNaN(DirectX::XMMATRIX* M) { return DirectX::XMMatrixIsNaN(*M); }
        inline bool XMMatrixIsInfinite(DirectX::XMMATRIX* M) { return DirectX::XMMatrixIsInfinite(*M); }
        inline bool XMMatrixIsIdentity(DirectX::XMMATRIX* M) { return DirectX::XMMatrixIsIdentity(*M); }

        inline DirectX::XMMATRIX* XMMatrixMultiply(DirectX::XMMATRIX* M1, DirectX::XMMATRIX* M2) { return new DirectX::XMMATRIX(DirectX::XMMatrixMultiply(*M1, *M2)); }
        inline DirectX::XMMATRIX* XMMatrixMultiplyTranspose(DirectX::XMMATRIX* M1, DirectX::XMMATRIX* M2) { return new DirectX::XMMATRIX(DirectX::XMMatrixMultiplyTranspose(*M1, *M2)); }
        inline DirectX::XMMATRIX* XMMatrixTranspose(DirectX::XMMATRIX* M) { return new DirectX::XMMATRIX(DirectX::XMMatrixTranspose(*M)); }
        inline DirectX::XMMATRIX* XMMatrixInverse(DirectX::XMVECTOR*  pDeterminant, DirectX::XMMATRIX* M) { return new DirectX::XMMATRIX(DirectX::XMMatrixInverse(pDeterminant, *M)); }
        inline DirectX::XMVECTOR*  XMMatrixDeterminant(DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMMatrixDeterminant(*M)); }
        inline bool XMMatrixDecompose(DirectX::XMVECTOR* outScale, DirectX::XMVECTOR* outRotQuat, DirectX::XMVECTOR* outTrans, DirectX::XMMATRIX* M) { return DirectX::XMMatrixDecompose(outScale, outRotQuat, outTrans, *M); }

        inline DirectX::XMMATRIX* XMMatrixIdentity() { return new DirectX::XMMATRIX(DirectX::XMMatrixIdentity()); }
        inline DirectX::XMMATRIX* XMMatrixSet(float m00, float m01, float m02, float m03,
            float m10, float m11, float m12, float m13,
            float m20, float m21, float m22, float m23,
            float m30, float m31, float m32, float m33) { return new DirectX::XMMATRIX(DirectX::XMMatrixSet(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33)); }
        inline DirectX::XMMATRIX* XMMatrixTranslation(float OffsetX, float OffsetY, float OffsetZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixTranslation(OffsetX, OffsetY, OffsetZ)); }
        inline DirectX::XMMATRIX* XMMatrixTranslationFromVector(DirectX::XMVECTOR*  Offset) { return new DirectX::XMMATRIX(DirectX::XMMatrixTranslationFromVector(*Offset)); }
        inline DirectX::XMMATRIX* XMMatrixScaling(float ScaleX, float ScaleY, float ScaleZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixScaling(ScaleX, ScaleY, ScaleZ)); }
        inline DirectX::XMMATRIX* XMMatrixScalingFromVector(DirectX::XMVECTOR* Scale) { return new DirectX::XMMATRIX(DirectX::XMMatrixScalingFromVector(*Scale)); }
        inline DirectX::XMMATRIX* XMMatrixRotationX(float Angle) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationX(Angle)); }
        inline DirectX::XMMATRIX* XMMatrixRotationY(float Angle) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationY(Angle)); }
        inline DirectX::XMMATRIX* XMMatrixRotationZ(float Angle) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationZ(Angle)); }
        inline DirectX::XMMATRIX* XMMatrixRotationRollPitchYaw(float Pitch, float Yaw, float Roll) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationRollPitchYaw(Pitch, Yaw, Roll)); }
        inline DirectX::XMMATRIX* XMMatrixRotationRollPitchYawFromVector(DirectX::XMVECTOR*  Angles) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationRollPitchYawFromVector(*Angles)); }
        inline DirectX::XMMATRIX* XMMatrixRotationNormal(DirectX::XMVECTOR*  NormalAxis, float Angle) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationNormal(*NormalAxis, Angle)); }
        inline DirectX::XMMATRIX* XMMatrixRotationAxis(DirectX::XMVECTOR*  Axis, float Angle) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationAxis(*Axis, Angle)); }
        inline DirectX::XMMATRIX* XMMatrixRotationQuaternion(DirectX::XMVECTOR*  Quaternion) { return new DirectX::XMMATRIX(DirectX::XMMatrixRotationQuaternion(*Quaternion)); }
        inline DirectX::XMMATRIX* XMMatrixTransformation2D(DirectX::XMVECTOR*  ScalingOrigin, float ScalingOrientation, DirectX::XMVECTOR*  Scaling,
            DirectX::XMVECTOR*  RotationOrigin, float Rotation, DirectX::XMVECTOR*  Translation) { return new DirectX::XMMATRIX(DirectX::XMMatrixTransformation2D(*ScalingOrigin, ScalingOrientation, *Scaling, *RotationOrigin, Rotation, *Translation)); }
        inline DirectX::XMMATRIX* XMMatrixTransformation(DirectX::XMVECTOR*  ScalingOrigin, DirectX::XMVECTOR*  ScalingOrientationQuaternion, DirectX::XMVECTOR*  Scaling,
            DirectX::XMVECTOR* RotationOrigin, DirectX::XMVECTOR* RotationQuaternion, DirectX::XMVECTOR* Translation) { return new DirectX::XMMATRIX(DirectX::XMMatrixTransformation(*ScalingOrigin, *ScalingOrientationQuaternion, *Scaling, *RotationOrigin, *RotationQuaternion, *Translation)); }
        inline DirectX::XMMATRIX* XMMatrixAffineTransformation2D(DirectX::XMVECTOR* Scaling, DirectX::XMVECTOR* RotationOrigin, float Rotation, DirectX::XMVECTOR* Translation) { return new DirectX::XMMATRIX(DirectX::XMMatrixAffineTransformation2D(*Scaling, *RotationOrigin, Rotation, *Translation)); }
        inline DirectX::XMMATRIX* XMMatrixAffineTransformation(DirectX::XMVECTOR*  Scaling, DirectX::XMVECTOR*  RotationOrigin, DirectX::XMVECTOR*  RotationQuaternion, DirectX::XMVECTOR*  Translation) { return new DirectX::XMMATRIX(DirectX::XMMatrixAffineTransformation(*Scaling, *RotationOrigin, *RotationQuaternion, *Translation)); }
        inline DirectX::XMMATRIX* XMMatrixReflect(DirectX::XMVECTOR*  ReflectionPlane) { return new DirectX::XMMATRIX(DirectX::XMMatrixReflect(*ReflectionPlane)); }
        inline DirectX::XMMATRIX* XMMatrixShadow(DirectX::XMVECTOR*  ShadowPlane, DirectX::XMVECTOR*  LightPosition) { return new DirectX::XMMATRIX(DirectX::XMMatrixShadow(*ShadowPlane, *LightPosition)); }

        inline DirectX::XMMATRIX* XMMatrixLookAtLH(DirectX::XMVECTOR*  EyePosition, DirectX::XMVECTOR*  FocusPosition, DirectX::XMVECTOR*  UpDirection) { return new DirectX::XMMATRIX(DirectX::XMMatrixLookAtLH(*EyePosition, *FocusPosition, *UpDirection)); }
        inline DirectX::XMMATRIX* XMMatrixLookAtRH(DirectX::XMVECTOR*  EyePosition, DirectX::XMVECTOR*  FocusPosition, DirectX::XMVECTOR*  UpDirection) { return new DirectX::XMMATRIX(DirectX::XMMatrixLookAtRH(*EyePosition, *FocusPosition, *UpDirection)); }
        inline DirectX::XMMATRIX* XMMatrixLookToLH(DirectX::XMVECTOR*  EyePosition, DirectX::XMVECTOR*  EyeDirection, DirectX::XMVECTOR*  UpDirection) { return new DirectX::XMMATRIX(DirectX::XMMatrixLookToLH(*EyePosition, *EyeDirection, *UpDirection)); }
        inline DirectX::XMMATRIX* XMMatrixLookToRH(DirectX::XMVECTOR*  EyePosition, DirectX::XMVECTOR*  EyeDirection, DirectX::XMVECTOR*  UpDirection) { return new DirectX::XMMATRIX(DirectX::XMMatrixLookToRH(*EyePosition, *EyeDirection, *UpDirection)); }
        inline DirectX::XMMATRIX* XMMatrixPerspectiveLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveLH(ViewWidth, ViewHeight, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixPerspectiveRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveRH(ViewWidth, ViewHeight, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixPerspectiveFovLH(float FovAngleY, float AspectRatio, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveFovLH(FovAngleY, AspectRatio, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixPerspectiveFovRH(float FovAngleY, float AspectRatio, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveFovRH(FovAngleY, AspectRatio, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixPerspectiveOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixPerspectiveOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixOrthographicLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicLH(ViewWidth, ViewHeight, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixOrthographicRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicRH(ViewWidth, ViewHeight, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixOrthographicOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ)); }
        inline DirectX::XMMATRIX* XMMatrixOrthographicOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ) { return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ)); }

        inline bool XMQuaternionEqual(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2) { return DirectX::XMQuaternionEqual(*Q1, *Q2); }
        inline bool XMQuaternionNotEqual(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2) { return DirectX::XMQuaternionNotEqual(*Q1, *Q2); }

        inline bool XMQuaternionIsNaN(DirectX::XMVECTOR* Q) { return DirectX::XMQuaternionIsNaN(*Q); }
        inline bool XMQuaternionIsInfinite(DirectX::XMVECTOR* Q) { return DirectX::XMQuaternionIsInfinite(*Q); }
        inline bool XMQuaternionIsIdentity(DirectX::XMVECTOR* Q) { return DirectX::XMQuaternionIsIdentity(*Q); }

        inline DirectX::XMVECTOR* XMQuaternionDot(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2) { UMAllocVectorReturn(DirectX::XMQuaternionDot(*Q1, *Q2)); }
        inline DirectX::XMVECTOR* XMQuaternionMultiply(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2) { UMAllocVectorReturn(DirectX::XMQuaternionMultiply(*Q1, *Q2)); }
        inline DirectX::XMVECTOR* XMQuaternionLengthSq(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionLengthSq(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionReciprocalLength(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionReciprocalLength(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionLength(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionLength(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionNormalizeEst(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionNormalizeEst(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionNormalize(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionNormalize(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionConjugate(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionConjugate(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionInverse(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionInverse(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionLn(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionLn(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionExp(DirectX::XMVECTOR* Q) { UMAllocVectorReturn(DirectX::XMQuaternionExp(*Q)); }
        inline DirectX::XMVECTOR* XMQuaternionSlerp(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, float t) { UMAllocVectorReturn(DirectX::XMQuaternionSlerp(*Q0, *Q1, t)); }
        inline DirectX::XMVECTOR* XMQuaternionSlerpV(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* T) { UMAllocVectorReturn(DirectX::XMQuaternionSlerpV(*Q0, *Q1, *T)); }
        inline DirectX::XMVECTOR* XMQuaternionSquad(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* Q3, float t) { UMAllocVectorReturn(DirectX::XMQuaternionSquad(*Q0, *Q1, *Q2, *Q3, t)); }
        inline DirectX::XMVECTOR* XMQuaternionSquadV(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* Q3, DirectX::XMVECTOR* T) { UMAllocVectorReturn(DirectX::XMQuaternionSquadV(*Q0, *Q1, *Q2, *Q3, *T)); }
        inline void XMQuaternionSquadSetup(DirectX::XMVECTOR* pA, DirectX::XMVECTOR* pB, DirectX::XMVECTOR* pC, DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* Q3) { DirectX::XMQuaternionSquadSetup(pA, pB, pC, *Q0, *Q1, *Q2, *Q3); }
        inline DirectX::XMVECTOR* XMQuaternionBaryCentric(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, float f, float g) { UMAllocVectorReturn(DirectX::XMQuaternionBaryCentric(*Q0, *Q1, *Q2, f, g)); }
        inline DirectX::XMVECTOR* XMQuaternionBaryCentricV(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* F, DirectX::XMVECTOR* G) { UMAllocVectorReturn(DirectX::XMQuaternionBaryCentricV(*Q0, *Q1, *Q2, *F, *G)); }

        inline DirectX::XMVECTOR* XMQuaternionIdentity() { UMAllocVectorReturn(DirectX::XMQuaternionIdentity()); }
        inline DirectX::XMVECTOR* XMQuaternionRotationRollPitchYaw(float Pitch, float Yaw, float Roll) { UMAllocVectorReturn(DirectX::XMQuaternionRotationRollPitchYaw(Pitch, Yaw, Roll)); }
        inline DirectX::XMVECTOR* XMQuaternionRotationRollPitchYawFromVector(DirectX::XMVECTOR* Angles) { UMAllocVectorReturn(DirectX::XMQuaternionRotationRollPitchYawFromVector(*Angles)); }
        inline DirectX::XMVECTOR* XMQuaternionRotationNormal(DirectX::XMVECTOR* NormalAxis, float Angle) { UMAllocVectorReturn(DirectX::XMQuaternionRotationNormal(*NormalAxis, Angle)); }
        inline DirectX::XMVECTOR* XMQuaternionRotationAxis(DirectX::XMVECTOR* Axis, float Angle) { UMAllocVectorReturn(DirectX::XMQuaternionRotationAxis(*Axis, Angle)); }
        inline DirectX::XMVECTOR* XMQuaternionRotationMatrix(DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMQuaternionRotationMatrix(*M)); }

        inline void XMQuaternionToAxisAngle(DirectX::XMVECTOR* pAxis, float* pAngle, DirectX::XMVECTOR* Q) { DirectX::XMQuaternionToAxisAngle(pAxis, pAngle, *Q); }

        inline bool XMPlaneEqual(DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2) { return DirectX::XMPlaneEqual(*P1, *P2); }
        inline bool XMPlaneNearEqual(DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2, DirectX::XMVECTOR* Epsilon) { return DirectX::XMPlaneNearEqual(*P1, *P2, *Epsilon); }
        inline bool XMPlaneNotEqual(DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2) { return DirectX::XMPlaneNotEqual(*P1, *P2); }

        inline bool XMPlaneIsNaN(DirectX::XMVECTOR* P) { return DirectX::XMPlaneIsNaN(*P); }
        inline bool XMPlaneIsInfinite(DirectX::XMVECTOR* P) { return DirectX::XMPlaneIsInfinite(*P); }

        inline DirectX::XMVECTOR* XMPlaneDot(DirectX::XMVECTOR* P, DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMPlaneDot(*P, *V)); }
        inline DirectX::XMVECTOR* XMPlaneDotCoord(DirectX::XMVECTOR* P, DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMPlaneDotCoord(*P, *V)); }
        inline DirectX::XMVECTOR* XMPlaneDotNormal(DirectX::XMVECTOR* P, DirectX::XMVECTOR* V) { UMAllocVectorReturn(DirectX::XMPlaneDotNormal(*P, *V)); }
        inline DirectX::XMVECTOR* XMPlaneNormalizeEst(DirectX::XMVECTOR* P) { UMAllocVectorReturn(DirectX::XMPlaneNormalizeEst(*P)); }
        inline DirectX::XMVECTOR* XMPlaneNormalize(DirectX::XMVECTOR* P) { UMAllocVectorReturn(DirectX::XMPlaneNormalize(*P)); }
        inline DirectX::XMVECTOR* XMPlaneIntersectLine(DirectX::XMVECTOR* P, DirectX::XMVECTOR* LinePoint1, DirectX::XMVECTOR* LinePoint2) { UMAllocVectorReturn(DirectX::XMPlaneIntersectLine(*P, *LinePoint1, *LinePoint2)); }
        inline void XMPlaneIntersectPlane(DirectX::XMVECTOR* pLinePoint1, DirectX::XMVECTOR* pLinePoint2, DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2) { DirectX::XMPlaneIntersectPlane(pLinePoint1, pLinePoint2, *P1, *P2); }
        inline DirectX::XMVECTOR* XMPlaneTransform(DirectX::XMVECTOR* P, DirectX::XMMATRIX* M) { UMAllocVectorReturn(DirectX::XMPlaneTransform(*P, *M)); }
        inline DirectX::XMFLOAT4* XMPlaneTransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, const DirectX::XMFLOAT4* pInputStream, unsigned int InputStride, unsigned int PlaneCount, DirectX::XMMATRIX* M) { return DirectX::XMPlaneTransformStream(pOutputStream, OutputStride, pInputStream, InputStride, PlaneCount, *M); }

        inline DirectX::XMVECTOR* XMPlaneFromPointNormal(DirectX::XMVECTOR* Point, DirectX::XMVECTOR* Normal) { UMAllocVectorReturn(DirectX::XMPlaneFromPointNormal(*Point, *Normal)); }
        inline DirectX::XMVECTOR* XMPlaneFromPoints(DirectX::XMVECTOR* Point1, DirectX::XMVECTOR* Point2, DirectX::XMVECTOR* Point3) { UMAllocVectorReturn(DirectX::XMPlaneFromPoints(*Point1, *Point2, *Point3)); }

        inline bool XMColorEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2) { return DirectX::XMColorEqual(*C1, *C2); }
        inline bool XMColorNotEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2) { return DirectX::XMColorNotEqual(*C1, *C2); }
        inline bool XMColorGreater(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2) { return DirectX::XMColorGreater(*C1, *C2); }
        inline bool XMColorGreaterOrEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2) { return DirectX::XMColorGreaterOrEqual(*C1, *C2); }
        inline bool XMColorLess(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2) { return DirectX::XMColorLess(*C1, *C2); }
        inline bool XMColorLessOrEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2) { return DirectX::XMColorLessOrEqual(*C1, *C2); }

        inline bool XMColorIsNaN(DirectX::XMVECTOR* C) { return DirectX::XMColorIsNaN(*C); }
        inline bool XMColorIsInfinite(DirectX::XMVECTOR* C) { return DirectX::XMColorIsInfinite(*C); }

        inline DirectX::XMVECTOR* XMColorNegative(DirectX::XMVECTOR* C) { UMAllocVectorReturn(DirectX::XMColorNegative(*C)); }
        inline DirectX::XMVECTOR* XMColorModulate(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2) { UMAllocVectorReturn(DirectX::XMColorModulate(*C1, *C2)); }
        inline DirectX::XMVECTOR* XMColorAdjustSaturation(DirectX::XMVECTOR* C, float Saturation) { UMAllocVectorReturn(DirectX::XMColorAdjustSaturation(*C, Saturation)); }
        inline DirectX::XMVECTOR* XMColorAdjustContrast(DirectX::XMVECTOR* C, float Contrast) { UMAllocVectorReturn(DirectX::XMColorAdjustContrast(*C, Contrast)); }

        inline DirectX::XMVECTOR* XMColorRGBToHSL(DirectX::XMVECTOR* rgb) { UMAllocVectorReturn(DirectX::XMColorRGBToHSL(*rgb)); }
        inline DirectX::XMVECTOR* XMColorHSLToRGB(DirectX::XMVECTOR* hsl) { UMAllocVectorReturn(DirectX::XMColorHSLToRGB(*hsl)); }

        inline DirectX::XMVECTOR* XMColorRGBToHSV(DirectX::XMVECTOR* rgb) { UMAllocVectorReturn(DirectX::XMColorRGBToHSV(*rgb)); }
        inline DirectX::XMVECTOR* XMColorHSVToRGB(DirectX::XMVECTOR* hsv) { UMAllocVectorReturn(DirectX::XMColorHSVToRGB(*hsv)); }

        inline DirectX::XMVECTOR* XMColorRGBToYUV(DirectX::XMVECTOR* rgb) { UMAllocVectorReturn(DirectX::XMColorRGBToYUV(*rgb)); }
        inline DirectX::XMVECTOR* XMColorYUVToRGB(DirectX::XMVECTOR* yuv) { UMAllocVectorReturn(DirectX::XMColorYUVToRGB(*yuv)); }

        inline DirectX::XMVECTOR* XMColorRGBToYUV_HD(DirectX::XMVECTOR* rgb) { UMAllocVectorReturn(DirectX::XMColorRGBToYUV_HD(*rgb)); }
        inline DirectX::XMVECTOR* XMColorYUVToRGB_HD(DirectX::XMVECTOR* yuv) { UMAllocVectorReturn(DirectX::XMColorYUVToRGB_HD(*yuv)); }

        inline DirectX::XMVECTOR* XMColorRGBToXYZ(DirectX::XMVECTOR* rgb) { UMAllocVectorReturn(DirectX::XMColorRGBToXYZ(*rgb)); }
        inline DirectX::XMVECTOR* XMColorXYZToRGB(DirectX::XMVECTOR* xyz) { UMAllocVectorReturn(DirectX::XMColorXYZToRGB(*xyz)); }

        inline DirectX::XMVECTOR* XMColorXYZToSRGB(DirectX::XMVECTOR* xyz) { UMAllocVectorReturn(DirectX::XMColorXYZToSRGB(*xyz)); }
        inline DirectX::XMVECTOR* XMColorSRGBToXYZ(DirectX::XMVECTOR* srgb) { UMAllocVectorReturn(DirectX::XMColorSRGBToXYZ(*srgb)); }

        inline DirectX::XMVECTOR* XMColorRGBToSRGB(DirectX::XMVECTOR* rgb) { UMAllocVectorReturn(DirectX::XMColorRGBToSRGB(*rgb)); }
        inline DirectX::XMVECTOR* XMColorSRGBToRGB(DirectX::XMVECTOR* srgb) { UMAllocVectorReturn(DirectX::XMColorSRGBToRGB(*srgb)); }

        inline bool XMVerifyCPUSupport() { return DirectX::XMVerifyCPUSupport(); }

        inline DirectX::XMVECTOR* XMFresnelTerm(DirectX::XMVECTOR* CosIncidentAngle, DirectX::XMVECTOR* RefractionIndex) { UMAllocVectorReturn(DirectX::XMFresnelTerm(*CosIncidentAngle, *RefractionIndex)); }

        inline bool XMScalarNearEqual(float S1, float S2, float Epsilon) { return DirectX::XMScalarNearEqual(S1, S2, Epsilon); }
        inline float XMScalarModAngle(float Value) { return DirectX::XMScalarModAngle(Value); }

        inline float XMScalarSin(float Value) { return DirectX::XMScalarSin(Value); }
        inline float XMScalarSinEst(float Value) { return DirectX::XMScalarSinEst(Value); }

        inline float XMScalarCos(float Value) { return DirectX::XMScalarCos(Value); }
        inline float XMScalarCosEst(float Value) { return DirectX::XMScalarCosEst(Value); }

        inline void XMScalarSinCos( float* pSin,  float* pCos, float Value) { DirectX::XMScalarSinCos(pSin, pCos, Value); }
        inline void XMScalarSinCosEst( float* pSin,  float* pCos, float Value) { DirectX::XMScalarSinCosEst(pSin, pCos, Value); }

        inline float XMScalarASin(float Value) { return DirectX::XMScalarASin(Value); }
        inline float XMScalarASinEst(float Value) { return DirectX::XMScalarASinEst(Value); }

        inline float XMScalarACos(float Value) { return DirectX::XMScalarACos(Value); }
        inline float XMScalarACosEst(float Value) { return DirectX::XMScalarACosEst(Value); }

        UMVecPropConvert(g_XMSinCoefficients0)
        UMVecPropConvert(g_XMSinCoefficients1)
        UMVecPropConvert(g_XMCosCoefficients0)
        UMVecPropConvert(g_XMCosCoefficients1)
        UMVecPropConvert(g_XMTanCoefficients0)
        UMVecPropConvert(g_XMTanCoefficients1)
        UMVecPropConvert(g_XMTanCoefficients2)
        UMVecPropConvert(g_XMArcCoefficients0)
        UMVecPropConvert(g_XMArcCoefficients1)
        UMVecPropConvert(g_XMATanCoefficients0)
        UMVecPropConvert(g_XMATanCoefficients1)
        UMVecPropConvert(g_XMATanEstCoefficients0)
        UMVecPropConvert(g_XMATanEstCoefficients1)
        UMVecPropConvert(g_XMTanEstCoefficients)
        UMVecPropConvert(g_XMArcEstCoefficients)
        UMVecPropConvert(g_XMPiConstants0)
        UMVecPropConvert(g_XMIdentityR0)
        UMVecPropConvert(g_XMIdentityR1)
        UMVecPropConvert(g_XMIdentityR2)
        UMVecPropConvert(g_XMIdentityR3)
        UMVecPropConvert(g_XMNegIdentityR0)
        UMVecPropConvert(g_XMNegIdentityR1)
        UMVecPropConvert(g_XMNegIdentityR2)
        UMVecPropConvert(g_XMNegIdentityR3)
        UMVecPropConvert(g_XMNegativeZero)
        UMVecPropConvert(g_XMNegate3)
        UMVecPropConvert(g_XMMaskXY)
        UMVecPropConvert(g_XMMask3)
        UMVecPropConvert(g_XMMaskX)
        UMVecPropConvert(g_XMMaskY)
        UMVecPropConvert(g_XMMaskZ)
        UMVecPropConvert(g_XMMaskW)
        UMVecPropConvert(g_XMOne)
        UMVecPropConvert(g_XMOne3)
        UMVecPropConvert(g_XMZero)
        UMVecPropConvert(g_XMTwo)
        UMVecPropConvert(g_XMFour)
        UMVecPropConvert(g_XMSix)
        UMVecPropConvert(g_XMNegativeOne)
        UMVecPropConvert(g_XMOneHalf)
        UMVecPropConvert(g_XMNegativeOneHalf)
        UMVecPropConvert(g_XMNegativeTwoPi)
        UMVecPropConvert(g_XMNegativePi)
        UMVecPropConvert(g_XMHalfPi)
        UMVecPropConvert(g_XMPi)
        UMVecPropConvert(g_XMReciprocalPi)
        UMVecPropConvert(g_XMTwoPi)
        UMVecPropConvert(g_XMReciprocalTwoPi)
        UMVecPropConvert(g_XMEpsilon)
        UMVecPropConvert(g_XMInfinity)
        UMVecPropConvert(g_XMQNaN)
        UMVecPropConvert(g_XMQNaNTest)
        UMVecPropConvert(g_XMAbsMask)
        UMVecPropConvert(g_XMFltMin)
        UMVecPropConvert(g_XMFltMax)
        UMVecPropConvert(g_XMNegOneMask)
        UMVecPropConvert(g_XMMaskA8R8G8B8)
        UMVecPropConvert(g_XMFlipA8R8G8B8)
        UMVecPropConvert(g_XMFixAA8R8G8B8)
        UMVecPropConvert(g_XMNormalizeA8R8G8B8)
        UMVecPropConvert(g_XMMaskA2B10G10R10)
        UMVecPropConvert(g_XMFlipA2B10G10R10)
        UMVecPropConvert(g_XMFixAA2B10G10R10)
        UMVecPropConvert(g_XMNormalizeA2B10G10R10)
        UMVecPropConvert(g_XMMaskX16Y16)
        UMVecPropConvert(g_XMFlipX16Y16)
        UMVecPropConvert(g_XMFixX16Y16)
        UMVecPropConvert(g_XMNormalizeX16Y16)
        UMVecPropConvert(g_XMMaskX16Y16Z16W16)
        UMVecPropConvert(g_XMFlipX16Y16Z16W16)
        UMVecPropConvert(g_XMFixX16Y16Z16W16)
        UMVecPropConvert(g_XMNormalizeX16Y16Z16W16)
        UMVecPropConvert(g_XMNoFraction)
        UMVecPropConvert(g_XMMaskByte)
        UMVecPropConvert(g_XMNegateX)
        UMVecPropConvert(g_XMNegateY)
        UMVecPropConvert(g_XMNegateZ)
        UMVecPropConvert(g_XMNegateW)
        UMVecPropConvert(g_XMSelect0101)
        UMVecPropConvert(g_XMSelect1010)
        UMVecPropConvert(g_XMOneHalfMinusEpsilon)
        UMVecPropConvert(g_XMSelect1000)
        UMVecPropConvert(g_XMSelect1100)
        UMVecPropConvert(g_XMSelect1110)
        UMVecPropConvert(g_XMSelect1011)
        UMVecPropConvert(g_XMFixupY16)
        UMVecPropConvert(g_XMFixupY16W16)
        UMVecPropConvert(g_XMFlipY)
        UMVecPropConvert(g_XMFlipZ)
        UMVecPropConvert(g_XMFlipW)
        UMVecPropConvert(g_XMFlipYZ)
        UMVecPropConvert(g_XMFlipZW)
        UMVecPropConvert(g_XMFlipYW)
        UMVecPropConvert(g_XMMaskDec4)
        UMVecPropConvert(g_XMXorDec4)
        UMVecPropConvert(g_XMAddUDec4)
        UMVecPropConvert(g_XMAddDec4)
        UMVecPropConvert(g_XMMulDec4)
        UMVecPropConvert(g_XMMaskByte4)
        UMVecPropConvert(g_XMXorByte4)
        UMVecPropConvert(g_XMAddByte4)
        UMVecPropConvert(g_XMFixUnsigned)
        UMVecPropConvert(g_XMMaxInt)
        UMVecPropConvert(g_XMMaxUInt)
        UMVecPropConvert(g_XMUnsignedFix)
        UMVecPropConvert(g_XMsrgbScale)
        UMVecPropConvert(g_XMsrgbA)
        UMVecPropConvert(g_XMsrgbA1)
        UMVecPropConvert(g_XMExponentBias)
        UMVecPropConvert(g_XMSubnormalExponent)
        UMVecPropConvert(g_XMNumTrailing)
        UMVecPropConvert(g_XMMinNormal)
        UMVecPropConvert(g_XMNegInfinity)
        UMVecPropConvert(g_XMNegQNaN)
        UMVecPropConvert(g_XMBin128)
        UMVecPropConvert(g_XMBinNeg150)
        UMVecPropConvert(g_XM253)
        UMVecPropConvert(g_XMExpEst1)
        UMVecPropConvert(g_XMExpEst2)
        UMVecPropConvert(g_XMExpEst3)
        UMVecPropConvert(g_XMExpEst4)
        UMVecPropConvert(g_XMExpEst5)
        UMVecPropConvert(g_XMExpEst6)
        UMVecPropConvert(g_XMExpEst7)
        UMVecPropConvert(g_XMLogEst0)
        UMVecPropConvert(g_XMLogEst1)
        UMVecPropConvert(g_XMLogEst2)
        UMVecPropConvert(g_XMLogEst3)
        UMVecPropConvert(g_XMLogEst4)
        UMVecPropConvert(g_XMLogEst5)
        UMVecPropConvert(g_XMLogEst6)
        UMVecPropConvert(g_XMLogEst7)
        UMVecPropConvert(g_XMLgE)
        UMVecPropConvert(g_XMInvLgE)
        UMVecPropConvert(g_UByteMax)
        UMVecPropConvert(g_ByteMin)
        UMVecPropConvert(g_ByteMax)
        UMVecPropConvert(g_ShortMin)
        UMVecPropConvert(g_ShortMax)
        UMVecPropConvert(g_UShortMax)
    }
}

