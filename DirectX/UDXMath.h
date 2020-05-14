#pragma once

#include <DirectXMath.h>
#include "Math/XMVECTOR.h"

namespace DirectX
{
#define UMVecFunc(Name) DirectX::XMVECTOR* Name() { return new DirectX::XMVECTOR(DirectX::Name); }
    namespace ManagedFunction
    {
        inline DirectX::XMVECTOR* XMConvertVectorIntToFloat(DirectX::XMVECTOR* VInt, unsigned int DivExponent)
        {
            return new DirectX::XMVECTOR(DirectX::XMConvertVectorIntToFloat(*VInt, DivExponent));
        }

        inline DirectX::XMVECTOR* XMConvertVectorFloatToInt(DirectX::XMVECTOR* VFloat, unsigned int MulExponent)
        {
            return new DirectX::XMVECTOR(DirectX::XMConvertVectorFloatToInt(*VFloat, MulExponent));
        }

        inline DirectX::XMVECTOR* XMConvertVectorUIntToFloat(DirectX::XMVECTOR* VUInt, unsigned int DivExponent)
        {
            return new DirectX::XMVECTOR(DirectX::XMConvertVectorUIntToFloat(*VUInt, DivExponent));
        }

        inline DirectX::XMVECTOR* XMConvertVectorFloatToUInt(DirectX::XMVECTOR* VFloat, unsigned int MulExponent)
        {
            return new DirectX::XMVECTOR(DirectX::XMConvertVectorFloatToUInt(*VFloat, MulExponent));
        }

