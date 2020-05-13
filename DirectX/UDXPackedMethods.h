#pragma once

#include <DirectXPackedVector.h>

using namespace DirectX::PackedVector;
namespace DirectX
{
    /****************************************************************************
    *
    * Data conversion operations
    *
    ****************************************************************************/

	inline float XMConvertHalfToFloat(unsigned short Value) { return DirectX::PackedVector::XMConvertHalfToFloat(Value); }
    inline float* XMConvertHalfToFloatStream(float* pOutputStream,
        unsigned int OutputStride,
        unsigned short* pInputStream,
		unsigned int InputStride, unsigned int HalfCount) {
		return DirectX::PackedVector::XMConvertHalfToFloatStream(pOutputStream, OutputStride, pInputStream, InputStride, HalfCount);
	}
	inline unsigned short XMConvertFloatToHalf(float Value) { return DirectX::PackedVector::XMConvertFloatToHalf(Value); }
    inline unsigned short* XMConvertFloatToHalfStream(unsigned short* pOutputStream,
        unsigned int OutputStride,
        float* pInputStream,
        unsigned int InputStride, unsigned int FloatCount) {
		return DirectX::PackedVector::XMConvertFloatToHalfStream(pOutputStream, OutputStride, pInputStream, InputStride, FloatCount);
	}

    /****************************************************************************
     *
     * Load operations
     *
     ****************************************************************************/

#define UMAllocVectorReturn(Func) DirectX::XMVECTOR* ptr = (DirectX::XMVECTOR*)_aligned_malloc(16U, 16); *ptr = DirectX::XMVECTOR(Func); return ptr;
	inline XMVECTOR* XMLoadColor(DirectX::PackedVector::XMCOLOR* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadColor(pSource)); }

    inline XMVECTOR* XMLoadHalf2(DirectX::PackedVector::XMHALF2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadHalf2(pSource)); }
    inline XMVECTOR* XMLoadShortN2(DirectX::PackedVector::XMSHORTN2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadShortN2(pSource)); }
    inline XMVECTOR* XMLoadShort2(DirectX::PackedVector::XMSHORT2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadShort2(pSource)); }
    inline XMVECTOR* XMLoadUShortN2(DirectX::PackedVector::XMUSHORTN2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUShortN2(pSource)); }
    inline XMVECTOR* XMLoadUShort2(DirectX::PackedVector::XMUSHORT2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUShort2(pSource)); }
    inline XMVECTOR* XMLoadByteN2(DirectX::PackedVector::XMBYTEN2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadByteN2(pSource)); }
    inline XMVECTOR* XMLoadByte2(DirectX::PackedVector::XMBYTE2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadByte2(pSource)); }
    inline XMVECTOR* XMLoadUByteN2(DirectX::PackedVector::XMUBYTEN2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUByteN2(pSource)); }
    inline XMVECTOR* XMLoadUByte2(DirectX::PackedVector::XMUBYTE2* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUByte2(pSource)); }

    inline XMVECTOR* XMLoadU565(DirectX::PackedVector::XMU565* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadU565(pSource)); }
    inline XMVECTOR* XMLoadFloat3PK(DirectX::PackedVector::XMFLOAT3PK* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadFloat3PK(pSource)); }
    inline XMVECTOR* XMLoadFloat3SE(DirectX::PackedVector::XMFLOAT3SE* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadFloat3SE(pSource)); }

    inline XMVECTOR* XMLoadHalf4(DirectX::PackedVector::XMHALF4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadHalf4(pSource)); }
    inline XMVECTOR* XMLoadShortN4(DirectX::PackedVector::XMSHORTN4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadShortN4(pSource)); }
    inline XMVECTOR* XMLoadShort4(DirectX::PackedVector::XMSHORT4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadShort4(pSource)); }
    inline XMVECTOR* XMLoadUShortN4(DirectX::PackedVector::XMUSHORTN4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUShortN4(pSource)); }
    inline XMVECTOR* XMLoadUShort4(DirectX::PackedVector::XMUSHORT4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUShort4(pSource)); }
    inline XMVECTOR* XMLoadXDecN4(DirectX::PackedVector::XMXDECN4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadXDecN4(pSource)); }
    inline XMVECTOR* XMLoadUDecN4(DirectX::PackedVector::XMUDECN4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUDecN4(pSource)); }
    inline XMVECTOR* XMLoadUDecN4_XR(DirectX::PackedVector::XMUDECN4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUDecN4_XR(pSource)); }
    inline XMVECTOR* XMLoadUDec4(DirectX::PackedVector::XMUDEC4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUDec4(pSource)); }
    inline XMVECTOR* XMLoadByteN4(DirectX::PackedVector::XMBYTEN4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadByteN4(pSource)); }
    inline XMVECTOR* XMLoadByte4(DirectX::PackedVector::XMBYTE4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadByte4(pSource)); }
    inline XMVECTOR* XMLoadUByteN4(DirectX::PackedVector::XMUBYTEN4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUByteN4(pSource)); }
    inline XMVECTOR* XMLoadUByte4(DirectX::PackedVector::XMUBYTE4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUByte4(pSource)); }
    inline XMVECTOR* XMLoadUNibble4(DirectX::PackedVector::XMUNIBBLE4* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadUNibble4(pSource)); }
    inline XMVECTOR* XMLoadU555(DirectX::PackedVector::XMU555* pSource) { UMAllocVectorReturn(DirectX::PackedVector::XMLoadU555(pSource)); }
}