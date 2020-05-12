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

    /****************************************************************************
    *
    * Store operations
    *
    ****************************************************************************/

	inline void XMStoreColor(DirectX::PackedVector::XMCOLOR* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreColor(pDestination, *V); }

    inline void XMStoreHalf2(DirectX::PackedVector::XMHALF2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreHalf2(pDestination, *V); }
    inline void XMStoreShortN2(DirectX::PackedVector::XMSHORTN2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreShortN2(pDestination, *V); }
    inline void XMStoreShort2(DirectX::PackedVector::XMSHORT2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreShort2(pDestination, *V); }
    inline void XMStoreUShortN2(DirectX::PackedVector::XMUSHORTN2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUShortN2(pDestination, *V); }
    inline void XMStoreUShort2(DirectX::PackedVector::XMUSHORT2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUShort2(pDestination, *V); }
    inline void XMStoreByteN2(DirectX::PackedVector::XMBYTEN2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreByteN2(pDestination, *V); }
    inline void XMStoreByte2(DirectX::PackedVector::XMBYTE2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreByte2(pDestination, *V); }
    inline void XMStoreUByteN2(DirectX::PackedVector::XMUBYTEN2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUByteN2(pDestination, *V); }
    inline void XMStoreUByte2(DirectX::PackedVector::XMUBYTE2* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUByte2(pDestination, *V); }

    inline void XMStoreU565(DirectX::PackedVector::XMU565* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreU565(pDestination, *V); }
    inline void XMStoreFloat3PK(DirectX::PackedVector::XMFLOAT3PK* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreFloat3PK(pDestination, *V); }
    inline void XMStoreFloat3SE(DirectX::PackedVector::XMFLOAT3SE* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreFloat3SE(pDestination, *V); }

    inline void XMStoreHalf4(DirectX::PackedVector::XMHALF4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreHalf4(pDestination, *V); }
    inline void XMStoreShortN4(DirectX::PackedVector::XMSHORTN4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreShortN4(pDestination, *V); }
    inline void XMStoreShort4(DirectX::PackedVector::XMSHORT4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreShort4(pDestination, *V); }
    inline void XMStoreUShortN4(DirectX::PackedVector::XMUSHORTN4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUShortN4(pDestination, *V); }
    inline void XMStoreUShort4(DirectX::PackedVector::XMUSHORT4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUShort4(pDestination, *V); }
    inline void XMStoreXDecN4(DirectX::PackedVector::XMXDECN4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreXDecN4(pDestination, *V); }
    inline void XMStoreUDecN4(DirectX::PackedVector::XMUDECN4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUDecN4(pDestination, *V); }
    inline void XMStoreUDecN4_XR(DirectX::PackedVector::XMUDECN4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUDecN4_XR(pDestination, *V); }
    inline void XMStoreUDec4(DirectX::PackedVector::XMUDEC4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUDec4(pDestination, *V); }
    inline void XMStoreByteN4(DirectX::PackedVector::XMBYTEN4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreByteN4(pDestination, *V); }
    inline void XMStoreByte4(DirectX::PackedVector::XMBYTE4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreByte4(pDestination, *V); }
    inline void XMStoreUByteN4(DirectX::PackedVector::XMUBYTEN4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUByteN4(pDestination, *V); }
    inline void XMStoreUByte4(DirectX::PackedVector::XMUBYTE4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUByte4(pDestination, *V); }
    inline void XMStoreUNibble4(DirectX::PackedVector::XMUNIBBLE4* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreUNibble4(pDestination, *V); }
    inline void XMStoreU555(DirectX::PackedVector::XMU555* pDestination, XMVECTOR* V) { DirectX::PackedVector::XMStoreU555(pDestination, *V); }
}