        inline DirectX::XMVECTOR* XMVectorSetBinaryConstant(unsigned int C0, unsigned int C1, unsigned int C2, unsigned int C3)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetBinaryConstant(C0, C1, C2, C3));
        }

        inline DirectX::XMVECTOR* XMVectorSplatConstant(int IntConstant, unsigned int DivExponent)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatConstant(IntConstant, DivExponent));
        }

        inline DirectX::XMVECTOR* XMVectorSplatConstantInt(int IntConstant)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatConstantInt(IntConstant));
        }

        inline DirectX::XMVECTOR* XMLoadInt(unsigned int* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadInt(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadFloat(float* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadFloat(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadInt2(unsigned int* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadInt2(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadInt2A(unsigned int* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadInt2A(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadFloat2(DirectX::XMFLOAT2* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadFloat2(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadFloat2A(DirectX::XMFLOAT2A* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadFloat2A(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadSInt2(const DirectX::XMINT2* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadSInt2(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadUInt2(const DirectX::XMUINT2* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadUInt2(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadInt3(unsigned int* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadInt3(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadInt3A(unsigned int* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadInt3A(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadFloat3(DirectX::XMFLOAT3* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadFloat3(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadFloat3A(DirectX::XMFLOAT3A* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadFloat3A(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadSInt3(const DirectX::XMINT3* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadSInt3(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadUInt3(const DirectX::XMUINT3* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadUInt3(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadInt4(unsigned int* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadInt4(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadInt4A(unsigned int* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadInt4A(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadFloat4(DirectX::XMFLOAT4* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadFloat4(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadFloat4A(DirectX::XMFLOAT4A* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadFloat4A(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadSInt4(const DirectX::XMINT4* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadSInt4(pSource));
        }

        inline DirectX::XMVECTOR* XMLoadUInt4(const DirectX::XMUINT4* pSource)
        {
            return new DirectX::XMVECTOR(DirectX::XMLoadUInt4(pSource));
        }

        inline DirectX::XMMATRIX* XMLoadFloat3x3(DirectX::XMFLOAT3X3* pSource)
        {
            return new DirectX::XMMATRIX(DirectX::XMLoadFloat3x3(pSource));
        }

        inline DirectX::XMMATRIX* XMLoadFloat4x3(DirectX::XMFLOAT4X3* pSource)
        {
            return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x3(pSource));
        }

        inline DirectX::XMMATRIX* XMLoadFloat4x3A(DirectX::XMFLOAT4X3A* pSource)
        {
            return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x3A(pSource));
        }

        inline DirectX::XMMATRIX* XMLoadFloat3x4(DirectX::XMFLOAT3X4* pSource)
        {
            return new DirectX::XMMATRIX(DirectX::XMLoadFloat3x4(pSource));
        }

        inline DirectX::XMMATRIX* XMLoadFloat3x4A(DirectX::XMFLOAT3X4A* pSource)
        {
            return new DirectX::XMMATRIX(DirectX::XMLoadFloat3x4A(pSource));
        }

        inline DirectX::XMMATRIX* XMLoadFloat4x4(DirectX::XMFLOAT4X4* pSource)
        {
            return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x4(pSource));
        }

        inline DirectX::XMMATRIX* XMLoadFloat4x4A(DirectX::XMFLOAT4X4A* pSource)
        {
            return new DirectX::XMMATRIX(DirectX::XMLoadFloat4x4A(pSource));
        }
        inline void XMStoreInt(unsigned int* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreInt(pDestination, *V);
        }
        inline void XMStoreFloat(float* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreFloat(pDestination, *V);
        }
        inline void XMStoreInt2(unsigned int* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreInt2(pDestination, *V);
        }
        inline void XMStoreInt2A(unsigned int* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreInt2A(pDestination, *V);
        }
        inline void XMStoreFloat2(DirectX::XMFLOAT2* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreFloat2(pDestination, *V);
        }
        inline void XMStoreFloat2A(DirectX::XMFLOAT2A* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreFloat2A(pDestination, *V);
        }
        inline void XMStoreSInt2(DirectX::XMINT2* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreSInt2(pDestination, *V);
        }
        inline void XMStoreUInt2(DirectX::XMUINT2* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreUInt2(pDestination, *V);
        }
        inline void XMStoreInt3(unsigned int* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreInt3(pDestination, *V);
        }
        inline void XMStoreInt3A(unsigned int* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreInt3A(pDestination, *V);
        }
        inline void XMStoreFloat3(DirectX::XMFLOAT3* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreFloat3(pDestination, *V);
        }
        inline void XMStoreFloat3A(DirectX::XMFLOAT3A* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreFloat3A(pDestination, *V);
        }
        inline void XMStoreSInt3(DirectX::XMINT3* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreSInt3(pDestination, *V);
        }
        inline void XMStoreUInt3(DirectX::XMUINT3* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreUInt3(pDestination, *V);
        }
        inline void XMStoreInt4(unsigned int* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreInt4(pDestination, *V);
        }
        inline void XMStoreInt4A(unsigned int* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreInt4A(pDestination, *V);
        }
        inline void XMStoreFloat4(DirectX::XMFLOAT4* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreFloat4(pDestination, *V);
        }
        inline void XMStoreFloat4A(DirectX::XMFLOAT4A* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreFloat4A(pDestination, *V);
        }
        inline void XMStoreSInt4(DirectX::XMINT4* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreSInt4(pDestination, *V);
        }
        inline void XMStoreUInt4(DirectX::XMUINT4* pDestination, DirectX::XMVECTOR* V)
        {
            DirectX::XMStoreUInt4(pDestination, *V);
        }
        inline void XMStoreFloat3x3(DirectX::XMFLOAT3X3* pDestination, DirectX::XMMATRIX* M)
        {
            DirectX::XMStoreFloat3x3(pDestination, *M);
        }
        inline void XMStoreFloat4x3(DirectX::XMFLOAT4X3* pDestination, DirectX::XMMATRIX* M)
        {
            DirectX::XMStoreFloat4x3(pDestination, *M);
        }
        inline void XMStoreFloat4x3A(DirectX::XMFLOAT4X3A* pDestination, DirectX::XMMATRIX* M)
        {
            DirectX::XMStoreFloat4x3A(pDestination, *M);
        }
        inline void XMStoreFloat3x4(DirectX::XMFLOAT3X4* pDestination, DirectX::XMMATRIX* M)
        {
            DirectX::XMStoreFloat3x4(pDestination, *M);
        }
        inline void XMStoreFloat3x4A(DirectX::XMFLOAT3X4A* pDestination, DirectX::XMMATRIX* M)
        {
            DirectX::XMStoreFloat3x4A(pDestination, *M);
        }
        inline void XMStoreFloat4x4(DirectX::XMFLOAT4X4* pDestination, DirectX::XMMATRIX* M)
        {
            DirectX::XMStoreFloat4x4(pDestination, *M);
        }
        inline void XMStoreFloat4x4A(DirectX::XMFLOAT4X4A* pDestination, DirectX::XMMATRIX* M)
        {
            DirectX::XMStoreFloat4x4A(pDestination, *M);
        }
        inline DirectX::XMVECTOR* XMVectorZero()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorZero());
        }
        inline DirectX::XMVECTOR* XMVectorSet(float x, float y, float z, float w)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSet(x, y, z, w));
        }
        inline DirectX::XMVECTOR* XMVectorSetInt(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetInt(x, y, z, w));
        }
        inline DirectX::XMVECTOR* XMVectorReplicate(float Value)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReplicate(Value));
        }
        inline DirectX::XMVECTOR* XMVectorReplicatePtr(float* pValue)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReplicatePtr(pValue));
        }
        inline DirectX::XMVECTOR* XMVectorReplicateInt(unsigned int Value)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReplicateInt(Value));
        }
        inline DirectX::XMVECTOR* XMVectorReplicateIntPtr(unsigned int* pValue)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReplicateIntPtr(pValue));
        }
        inline DirectX::XMVECTOR* XMVectorTrueInt()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorTrueInt());
        }
        inline DirectX::XMVECTOR* XMVectorFalseInt()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorFalseInt());
        }
        inline DirectX::XMVECTOR* XMVectorSplatX(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatX(*V));
        }
        inline DirectX::XMVECTOR* XMVectorSplatY(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatY(*V));
        }
        inline DirectX::XMVECTOR* XMVectorSplatZ(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatZ(*V));
        }
        inline DirectX::XMVECTOR* XMVectorSplatW(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatW(*V));
        }
        inline DirectX::XMVECTOR* XMVectorSplatOne()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatOne());
        }
        inline DirectX::XMVECTOR* XMVectorSplatInfinity()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatInfinity());
        }
        inline DirectX::XMVECTOR* XMVectorSplatQNaN()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatQNaN());
        }
        inline DirectX::XMVECTOR* XMVectorSplatEpsilon()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatEpsilon());
        }
        inline DirectX::XMVECTOR* XMVectorSplatSignMask()
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSplatSignMask());
        }
        inline float XMVectorGetByIndex(DirectX::XMVECTOR* V, unsigned int i)
        {
            return DirectX::XMVectorGetByIndex(*V, i);
        }
        inline float XMVectorGetX(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetX(*V);
        }
        inline float XMVectorGetY(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetY(*V);
        }
        inline float XMVectorGetZ(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetZ(*V);
        }
        inline float XMVectorGetW(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetW(*V);
        }
        inline void XMVectorGetByIndexPtr(float* f, DirectX::XMVECTOR* V, unsigned int i)
        {
            return DirectX::XMVectorGetByIndexPtr(f, *V, i);
        }
        inline void XMVectorGetXPtr(float* x, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetXPtr(x, *V);
        }
        inline void XMVectorGetYPtr(float* y, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetYPtr(y, *V);
        }
        inline void XMVectorGetZPtr(float* z, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetZPtr(z, *V);
        }
        inline void XMVectorGetWPtr(float* w, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetWPtr(w, *V);
        }
        inline unsigned int XMVectorGetIntByIndex(DirectX::XMVECTOR* V, unsigned int i)
        {
            return DirectX::XMVectorGetIntByIndex(*V, i);
        }
        inline unsigned int XMVectorGetIntX(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntX(*V);
        }
        inline unsigned int XMVectorGetIntY(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntY(*V);
        }
        inline unsigned int XMVectorGetIntZ(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntZ(*V);
        }
        inline unsigned int XMVectorGetIntW(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntW(*V);
        }
        inline void XMVectorGetIntByIndexPtr(unsigned int* f, DirectX::XMVECTOR* V, unsigned int i)
        {
            return DirectX::XMVectorGetIntByIndexPtr(f, *V, i);
        }
        inline void XMVectorGetIntXPtr(unsigned int* x, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntXPtr(x, *V);
        }
        inline void XMVectorGetIntYPtr(unsigned int* y, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntYPtr(y, *V);
        }
        inline void XMVectorGetIntZPtr(unsigned int* z, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntZPtr(z, *V);
        }
        inline void XMVectorGetIntWPtr(unsigned int* w, DirectX::XMVECTOR* V)
        {
            return DirectX::XMVectorGetIntWPtr(w, *V);
        }

        inline DirectX::XMVECTOR* XMVectorSetByIndex(DirectX::XMVECTOR* V, float f, unsigned int i)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetByIndex(*V, f, i));
        }

        inline DirectX::XMVECTOR* XMVectorSetX(DirectX::XMVECTOR* V, float x)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetX(*V, x));
        }

        inline DirectX::XMVECTOR* XMVectorSetY(DirectX::XMVECTOR* V, float y)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetY(*V, y));
        }

        inline DirectX::XMVECTOR* XMVectorSetZ(DirectX::XMVECTOR* V, float z)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetZ(*V, z));
        }

        inline DirectX::XMVECTOR* XMVectorSetW(DirectX::XMVECTOR* V, float w)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetW(*V, w));
        }

        inline DirectX::XMVECTOR* XMVectorSetByIndexPtr(DirectX::XMVECTOR* V, float* f, unsigned int i)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetByIndexPtr(*V, f, i));
        }

        inline DirectX::XMVECTOR* XMVectorSetXPtr(DirectX::XMVECTOR* V, float* x)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetXPtr(*V, x));
        }

        inline DirectX::XMVECTOR* XMVectorSetYPtr(DirectX::XMVECTOR* V, float* y)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetYPtr(*V, y));
        }

        inline DirectX::XMVECTOR* XMVectorSetZPtr(DirectX::XMVECTOR* V, float* z)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetZPtr(*V, z));
        }

        inline DirectX::XMVECTOR* XMVectorSetWPtr(DirectX::XMVECTOR* V, float* w)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetWPtr(*V, w));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntByIndex(DirectX::XMVECTOR* V, unsigned int f, unsigned int i)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntByIndex(*V, f, i));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntX(DirectX::XMVECTOR* V, unsigned int x)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntX(*V, x));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntY(DirectX::XMVECTOR* V, unsigned int y)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntY(*V, y));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntZ(DirectX::XMVECTOR* V, unsigned int z)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntZ(*V, z));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntW(DirectX::XMVECTOR* V, unsigned int w)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntW(*V, w));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntByIndexPtr(DirectX::XMVECTOR* V, unsigned int* f, unsigned int i)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntByIndexPtr(*V, f, i));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntXPtr(DirectX::XMVECTOR* V, unsigned int* x)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntXPtr(*V, x));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntYPtr(DirectX::XMVECTOR* V, unsigned int* y)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntYPtr(*V, y));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntZPtr(DirectX::XMVECTOR* V, unsigned int* z)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntZPtr(*V, z));
        }

        inline DirectX::XMVECTOR* XMVectorSetIntWPtr(DirectX::XMVECTOR* V, unsigned int* w)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSetIntWPtr(*V, w));
        }

        inline DirectX::XMVECTOR* XMVectorSwizzle(DirectX::XMVECTOR* V, unsigned int E0, unsigned int E1, unsigned int E2, unsigned int E3)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSwizzle(*V, E0, E1, E2, E3));
        }

        inline DirectX::XMVECTOR* XMVectorPermute(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, unsigned int PermuteX, unsigned int PermuteY, unsigned int PermuteZ, unsigned int PermuteW)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorPermute(*V1, *V2, PermuteX, PermuteY, PermuteZ, PermuteW));
        }

        inline DirectX::XMVECTOR* XMVectorSelectControl(unsigned int VectorIndex0, unsigned int VectorIndex1, unsigned int VectorIndex2, unsigned int VectorIndex3)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSelectControl(VectorIndex0, VectorIndex1, VectorIndex2, VectorIndex3));
        }

        inline DirectX::XMVECTOR* XMVectorSelect(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Control)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSelect(*V1, *V2, *Control));
        }

        inline DirectX::XMVECTOR* XMVectorMergeXY(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorMergeXY(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorMergeZW(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorMergeZW(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorShiftLeft(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, unsigned int Elements)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorShiftLeft(*V1, *V2, Elements));
        }

        inline DirectX::XMVECTOR* XMVectorRotateLeft(DirectX::XMVECTOR* V, unsigned int Elements)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorRotateLeft(*V, Elements));
        }

        inline DirectX::XMVECTOR* XMVectorRotateRight(DirectX::XMVECTOR* V, unsigned int Elements)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorRotateRight(*V, Elements));
        }

        inline DirectX::XMVECTOR* XMVectorInsert(DirectX::XMVECTOR* VD, DirectX::XMVECTOR* VS, unsigned int VSLeftRotateElements, unsigned int Select0, unsigned int Select1, unsigned int Select2, unsigned int Select3)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorInsert(*VD, *VS, VSLeftRotateElements, Select0, Select1, Select2, Select3));
        }

        inline DirectX::XMVECTOR* XMVectorEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorEqual(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorEqualR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorEqualR(pCR, *V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorEqualInt(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorEqualIntR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorEqualIntR(pCR, *V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorNearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorNearEqual(*V1, *V2, *Epsilon));
        }

        inline DirectX::XMVECTOR* XMVectorNotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorNotEqual(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorNotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorNotEqualInt(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorGreater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorGreater(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorGreaterR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorGreaterR(pCR, *V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorGreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorGreaterOrEqual(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorGreaterOrEqualR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorGreaterOrEqualR(pCR, *V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorLess(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorLess(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorLessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorLessOrEqual(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorInBounds(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorInBounds(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorInBoundsR(unsigned int* pCR, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorInBoundsR(pCR, *V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorIsNaN(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorIsNaN(*V));
        }

        inline DirectX::XMVECTOR* XMVectorIsInfinite(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorIsInfinite(*V));
        }

        inline DirectX::XMVECTOR* XMVectorMin(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorMin(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorMax(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorMax(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorRound(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorRound(*V));
        }

        inline DirectX::XMVECTOR* XMVectorTruncate(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorTruncate(*V));
        }

        inline DirectX::XMVECTOR* XMVectorFloor(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorFloor(*V));
        }

        inline DirectX::XMVECTOR* XMVectorCeiling(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorCeiling(*V));
        }

        inline DirectX::XMVECTOR* XMVectorClamp(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Min, DirectX::XMVECTOR* Max)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorClamp(*V, *Min, *Max));
        }

        inline DirectX::XMVECTOR* XMVectorSaturate(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSaturate(*V));
        }

        inline DirectX::XMVECTOR* XMVectorAndInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorAndInt(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorAndCInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorAndCInt(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorOrInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorOrInt(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorNorInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorNorInt(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorXorInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorXorInt(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorNegate(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorNegate(*V));
        }

        inline DirectX::XMVECTOR* XMVectorAdd(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorAdd(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorSum(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSum(*V));
        }

        inline DirectX::XMVECTOR* XMVectorAddAngles(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorAddAngles(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorSubtract(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSubtract(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorSubtractAngles(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSubtractAngles(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorMultiply(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorMultiply(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorMultiplyAdd(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* V3)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorMultiplyAdd(*V1, *V2, *V3));
        }

        inline DirectX::XMVECTOR* XMVectorDivide(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorDivide(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorNegativeMultiplySubtract(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* V3)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorNegativeMultiplySubtract(*V1, *V2, *V3));
        }

        inline DirectX::XMVECTOR* XMVectorScale(DirectX::XMVECTOR* V, float ScaleFactor)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorScale(*V, ScaleFactor));
        }

        inline DirectX::XMVECTOR* XMVectorReciprocalEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReciprocalEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorReciprocal(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReciprocal(*V));
        }

        inline DirectX::XMVECTOR* XMVectorSqrtEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSqrtEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorSqrt(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSqrt(*V));
        }

        inline DirectX::XMVECTOR* XMVectorReciprocalSqrtEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReciprocalSqrtEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorReciprocalSqrt(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorReciprocalSqrt(*V));
        }

        inline DirectX::XMVECTOR* XMVectorExp2(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorExp2(*V));
        }

        inline DirectX::XMVECTOR* XMVectorExpE(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorExpE(*V));
        }

        inline DirectX::XMVECTOR* XMVectorExp(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorExp(*V));
        }

        inline DirectX::XMVECTOR* XMVectorLog2(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorLog2(*V));
        }

        inline DirectX::XMVECTOR* XMVectorLogE(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorLogE(*V));
        }

        inline DirectX::XMVECTOR* XMVectorLog(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorLog(*V));
        }

        inline DirectX::XMVECTOR* XMVectorPow(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorPow(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorAbs(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorAbs(*V));
        }

        inline DirectX::XMVECTOR* XMVectorMod(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorMod(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVectorModAngles(DirectX::XMVECTOR* Angles)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorModAngles(*Angles));
        }

        inline DirectX::XMVECTOR* XMVectorSin(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSin(*V));
        }

        inline DirectX::XMVECTOR* XMVectorSinEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSinEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorCos(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorCos(*V));
        }

        inline DirectX::XMVECTOR* XMVectorCosEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorCosEst(*V));
        }

        inline void XMVectorSinCos(DirectX::XMVECTOR* pSin, DirectX::XMVECTOR* pCos, DirectX::XMVECTOR* V)
        {
            DirectX::XMVectorSinCos(pSin, pCos, *V);
        }

        inline void XMVectorSinCosEst(DirectX::XMVECTOR* pSin, DirectX::XMVECTOR* pCos, DirectX::XMVECTOR* V)
        {
            DirectX::XMVectorSinCosEst(pSin, pCos, *V);
        }

        inline DirectX::XMVECTOR* XMVectorTan(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorTan(*V));
        }

        inline DirectX::XMVECTOR* XMVectorTanEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorTanEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorSinH(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorSinH(*V));
        }

        inline DirectX::XMVECTOR* XMVectorCosH(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorCosH(*V));
        }

        inline DirectX::XMVECTOR* XMVectorTanH(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorTanH(*V));
        }

        inline DirectX::XMVECTOR* XMVectorASin(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorASin(*V));
        }

        inline DirectX::XMVECTOR* XMVectorASinEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorASinEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorACos(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorACos(*V));
        }

        inline DirectX::XMVECTOR* XMVectorACosEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorACosEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorATan(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorATan(*V));
        }

        inline DirectX::XMVECTOR* XMVectorATanEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorATanEst(*V));
        }

        inline DirectX::XMVECTOR* XMVectorATan2(DirectX::XMVECTOR* Y, DirectX::XMVECTOR* X)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorATan2(*Y, *X));
        }

        inline DirectX::XMVECTOR* XMVectorATan2Est(DirectX::XMVECTOR* Y, DirectX::XMVECTOR* X)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorATan2Est(*Y, *X));
        }

        inline DirectX::XMVECTOR* XMVectorLerp(DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, float t)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorLerp(*V0, *V1, t));
        }

        inline DirectX::XMVECTOR* XMVectorLerpV(DirectX::XMVECTOR* V0, DirectX::XMVECTOR* V1, DirectX::XMVECTOR* T)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorLerpV(*V0, *V1, *T));
        }

        inline DirectX::XMVECTOR* XMVectorHermite(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Tangent0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Tangent1, float t)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorHermite(*Position0, *Tangent0, *Position1, *Tangent1, t));
        }

        inline DirectX::XMVECTOR* XMVectorHermiteV(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Tangent0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Tangent1, DirectX::XMVECTOR* T)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorHermiteV(*Position0, *Tangent0, *Position1, *Tangent1, *T));
        }

        inline DirectX::XMVECTOR* XMVectorCatmullRom(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, DirectX::XMVECTOR* Position3, float t)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorCatmullRom(*Position0, *Position1, *Position2, *Position3, t));
        }

        inline DirectX::XMVECTOR* XMVectorCatmullRomV(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, DirectX::XMVECTOR* Position3, DirectX::XMVECTOR* T)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorCatmullRomV(*Position0, *Position1, *Position2, *Position3, *T));
        }

        inline DirectX::XMVECTOR* XMVectorBaryCentric(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, float f, float g)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorBaryCentric(*Position0, *Position1, *Position2, f, g));
        }

        inline DirectX::XMVECTOR* XMVectorBaryCentricV(DirectX::XMVECTOR* Position0, DirectX::XMVECTOR* Position1, DirectX::XMVECTOR* Position2, DirectX::XMVECTOR* F, DirectX::XMVECTOR* G)
        {
            return new DirectX::XMVECTOR(DirectX::XMVectorBaryCentricV(*Position0, *Position1, *Position2, *F, *G));
        }

        inline bool XMVector2Equal(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2Equal(*V1, *V2);
        }

        inline unsigned int XMVector2EqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2EqualR(*V1, *V2);
        }

        inline bool XMVector2EqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2EqualInt(*V1, *V2);
        }

        inline unsigned int XMVector2EqualIntR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2EqualIntR(*V1, *V2);
        }

        inline bool XMVector2NearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon)
        {
            return DirectX::XMVector2NearEqual(*V1, *V2, *Epsilon);
        }

        inline bool XMVector2NotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2NotEqual(*V1, *V2);
        }

        inline bool XMVector2NotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2NotEqualInt(*V1, *V2);
        }

        inline bool XMVector2Greater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2Greater(*V1, *V2);
        }

        inline unsigned int XMVector2GreaterR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2GreaterR(*V1, *V2);
        }

        inline bool XMVector2GreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2GreaterOrEqual(*V1, *V2);
        }

        inline unsigned int XMVector2GreaterOrEqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2GreaterOrEqualR(*V1, *V2);
        }

        inline bool XMVector2Less(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2Less(*V1, *V2);
        }

        inline bool XMVector2LessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector2LessOrEqual(*V1, *V2);
        }

        inline bool XMVector2InBounds(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Bounds)
        {
            return DirectX::XMVector2InBounds(*V, *Bounds);
        }

        inline bool XMVector2IsNaN(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVector2IsNaN(*V);
        }

        inline bool XMVector2IsInfinite(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVector2IsInfinite(*V);
        }

        inline DirectX::XMVECTOR* XMVector2Dot(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Dot(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector2Cross(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Cross(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector2LengthSq(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2LengthSq(*V));
        }

        inline DirectX::XMVECTOR* XMVector2ReciprocalLengthEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2ReciprocalLengthEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector2ReciprocalLength(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2ReciprocalLength(*V));
        }

        inline DirectX::XMVECTOR* XMVector2LengthEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2LengthEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector2Length(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Length(*V));
        }

        inline DirectX::XMVECTOR* XMVector2NormalizeEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2NormalizeEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector2Normalize(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Normalize(*V));
        }

        inline DirectX::XMVECTOR* XMVector2ClampLength(DirectX::XMVECTOR* V, float LengthMin, float LengthMax)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2ClampLength(*V, LengthMin, LengthMax));
        }

        inline DirectX::XMVECTOR* XMVector2ClampLengthV(DirectX::XMVECTOR* V, DirectX::XMVECTOR* LengthMin, DirectX::XMVECTOR* LengthMax)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2ClampLengthV(*V, *LengthMin, *LengthMax));
        }

        inline DirectX::XMVECTOR* XMVector2Reflect(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Reflect(*Incident, *Normal));
        }

        inline DirectX::XMVECTOR* XMVector2Refract(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, float RefractionIndex)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Refract(*Incident, *Normal, RefractionIndex));
        }

        inline DirectX::XMVECTOR* XMVector2RefractV(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, DirectX::XMVECTOR* RefractionIndex)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2RefractV(*Incident, *Normal, *RefractionIndex));
        }

        inline DirectX::XMVECTOR* XMVector2Orthogonal(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Orthogonal(*V));
        }

        inline DirectX::XMVECTOR* XMVector2AngleBetweenNormalsEst(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2AngleBetweenNormalsEst(*N1, *N2));
        }

        inline DirectX::XMVECTOR* XMVector2AngleBetweenNormals(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2AngleBetweenNormals(*N1, *N2));
        }

        inline DirectX::XMVECTOR* XMVector2AngleBetweenVectors(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2AngleBetweenVectors(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector2LinePointDistance(DirectX::XMVECTOR* LinePoint1, DirectX::XMVECTOR* LinePoint2, DirectX::XMVECTOR* Point)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2LinePointDistance(*LinePoint1, *LinePoint2, *Point));
        }

        inline DirectX::XMVECTOR* XMVector2IntersectLine(DirectX::XMVECTOR* Line1Point1, DirectX::XMVECTOR* Line1Point2, DirectX::XMVECTOR* Line2Point1, DirectX::XMVECTOR* Line2Point2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2IntersectLine(*Line1Point1, *Line1Point2, *Line2Point1, *Line2Point2));
        }

        inline DirectX::XMVECTOR* XMVector2Transform(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2Transform(*V, *M));
        }

        inline DirectX::XMFLOAT4* XMVector2TransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT2* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMVector2TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M);
        }

        inline DirectX::XMVECTOR* XMVector2TransformCoord(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2TransformCoord(*V, *M));
        }

        inline DirectX::XMFLOAT2* XMVector2TransformCoordStream(DirectX::XMFLOAT2* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT2* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMVector2TransformCoordStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M);
        }

        inline DirectX::XMVECTOR* XMVector2TransformNormal(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector2TransformNormal(*V, *M));
        }

        inline DirectX::XMFLOAT2* XMVector2TransformNormalStream(DirectX::XMFLOAT2* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT2* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMVector2TransformNormalStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M);
        }

        inline bool XMVector3Equal(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3Equal(*V1, *V2);
        }

        inline unsigned int XMVector3EqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3EqualR(*V1, *V2);
        }

        inline bool XMVector3EqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3EqualInt(*V1, *V2);
        }

        inline unsigned int XMVector3EqualIntR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3EqualIntR(*V1, *V2);
        }

        inline bool XMVector3NearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon)
        {
            return DirectX::XMVector3NearEqual(*V1, *V2, *Epsilon);
        }

        inline bool XMVector3NotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3NotEqual(*V1, *V2);
        }

        inline bool XMVector3NotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3NotEqualInt(*V1, *V2);
        }

        inline bool XMVector3Greater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3Greater(*V1, *V2);
        }

        inline unsigned int XMVector3GreaterR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3GreaterR(*V1, *V2);
        }

        inline bool XMVector3GreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3GreaterOrEqual(*V1, *V2);
        }

        inline unsigned int XMVector3GreaterOrEqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3GreaterOrEqualR(*V1, *V2);
        }

        inline bool XMVector3Less(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3Less(*V1, *V2);
        }

        inline bool XMVector3LessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector3LessOrEqual(*V1, *V2);
        }

        inline bool XMVector3InBounds(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Bounds)
        {
            return DirectX::XMVector3InBounds(*V, *Bounds);
        }

        inline bool XMVector3IsNaN(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVector3IsNaN(*V);
        }

        inline bool XMVector3IsInfinite(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVector3IsInfinite(*V);
        }

        inline DirectX::XMVECTOR* XMVector3Dot(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Dot(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector3Cross(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Cross(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector3LengthSq(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3LengthSq(*V));
        }

        inline DirectX::XMVECTOR* XMVector3ReciprocalLengthEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3ReciprocalLengthEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector3ReciprocalLength(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3ReciprocalLength(*V));
        }

        inline DirectX::XMVECTOR* XMVector3LengthEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3LengthEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector3Length(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Length(*V));
        }

        inline DirectX::XMVECTOR* XMVector3NormalizeEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3NormalizeEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector3Normalize(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Normalize(*V));
        }

        inline DirectX::XMVECTOR* XMVector3ClampLength(DirectX::XMVECTOR* V, float LengthMin, float LengthMax)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3ClampLength(*V, LengthMin, LengthMax));
        }

        inline DirectX::XMVECTOR* XMVector3ClampLengthV(DirectX::XMVECTOR* V, DirectX::XMVECTOR* LengthMin, DirectX::XMVECTOR* LengthMax)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3ClampLengthV(*V, *LengthMin, *LengthMax));
        }

        inline DirectX::XMVECTOR* XMVector3Reflect(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Reflect(*Incident, *Normal));
        }

        inline DirectX::XMVECTOR* XMVector3Refract(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, float RefractionIndex)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Refract(*Incident, *Normal, RefractionIndex));
        }

        inline DirectX::XMVECTOR* XMVector3RefractV(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, DirectX::XMVECTOR* RefractionIndex)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3RefractV(*Incident, *Normal, *RefractionIndex));
        }

        inline DirectX::XMVECTOR* XMVector3Orthogonal(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Orthogonal(*V));
        }

        inline DirectX::XMVECTOR* XMVector3AngleBetweenNormalsEst(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3AngleBetweenNormalsEst(*N1, *N2));
        }

        inline DirectX::XMVECTOR* XMVector3AngleBetweenNormals(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3AngleBetweenNormals(*N1, *N2));
        }

        inline DirectX::XMVECTOR* XMVector3AngleBetweenVectors(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3AngleBetweenVectors(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector3LinePointDistance(DirectX::XMVECTOR* LinePoint1, DirectX::XMVECTOR* LinePoint2, DirectX::XMVECTOR* Point)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3LinePointDistance(*LinePoint1, *LinePoint2, *Point));
        }

        inline void XMVector3ComponentsFromNormal(DirectX::XMVECTOR* pParallel, DirectX::XMVECTOR* pPerpendicular, DirectX::XMVECTOR* V, DirectX::XMVECTOR* Normal)
        {
            DirectX::XMVector3ComponentsFromNormal(pParallel, pPerpendicular, *V, *Normal);
        }

        inline DirectX::XMVECTOR* XMVector3Rotate(DirectX::XMVECTOR* V, DirectX::XMVECTOR* RotationQuaternion)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Rotate(*V, *RotationQuaternion));
        }

        inline DirectX::XMVECTOR* XMVector3InverseRotate(DirectX::XMVECTOR* V, DirectX::XMVECTOR* RotationQuaternion)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3InverseRotate(*V, *RotationQuaternion));
        }

        inline DirectX::XMVECTOR* XMVector3Transform(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Transform(*V, *M));
        }

        inline DirectX::XMFLOAT4* XMVector3TransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMVector3TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M);
        }

        inline DirectX::XMVECTOR* XMVector3TransformCoord(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3TransformCoord(*V, *M));
        }

        inline DirectX::XMFLOAT3* XMVector3TransformCoordStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMVector3TransformCoordStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M);
        }

        inline DirectX::XMVECTOR* XMVector3TransformNormal(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3TransformNormal(*V, *M));
        }

        inline DirectX::XMFLOAT3* XMVector3TransformNormalStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMVector3TransformNormalStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M);
        }

        inline DirectX::XMVECTOR* XMVector3Project(DirectX::XMVECTOR* V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Project(*V, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World));
        }

        inline DirectX::XMFLOAT3* XMVector3ProjectStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World)
        {
            return DirectX::XMVector3ProjectStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World);
        }

        inline DirectX::XMVECTOR* XMVector3Unproject(DirectX::XMVECTOR* V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector3Unproject(*V, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World));
        }

        inline DirectX::XMFLOAT3* XMVector3UnprojectStream(DirectX::XMFLOAT3* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT3* pInputStream, unsigned int InputStride, unsigned int VectorCount, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ, DirectX::XMMATRIX* Projection, DirectX::XMMATRIX* View, DirectX::XMMATRIX* World)
        {
            return DirectX::XMVector3UnprojectStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, ViewportX, ViewportY, ViewportWidth, ViewportHeight, ViewportMinZ, ViewportMaxZ, *Projection, *View, *World);
        }

        inline bool XMVector4Equal(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4Equal(*V1, *V2);
        }

        inline unsigned int XMVector4EqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4EqualR(*V1, *V2);
        }

        inline bool XMVector4EqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4EqualInt(*V1, *V2);
        }

        inline unsigned int XMVector4EqualIntR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4EqualIntR(*V1, *V2);
        }

        inline bool XMVector4NearEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* Epsilon)
        {
            return DirectX::XMVector4NearEqual(*V1, *V2, *Epsilon);
        }

        inline bool XMVector4NotEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4NotEqual(*V1, *V2);
        }

        inline bool XMVector4NotEqualInt(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4NotEqualInt(*V1, *V2);
        }

        inline bool XMVector4Greater(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4Greater(*V1, *V2);
        }

        inline unsigned int XMVector4GreaterR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4GreaterR(*V1, *V2);
        }

        inline bool XMVector4GreaterOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4GreaterOrEqual(*V1, *V2);
        }

        inline unsigned int XMVector4GreaterOrEqualR(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4GreaterOrEqualR(*V1, *V2);
        }

        inline bool XMVector4Less(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4Less(*V1, *V2);
        }

        inline bool XMVector4LessOrEqual(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return DirectX::XMVector4LessOrEqual(*V1, *V2);
        }

        inline bool XMVector4InBounds(DirectX::XMVECTOR* V, DirectX::XMVECTOR* Bounds)
        {
            return DirectX::XMVector4InBounds(*V, *Bounds);
        }

        inline bool XMVector4IsNaN(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVector4IsNaN(*V);
        }

        inline bool XMVector4IsInfinite(DirectX::XMVECTOR* V)
        {
            return DirectX::XMVector4IsInfinite(*V);
        }

        inline DirectX::XMVECTOR* XMVector4Dot(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Dot(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector4Cross(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2, DirectX::XMVECTOR* V3)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Cross(*V1, *V2, *V3));
        }

        inline DirectX::XMVECTOR* XMVector4LengthSq(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4LengthSq(*V));
        }

        inline DirectX::XMVECTOR* XMVector4ReciprocalLengthEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4ReciprocalLengthEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector4ReciprocalLength(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4ReciprocalLength(*V));
        }

        inline DirectX::XMVECTOR* XMVector4LengthEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4LengthEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector4Length(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Length(*V));
        }

        inline DirectX::XMVECTOR* XMVector4NormalizeEst(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4NormalizeEst(*V));
        }

        inline DirectX::XMVECTOR* XMVector4Normalize(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Normalize(*V));
        }

        inline DirectX::XMVECTOR* XMVector4ClampLength(DirectX::XMVECTOR* V, float LengthMin, float LengthMax)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4ClampLength(*V, LengthMin, LengthMax));
        }

        inline DirectX::XMVECTOR* XMVector4ClampLengthV(DirectX::XMVECTOR* V, DirectX::XMVECTOR* LengthMin, DirectX::XMVECTOR* LengthMax)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4ClampLengthV(*V, *LengthMin, *LengthMax));
        }

        inline DirectX::XMVECTOR* XMVector4Reflect(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Reflect(*Incident, *Normal));
        }

        inline DirectX::XMVECTOR* XMVector4Refract(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, float RefractionIndex)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Refract(*Incident, *Normal, RefractionIndex));
        }

        inline DirectX::XMVECTOR* XMVector4RefractV(DirectX::XMVECTOR* Incident, DirectX::XMVECTOR* Normal, DirectX::XMVECTOR* RefractionIndex)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4RefractV(*Incident, *Normal, *RefractionIndex));
        }

        inline DirectX::XMVECTOR* XMVector4Orthogonal(DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Orthogonal(*V));
        }

        inline DirectX::XMVECTOR* XMVector4AngleBetweenNormalsEst(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4AngleBetweenNormalsEst(*N1, *N2));
        }

        inline DirectX::XMVECTOR* XMVector4AngleBetweenNormals(DirectX::XMVECTOR* N1, DirectX::XMVECTOR* N2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4AngleBetweenNormals(*N1, *N2));
        }

        inline DirectX::XMVECTOR* XMVector4AngleBetweenVectors(DirectX::XMVECTOR* V1, DirectX::XMVECTOR* V2)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4AngleBetweenVectors(*V1, *V2));
        }

        inline DirectX::XMVECTOR* XMVector4Transform(DirectX::XMVECTOR* V, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMVector4Transform(*V, *M));
        }

        inline DirectX::XMFLOAT4* XMVector4TransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT4* pInputStream, unsigned int InputStride, unsigned int VectorCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMVector4TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, *M);
        }

        inline bool XMMatrixIsNaN(DirectX::XMMATRIX* M)
        {
            return DirectX::XMMatrixIsNaN(*M);
        }

        inline bool XMMatrixIsInfinite(DirectX::XMMATRIX* M)
        {
            return DirectX::XMMatrixIsInfinite(*M);
        }

        inline bool XMMatrixIsIdentity(DirectX::XMMATRIX* M)
        {
            return DirectX::XMMatrixIsIdentity(*M);
        }

        inline DirectX::XMMATRIX* XMMatrixMultiply(DirectX::XMMATRIX* M1, DirectX::XMMATRIX* M2)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixMultiply(*M1, *M2));
        }

        inline DirectX::XMMATRIX* XMMatrixMultiplyTranspose(DirectX::XMMATRIX* M1, DirectX::XMMATRIX* M2)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixMultiplyTranspose(*M1, *M2));
        }

        inline DirectX::XMMATRIX* XMMatrixTranspose(DirectX::XMMATRIX* M)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixTranspose(*M));
        }

        inline DirectX::XMMATRIX* XMMatrixInverse(DirectX::XMVECTOR* pDeterminant, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixInverse(pDeterminant, *M));
        }

        inline DirectX::XMVECTOR* XMMatrixDeterminant(DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMMatrixDeterminant(*M));
        }

        inline bool XMMatrixDecompose(DirectX::XMVECTOR* outScale, DirectX::XMVECTOR* outRotQuat, DirectX::XMVECTOR* outTrans, DirectX::XMMATRIX* M)
        {
            return DirectX::XMMatrixDecompose(outScale, outRotQuat, outTrans, *M);
        }

        inline DirectX::XMMATRIX* XMMatrixIdentity()
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixIdentity());
        }

        inline DirectX::XMMATRIX* XMMatrixSet(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixSet(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33));
        }

        inline DirectX::XMMATRIX* XMMatrixTranslation(float OffsetX, float OffsetY, float OffsetZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixTranslation(OffsetX, OffsetY, OffsetZ));
        }

        inline DirectX::XMMATRIX* XMMatrixTranslationFromVector(DirectX::XMVECTOR* Offset)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixTranslationFromVector(*Offset));
        }

        inline DirectX::XMMATRIX* XMMatrixScaling(float ScaleX, float ScaleY, float ScaleZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixScaling(ScaleX, ScaleY, ScaleZ));
        }

        inline DirectX::XMMATRIX* XMMatrixScalingFromVector(DirectX::XMVECTOR* Scale)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixScalingFromVector(*Scale));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationX(float Angle)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationX(Angle));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationY(float Angle)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationY(Angle));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationZ(float Angle)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationZ(Angle));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationRollPitchYaw(float Pitch, float Yaw, float Roll)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationRollPitchYaw(Pitch, Yaw, Roll));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationRollPitchYawFromVector(DirectX::XMVECTOR* Angles)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationRollPitchYawFromVector(*Angles));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationNormal(DirectX::XMVECTOR* NormalAxis, float Angle)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationNormal(*NormalAxis, Angle));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationAxis(DirectX::XMVECTOR* Axis, float Angle)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationAxis(*Axis, Angle));
        }

        inline DirectX::XMMATRIX* XMMatrixRotationQuaternion(DirectX::XMVECTOR* Quaternion)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixRotationQuaternion(*Quaternion));
        }

        inline DirectX::XMMATRIX* XMMatrixTransformation2D(DirectX::XMVECTOR* ScalingOrigin, float ScalingOrientation, DirectX::XMVECTOR* Scaling, DirectX::XMVECTOR* RotationOrigin, float Rotation, DirectX::XMVECTOR* Translation)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixTransformation2D(*ScalingOrigin, ScalingOrientation, *Scaling, *RotationOrigin, Rotation, *Translation));
        }

        inline DirectX::XMMATRIX* XMMatrixTransformation(DirectX::XMVECTOR* ScalingOrigin, DirectX::XMVECTOR* ScalingOrientationQuaternion, DirectX::XMVECTOR* Scaling, DirectX::XMVECTOR* RotationOrigin, DirectX::XMVECTOR* RotationQuaternion, DirectX::XMVECTOR* Translation)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixTransformation(*ScalingOrigin, *ScalingOrientationQuaternion, *Scaling, *RotationOrigin, *RotationQuaternion, *Translation));
        }

        inline DirectX::XMMATRIX* XMMatrixAffineTransformation2D(DirectX::XMVECTOR* Scaling, DirectX::XMVECTOR* RotationOrigin, float Rotation, DirectX::XMVECTOR* Translation)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixAffineTransformation2D(*Scaling, *RotationOrigin, Rotation, *Translation));
        }

        inline DirectX::XMMATRIX* XMMatrixAffineTransformation(DirectX::XMVECTOR* Scaling, DirectX::XMVECTOR* RotationOrigin, DirectX::XMVECTOR* RotationQuaternion, DirectX::XMVECTOR* Translation)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixAffineTransformation(*Scaling, *RotationOrigin, *RotationQuaternion, *Translation));
        }

        inline DirectX::XMMATRIX* XMMatrixReflect(DirectX::XMVECTOR* ReflectionPlane)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixReflect(*ReflectionPlane));
        }

        inline DirectX::XMMATRIX* XMMatrixShadow(DirectX::XMVECTOR* ShadowPlane, DirectX::XMVECTOR* LightPosition)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixShadow(*ShadowPlane, *LightPosition));
        }

        inline DirectX::XMMATRIX* XMMatrixLookAtLH(DirectX::XMVECTOR* EyePosition, DirectX::XMVECTOR* FocusPosition, DirectX::XMVECTOR* UpDirection)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixLookAtLH(*EyePosition, *FocusPosition, *UpDirection));
        }

        inline DirectX::XMMATRIX* XMMatrixLookAtRH(DirectX::XMVECTOR* EyePosition, DirectX::XMVECTOR* FocusPosition, DirectX::XMVECTOR* UpDirection)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixLookAtRH(*EyePosition, *FocusPosition, *UpDirection));
        }

        inline DirectX::XMMATRIX* XMMatrixLookToLH(DirectX::XMVECTOR* EyePosition, DirectX::XMVECTOR* EyeDirection, DirectX::XMVECTOR* UpDirection)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixLookToLH(*EyePosition, *EyeDirection, *UpDirection));
        }

        inline DirectX::XMMATRIX* XMMatrixLookToRH(DirectX::XMVECTOR* EyePosition, DirectX::XMVECTOR* EyeDirection, DirectX::XMVECTOR* UpDirection)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixLookToRH(*EyePosition, *EyeDirection, *UpDirection));
        }

        inline DirectX::XMMATRIX* XMMatrixPerspectiveLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveLH(ViewWidth, ViewHeight, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixPerspectiveRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveRH(ViewWidth, ViewHeight, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixPerspectiveFovLH(float FovAngleY, float AspectRatio, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveFovLH(FovAngleY, AspectRatio, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixPerspectiveFovRH(float FovAngleY, float AspectRatio, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveFovRH(FovAngleY, AspectRatio, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixPerspectiveOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixPerspectiveOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixPerspectiveOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixOrthographicLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicLH(ViewWidth, ViewHeight, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixOrthographicRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicRH(ViewWidth, ViewHeight, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixOrthographicOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicOffCenterLH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
        }

        inline DirectX::XMMATRIX* XMMatrixOrthographicOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ)
        {
            return new DirectX::XMMATRIX(DirectX::XMMatrixOrthographicOffCenterRH(ViewLeft, ViewRight, ViewBottom, ViewTop, NearZ, FarZ));
        }

        inline bool XMQuaternionEqual(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2)
        {
            return DirectX::XMQuaternionEqual(*Q1, *Q2);
        }

        inline bool XMQuaternionNotEqual(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2)
        {
            return DirectX::XMQuaternionNotEqual(*Q1, *Q2);
        }

        inline bool XMQuaternionIsNaN(DirectX::XMVECTOR* Q)
        {
            return DirectX::XMQuaternionIsNaN(*Q);
        }

        inline bool XMQuaternionIsInfinite(DirectX::XMVECTOR* Q)
        {
            return DirectX::XMQuaternionIsInfinite(*Q);
        }

        inline bool XMQuaternionIsIdentity(DirectX::XMVECTOR* Q)
        {
            return DirectX::XMQuaternionIsIdentity(*Q);
        }

        inline DirectX::XMVECTOR* XMQuaternionDot(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionDot(*Q1, *Q2));
        }

        inline DirectX::XMVECTOR* XMQuaternionMultiply(DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionMultiply(*Q1, *Q2));
        }

        inline DirectX::XMVECTOR* XMQuaternionLengthSq(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionLengthSq(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionReciprocalLength(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionReciprocalLength(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionLength(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionLength(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionNormalizeEst(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionNormalizeEst(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionNormalize(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionNormalize(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionConjugate(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionConjugate(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionInverse(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionInverse(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionLn(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionLn(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionExp(DirectX::XMVECTOR* Q)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionExp(*Q));
        }

        inline DirectX::XMVECTOR* XMQuaternionSlerp(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, float t)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionSlerp(*Q0, *Q1, t));
        }

        inline DirectX::XMVECTOR* XMQuaternionSlerpV(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* T)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionSlerpV(*Q0, *Q1, *T));
        }

        inline DirectX::XMVECTOR* XMQuaternionSquad(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* Q3, float t)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionSquad(*Q0, *Q1, *Q2, *Q3, t));
        }

        inline DirectX::XMVECTOR* XMQuaternionSquadV(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* Q3, DirectX::XMVECTOR* T)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionSquadV(*Q0, *Q1, *Q2, *Q3, *T));
        }

        inline void XMQuaternionSquadSetup(DirectX::XMVECTOR* pA, DirectX::XMVECTOR* pB, DirectX::XMVECTOR* pC, DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* Q3)
        {
            DirectX::XMQuaternionSquadSetup(pA, pB, pC, *Q0, *Q1, *Q2, *Q3);
        }

        inline DirectX::XMVECTOR* XMQuaternionBaryCentric(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, float f, float g)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionBaryCentric(*Q0, *Q1, *Q2, f, g));
        }

        inline DirectX::XMVECTOR* XMQuaternionBaryCentricV(DirectX::XMVECTOR* Q0, DirectX::XMVECTOR* Q1, DirectX::XMVECTOR* Q2, DirectX::XMVECTOR* F, DirectX::XMVECTOR* G)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionBaryCentricV(*Q0, *Q1, *Q2, *F, *G));
        }

        inline DirectX::XMVECTOR* XMQuaternionIdentity()
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionIdentity());
        }

        inline DirectX::XMVECTOR* XMQuaternionRotationRollPitchYaw(float Pitch, float Yaw, float Roll)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionRotationRollPitchYaw(Pitch, Yaw, Roll));
        }

        inline DirectX::XMVECTOR* XMQuaternionRotationRollPitchYawFromVector(DirectX::XMVECTOR* Angles)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionRotationRollPitchYawFromVector(*Angles));
        }

        inline DirectX::XMVECTOR* XMQuaternionRotationNormal(DirectX::XMVECTOR* NormalAxis, float Angle)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionRotationNormal(*NormalAxis, Angle));
        }

        inline DirectX::XMVECTOR* XMQuaternionRotationAxis(DirectX::XMVECTOR* Axis, float Angle)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionRotationAxis(*Axis, Angle));
        }

        inline DirectX::XMVECTOR* XMQuaternionRotationMatrix(DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMQuaternionRotationMatrix(*M));
        }

        inline void XMQuaternionToAxisAngle(DirectX::XMVECTOR* pAxis, float* pAngle, DirectX::XMVECTOR* Q)
        {
            DirectX::XMQuaternionToAxisAngle(pAxis, pAngle, *Q);
        }

        inline bool XMPlaneEqual(DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2)
        {
            return DirectX::XMPlaneEqual(*P1, *P2);
        }

        inline bool XMPlaneNearEqual(DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2, DirectX::XMVECTOR* Epsilon)
        {
            return DirectX::XMPlaneNearEqual(*P1, *P2, *Epsilon);
        }

        inline bool XMPlaneNotEqual(DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2)
        {
            return DirectX::XMPlaneNotEqual(*P1, *P2);
        }

        inline bool XMPlaneIsNaN(DirectX::XMVECTOR* P)
        {
            return DirectX::XMPlaneIsNaN(*P);
        }

        inline bool XMPlaneIsInfinite(DirectX::XMVECTOR* P)
        {
            return DirectX::XMPlaneIsInfinite(*P);
        }

        inline DirectX::XMVECTOR* XMPlaneDot(DirectX::XMVECTOR* P, DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneDot(*P, *V));
        }

        inline DirectX::XMVECTOR* XMPlaneDotCoord(DirectX::XMVECTOR* P, DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneDotCoord(*P, *V));
        }

        inline DirectX::XMVECTOR* XMPlaneDotNormal(DirectX::XMVECTOR* P, DirectX::XMVECTOR* V)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneDotNormal(*P, *V));
        }

        inline DirectX::XMVECTOR* XMPlaneNormalizeEst(DirectX::XMVECTOR* P)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneNormalizeEst(*P));
        }

        inline DirectX::XMVECTOR* XMPlaneNormalize(DirectX::XMVECTOR* P)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneNormalize(*P));
        }

        inline DirectX::XMVECTOR* XMPlaneIntersectLine(DirectX::XMVECTOR* P, DirectX::XMVECTOR* LinePoint1, DirectX::XMVECTOR* LinePoint2)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneIntersectLine(*P, *LinePoint1, *LinePoint2));
        }

        inline void XMPlaneIntersectPlane(DirectX::XMVECTOR* pLinePoint1, DirectX::XMVECTOR* pLinePoint2, DirectX::XMVECTOR* P1, DirectX::XMVECTOR* P2)
        {
            DirectX::XMPlaneIntersectPlane(pLinePoint1, pLinePoint2, *P1, *P2);
        }

        inline DirectX::XMVECTOR* XMPlaneTransform(DirectX::XMVECTOR* P, DirectX::XMMATRIX* M)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneTransform(*P, *M));
        }

        inline DirectX::XMFLOAT4* XMPlaneTransformStream(DirectX::XMFLOAT4* pOutputStream, unsigned int OutputStride, DirectX::XMFLOAT4* pInputStream, unsigned int InputStride, unsigned int PlaneCount, DirectX::XMMATRIX* M)
        {
            return DirectX::XMPlaneTransformStream(pOutputStream, OutputStride, pInputStream, InputStride, PlaneCount, *M);
        }

        inline DirectX::XMVECTOR* XMPlaneFromPointNormal(DirectX::XMVECTOR* Point, DirectX::XMVECTOR* Normal)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneFromPointNormal(*Point, *Normal));
        }

        inline DirectX::XMVECTOR* XMPlaneFromPoints(DirectX::XMVECTOR* Point1, DirectX::XMVECTOR* Point2, DirectX::XMVECTOR* Point3)
        {
            return new DirectX::XMVECTOR(DirectX::XMPlaneFromPoints(*Point1, *Point2, *Point3));
        }

        inline bool XMColorEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2)
        {
            return DirectX::XMColorEqual(*C1, *C2);
        }

        inline bool XMColorNotEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2)
        {
            return DirectX::XMColorNotEqual(*C1, *C2);
        }

        inline bool XMColorGreater(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2)
        {
            return DirectX::XMColorGreater(*C1, *C2);
        }

        inline bool XMColorGreaterOrEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2)
        {
            return DirectX::XMColorGreaterOrEqual(*C1, *C2);
        }

        inline bool XMColorLess(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2)
        {
            return DirectX::XMColorLess(*C1, *C2);
        }

        inline bool XMColorLessOrEqual(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2)
        {
            return DirectX::XMColorLessOrEqual(*C1, *C2);
        }

        inline bool XMColorIsNaN(DirectX::XMVECTOR* C)
        {
            return DirectX::XMColorIsNaN(*C);
        }

        inline bool XMColorIsInfinite(DirectX::XMVECTOR* C)
        {
            return DirectX::XMColorIsInfinite(*C);
        }

        inline DirectX::XMVECTOR* XMColorNegative(DirectX::XMVECTOR* C)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorNegative(*C));
        }

        inline DirectX::XMVECTOR* XMColorModulate(DirectX::XMVECTOR* C1, DirectX::XMVECTOR* C2)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorModulate(*C1, *C2));
        }

        inline DirectX::XMVECTOR* XMColorAdjustSaturation(DirectX::XMVECTOR* C, float Saturation)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorAdjustSaturation(*C, Saturation));
        }

        inline DirectX::XMVECTOR* XMColorAdjustContrast(DirectX::XMVECTOR* C, float Contrast)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorAdjustContrast(*C, Contrast));
        }

        inline DirectX::XMVECTOR* XMColorRGBToHSL(DirectX::XMVECTOR* rgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorRGBToHSL(*rgb));
        }

        inline DirectX::XMVECTOR* XMColorHSLToRGB(DirectX::XMVECTOR* hsl)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorHSLToRGB(*hsl));
        }

        inline DirectX::XMVECTOR* XMColorRGBToHSV(DirectX::XMVECTOR* rgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorRGBToHSV(*rgb));
        }

        inline DirectX::XMVECTOR* XMColorHSVToRGB(DirectX::XMVECTOR* hsv)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorHSVToRGB(*hsv));
        }

        inline DirectX::XMVECTOR* XMColorRGBToYUV(DirectX::XMVECTOR* rgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorRGBToYUV(*rgb));
        }

        inline DirectX::XMVECTOR* XMColorYUVToRGB(DirectX::XMVECTOR* yuv)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorYUVToRGB(*yuv));
        }

        inline DirectX::XMVECTOR* XMColorRGBToYUV_HD(DirectX::XMVECTOR* rgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorRGBToYUV_HD(*rgb));
        }

        inline DirectX::XMVECTOR* XMColorYUVToRGB_HD(DirectX::XMVECTOR* yuv)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorYUVToRGB_HD(*yuv));
        }

        inline DirectX::XMVECTOR* XMColorRGBToXYZ(DirectX::XMVECTOR* rgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorRGBToXYZ(*rgb));
        }

        inline DirectX::XMVECTOR* XMColorXYZToRGB(DirectX::XMVECTOR* xyz)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorRGBToXYZ(*xyz));
        }

        inline DirectX::XMVECTOR* XMColorXYZToSRGB(DirectX::XMVECTOR* xyz)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorXYZToSRGB(*xyz));
        }

        inline DirectX::XMVECTOR* XMColorSRGBToXYZ(DirectX::XMVECTOR* srgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorSRGBToXYZ(*srgb));
        }

        inline DirectX::XMVECTOR* XMColorRGBToSRGB(DirectX::XMVECTOR* rgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorRGBToSRGB(*rgb));
        }

        inline DirectX::XMVECTOR* XMColorSRGBToRGB(DirectX::XMVECTOR* srgb)
        {
            return new DirectX::XMVECTOR(DirectX::XMColorSRGBToRGB(*srgb));
        }

        inline bool XMVerifyCPUSupport()
        {
            return DirectX::XMVerifyCPUSupport();
        }

        inline DirectX::XMVECTOR* XMFresnelTerm(DirectX::XMVECTOR* CosIncidentAngle, DirectX::XMVECTOR* RefractionIndex)
        {
            return new DirectX::XMVECTOR(DirectX::XMFresnelTerm(*CosIncidentAngle, *RefractionIndex));
        }

        UMVecFunc(g_XMSinCoefficients0)
        UMVecFunc(g_XMSinCoefficients1)
        UMVecFunc(g_XMCosCoefficients0)
        UMVecFunc(g_XMCosCoefficients1)
        UMVecFunc(g_XMTanCoefficients0)
        UMVecFunc(g_XMTanCoefficients1)
        UMVecFunc(g_XMTanCoefficients2)
        UMVecFunc(g_XMArcCoefficients0)
        UMVecFunc(g_XMArcCoefficients1)
        UMVecFunc(g_XMATanCoefficients0)
        UMVecFunc(g_XMATanCoefficients1)
        UMVecFunc(g_XMATanEstCoefficients0)
        UMVecFunc(g_XMATanEstCoefficients1)
        UMVecFunc(g_XMTanEstCoefficients)
        UMVecFunc(g_XMArcEstCoefficients)
        UMVecFunc(g_XMPiConstants0)
        UMVecFunc(g_XMIdentityR0)
        UMVecFunc(g_XMIdentityR1)
        UMVecFunc(g_XMIdentityR2)
        UMVecFunc(g_XMIdentityR3)
        UMVecFunc(g_XMNegIdentityR0)
        UMVecFunc(g_XMNegIdentityR1)
        UMVecFunc(g_XMNegIdentityR2)
        UMVecFunc(g_XMNegIdentityR3)
        UMVecFunc(g_XMNegativeZero)
        UMVecFunc(g_XMNegate3)
        UMVecFunc(g_XMMaskXY)
        UMVecFunc(g_XMMask3)
        UMVecFunc(g_XMMaskX)
        UMVecFunc(g_XMMaskY)
        UMVecFunc(g_XMMaskZ)
        UMVecFunc(g_XMMaskW)
        UMVecFunc(g_XMOne)
        UMVecFunc(g_XMOne3)
        UMVecFunc(g_XMZero)
        UMVecFunc(g_XMTwo)
        UMVecFunc(g_XMFour)
        UMVecFunc(g_XMSix)
        UMVecFunc(g_XMNegativeOne)
        UMVecFunc(g_XMOneHalf)
        UMVecFunc(g_XMNegativeOneHalf)
        UMVecFunc(g_XMNegativeTwoPi)
        UMVecFunc(g_XMNegativePi)
        UMVecFunc(g_XMHalfPi)
        UMVecFunc(g_XMPi)
        UMVecFunc(g_XMReciprocalPi)
        UMVecFunc(g_XMTwoPi)
        UMVecFunc(g_XMReciprocalTwoPi)
        UMVecFunc(g_XMEpsilon)
        UMVecFunc(g_XMInfinity)
        UMVecFunc(g_XMQNaN)
        UMVecFunc(g_XMQNaNTest)
        UMVecFunc(g_XMAbsMask)
        UMVecFunc(g_XMFltMin)
        UMVecFunc(g_XMFltMax)
        UMVecFunc(g_XMNegOneMask)
        UMVecFunc(g_XMMaskA8R8G8B8)
        UMVecFunc(g_XMFlipA8R8G8B8)
        UMVecFunc(g_XMFixAA8R8G8B8)
        UMVecFunc(g_XMNormalizeA8R8G8B8)
        UMVecFunc(g_XMMaskA2B10G10R10)
        UMVecFunc(g_XMFlipA2B10G10R10)
        UMVecFunc(g_XMFixAA2B10G10R10)
        UMVecFunc(g_XMNormalizeA2B10G10R10)
        UMVecFunc(g_XMMaskX16Y16)
        UMVecFunc(g_XMFlipX16Y16)
        UMVecFunc(g_XMFixX16Y16)
        UMVecFunc(g_XMNormalizeX16Y16)
        UMVecFunc(g_XMMaskX16Y16Z16W16)
        UMVecFunc(g_XMFlipX16Y16Z16W16)
        UMVecFunc(g_XMFixX16Y16Z16W16)
        UMVecFunc(g_XMNormalizeX16Y16Z16W16)
        UMVecFunc(g_XMNoFraction)
        UMVecFunc(g_XMMaskByte)
        UMVecFunc(g_XMNegateX)
        UMVecFunc(g_XMNegateY)
        UMVecFunc(g_XMNegateZ)
        UMVecFunc(g_XMNegateW)
        UMVecFunc(g_XMSelect0101)
        UMVecFunc(g_XMSelect1010)
        UMVecFunc(g_XMOneHalfMinusEpsilon)
        UMVecFunc(g_XMSelect1000)
        UMVecFunc(g_XMSelect1100)
        UMVecFunc(g_XMSelect1110)
        UMVecFunc(g_XMSelect1011)
        UMVecFunc(g_XMFixupY16)
        UMVecFunc(g_XMFixupY16W16)
        UMVecFunc(g_XMFlipY)
        UMVecFunc(g_XMFlipZ)
        UMVecFunc(g_XMFlipW)
        UMVecFunc(g_XMFlipYZ)
        UMVecFunc(g_XMFlipZW)
        UMVecFunc(g_XMFlipYW)
        UMVecFunc(g_XMMaskDec4)
        UMVecFunc(g_XMXorDec4)
        UMVecFunc(g_XMAddUDec4)
        UMVecFunc(g_XMAddDec4)
        UMVecFunc(g_XMMulDec4)
        UMVecFunc(g_XMMaskByte4)
        UMVecFunc(g_XMXorByte4)
        UMVecFunc(g_XMAddByte4)
        UMVecFunc(g_XMFixUnsigned)
        UMVecFunc(g_XMMaxInt)
        UMVecFunc(g_XMMaxUInt)
        UMVecFunc(g_XMUnsignedFix)
        UMVecFunc(g_XMsrgbScale)
        UMVecFunc(g_XMsrgbA)
        UMVecFunc(g_XMsrgbA1)
        UMVecFunc(g_XMExponentBias)
        UMVecFunc(g_XMSubnormalExponent)
        UMVecFunc(g_XMNumTrailing)
        UMVecFunc(g_XMMinNormal)
        UMVecFunc(g_XMNegInfinity)
        UMVecFunc(g_XMNegQNaN)
        UMVecFunc(g_XMBin128)
        UMVecFunc(g_XMBinNeg150)
        UMVecFunc(g_XM253)
        UMVecFunc(g_XMExpEst1)
        UMVecFunc(g_XMExpEst2)
        UMVecFunc(g_XMExpEst3)
        UMVecFunc(g_XMExpEst4)
        UMVecFunc(g_XMExpEst5)
        UMVecFunc(g_XMExpEst6)
        UMVecFunc(g_XMExpEst7)
        UMVecFunc(g_XMLogEst0)
        UMVecFunc(g_XMLogEst1)
        UMVecFunc(g_XMLogEst2)
        UMVecFunc(g_XMLogEst3)
        UMVecFunc(g_XMLogEst4)
        UMVecFunc(g_XMLogEst5)
        UMVecFunc(g_XMLogEst6)
        UMVecFunc(g_XMLogEst7)
        UMVecFunc(g_XMLgE)
        UMVecFunc(g_XMInvLgE)
        UMVecFunc(g_UByteMax)
        UMVecFunc(g_ByteMin)
        UMVecFunc(g_ByteMax)
        UMVecFunc(g_ShortMin)
        UMVecFunc(g_ShortMax)
        UMVecFunc(g_UShortMax)
    }
}