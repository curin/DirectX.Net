#include "pch.h"
#include "DXPackedVector.h"

inline float DirectX::PackedVector::PackedVectorMath::XMConvertHalfToFloat(unsigned short Value)
{
	return DirectX::XMConvertHalfToFloat(Value);
}

inline array<float>^ DirectX::PackedVector::PackedVectorMath::XMConvertHalfToFloatStream(array<float>^ pOutputStream, unsigned int OutputStride, array<unsigned short>^ pInputStream, unsigned int InputStride, unsigned int HalfCount)
{
	pin_ptr<float> pOut = &pOutputStream[0];
	pin_ptr<unsigned short> pIn = &pInputStream[0];

	DirectX::XMConvertHalfToFloatStream(pOut, OutputStride, pIn, InputStride, HalfCount);

	return pOutputStream;
}

inline unsigned short DirectX::PackedVector::PackedVectorMath::XMConvertFloatToHalf(float Value)
{
	return DirectX::XMConvertFloatToHalf(Value);
}

inline array<unsigned short>^ DirectX::PackedVector::PackedVectorMath::XMConvertFloatToHalfStream(array<unsigned short>^ pOutputStream, unsigned int OutputStride, array<float>^ pInputStream, unsigned int InputStride, unsigned int FloatCount)
{
	pin_ptr<unsigned short> pOut = &pOutputStream[0];
	pin_ptr<float> pIn = &pInputStream[0];
	
	DirectX::XMConvertFloatToHalfStream(pOut, OutputStride, pIn, InputStride, FloatCount);

	return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadColor(DirectX::PackedVector::XMCOLOR* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadColor(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadHalf2(DirectX::PackedVector::XMHALF2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadHalf2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadShortN2(DirectX::PackedVector::XMSHORTN2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShortN2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadShort2(DirectX::PackedVector::XMSHORT2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShort2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUShortN2(DirectX::PackedVector::XMUSHORTN2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShortN2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUShort2(DirectX::PackedVector::XMUSHORT2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShort2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadByteN2(DirectX::PackedVector::XMBYTEN2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByteN2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadByte2(DirectX::PackedVector::XMBYTE2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByte2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUByteN2(DirectX::PackedVector::XMUBYTEN2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByteN2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUByte2(DirectX::PackedVector::XMUBYTE2* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByte2(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadU565(DirectX::PackedVector::XMU565* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadU565(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadFloat3PK(DirectX::PackedVector::XMFLOAT3PK* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadFloat3PK(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadFloat3SE(DirectX::PackedVector::XMFLOAT3SE* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadFloat3SE(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadHalf4(DirectX::PackedVector::XMHALF4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadHalf4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadShortN4(DirectX::PackedVector::XMSHORTN4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShortN4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadShort4(DirectX::PackedVector::XMSHORT4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShort4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUShortN4(DirectX::PackedVector::XMUSHORTN4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShortN4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUShort4(DirectX::PackedVector::XMUSHORT4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShort4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadXDecN4(DirectX::PackedVector::XMXDECN4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadXDecN4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUDecN4(DirectX::PackedVector::XMUDECN4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDecN4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUDecN4_XR(DirectX::PackedVector::XMUDECN4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDecN4_XR(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUDec4(DirectX::PackedVector::XMUDEC4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDec4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadByteN4(DirectX::PackedVector::XMBYTEN4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByteN4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadByte4(DirectX::PackedVector::XMBYTE4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByte4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUByteN4(DirectX::PackedVector::XMUBYTEN4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByteN4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUByte4(DirectX::PackedVector::XMUBYTE4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByte4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadUNibble4(DirectX::PackedVector::XMUNIBBLE4* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUNibble4(pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVector::PackedVectorMath::XMLoadU555(DirectX::PackedVector::XMU555* pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadU555(pSource));
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreColor(DirectX::PackedVector::XMCOLOR* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreColor(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreHalf2(DirectX::PackedVector::XMHALF2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreHalf2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreShortN2(DirectX::PackedVector::XMSHORTN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreShortN2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreShort2(DirectX::PackedVector::XMSHORT2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreShort2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUShortN2(DirectX::PackedVector::XMUSHORTN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUShortN2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUShort2(DirectX::PackedVector::XMUSHORT2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUShort2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreByteN2(DirectX::PackedVector::XMBYTEN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreByteN2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreByte2(DirectX::PackedVector::XMBYTE2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreByte2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUByteN2(DirectX::PackedVector::XMUBYTEN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUByteN2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUByte2(DirectX::PackedVector::XMUBYTE2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUByte2(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreU565(DirectX::PackedVector::XMU565* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreU565(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreFloat3PK(DirectX::PackedVector::XMFLOAT3PK* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreFloat3PK(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreFloat3SE(DirectX::PackedVector::XMFLOAT3SE* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreFloat3SE(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreHalf4(DirectX::PackedVector::XMHALF4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreHalf4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreShortN4(DirectX::PackedVector::XMSHORTN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreShortN4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreShort4(DirectX::PackedVector::XMSHORT4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreShort4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUShortN4(DirectX::PackedVector::XMUSHORTN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUShortN4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUShort4(DirectX::PackedVector::XMUSHORT4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUShort4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreXDecN4(DirectX::PackedVector::XMXDECN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreXDecN4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUDecN4(DirectX::PackedVector::XMUDECN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUDecN4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUDecN4_XR(DirectX::PackedVector::XMUDECN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUDecN4_XR(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUDec4(DirectX::PackedVector::XMUDEC4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUDec4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreByteN4(DirectX::PackedVector::XMBYTEN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreByteN4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreByte4(DirectX::PackedVector::XMBYTE4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreByte4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUByteN4(DirectX::PackedVector::XMUBYTEN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUByteN4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUByte4(DirectX::PackedVector::XMUBYTE4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUByte4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreUNibble4(DirectX::PackedVector::XMUNIBBLE4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUNibble4(pDestination, *V->_vect);
}

inline void DirectX::PackedVector::PackedVectorMath::XMStoreU555(DirectX::PackedVector::XMU555* pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreU555(pDestination, *V->_vect);
}
