#include "pch.h"
#include "DXPackedVector.h"
#include <DirectXPackedVector.h>

inline float DirectX::PackedVectors::PackedVectorMath::XMConvertHalfToFloat(unsigned short Value)
{
	return DirectX::XMConvertHalfToFloat(Value);
}

inline array<float>^ DirectX::PackedVectors::PackedVectorMath::XMConvertHalfToFloatStream(array<float>^ pOutputStream, unsigned int OutputStride, array<unsigned short>^ pInputStream, unsigned int InputStride, unsigned int HalfCount)
{
	pin_ptr<float> pOut = &pOutputStream[0];
	pin_ptr<unsigned short> pIn = &pInputStream[0];

	DirectX::XMConvertHalfToFloatStream(pOut, OutputStride, pIn, InputStride, HalfCount);

	return pOutputStream;
}

inline unsigned short DirectX::PackedVectors::PackedVectorMath::XMConvertFloatToHalf(float Value)
{
	return DirectX::XMConvertFloatToHalf(Value);
}

inline array<unsigned short>^ DirectX::PackedVectors::PackedVectorMath::XMConvertFloatToHalfStream(array<unsigned short>^ pOutputStream, unsigned int OutputStride, array<float>^ pInputStream, unsigned int InputStride, unsigned int FloatCount)
{
	pin_ptr<unsigned short> pOut = &pOutputStream[0];
	pin_ptr<float> pIn = &pInputStream[0];
	
	DirectX::XMConvertFloatToHalfStream(pOut, OutputStride, pIn, InputStride, FloatCount);

	return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadColor(DirectX::PackedVectors::XMCOLOR* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMCOLOR> pSourc = pSource;
	DirectX::PackedVector::XMCOLOR* source = (DirectX::PackedVector::XMCOLOR*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadColor(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadHalf2(DirectX::PackedVectors::XMHALF2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMHALF2> pSourc = pSource;
	DirectX::PackedVector::XMHALF2* source = (DirectX::PackedVector::XMHALF2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadHalf2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadShortN2(DirectX::PackedVectors::XMSHORTN2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMSHORTN2> pSourc = pSource;
	DirectX::PackedVector::XMSHORTN2* source = (DirectX::PackedVector::XMSHORTN2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShortN2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadShort2(DirectX::PackedVectors::XMSHORT2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMSHORT2> pSourc = pSource;
	DirectX::PackedVector::XMSHORT2* source = (DirectX::PackedVector::XMSHORT2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShort2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUShortN2(DirectX::PackedVectors::XMUSHORTN2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORTN2> pSourc = pSource;
	DirectX::PackedVector::XMUSHORTN2* source = (DirectX::PackedVector::XMUSHORTN2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShortN2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUShort2(DirectX::PackedVectors::XMUSHORT2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORT2> pSourc = pSource;
	DirectX::PackedVector::XMUSHORT2* source = (DirectX::PackedVector::XMUSHORT2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShort2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadByteN2(DirectX::PackedVectors::XMBYTEN2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMBYTEN2> pSourc = pSource;
	DirectX::PackedVector::XMBYTEN2* source = (DirectX::PackedVector::XMBYTEN2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByteN2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadByte2(DirectX::PackedVectors::XMBYTE2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMBYTE2> pSourc = pSource;
	DirectX::PackedVector::XMBYTE2* source = (DirectX::PackedVector::XMBYTE2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByte2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUByteN2(DirectX::PackedVectors::XMUBYTEN2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTEN2> pSourc = pSource;
	DirectX::PackedVector::XMUBYTEN2* source = (DirectX::PackedVector::XMUBYTEN2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByteN2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUByte2(DirectX::PackedVectors::XMUBYTE2* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTE2> pSourc = pSource;
	DirectX::PackedVector::XMUBYTE2* source = (DirectX::PackedVector::XMUBYTE2*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByte2(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadU565(DirectX::PackedVectors::XMU565^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadU565((DirectX::PackedVector::XMU565*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadFloat3PK(DirectX::PackedVectors::XMFLOAT3PK^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadFloat3PK((DirectX::PackedVector::XMFLOAT3PK*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadFloat3SE(DirectX::PackedVectors::XMFLOAT3SE^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadFloat3SE((DirectX::PackedVector::XMFLOAT3SE*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadHalf4(DirectX::PackedVectors::XMHALF4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMHALF4> pSourc = pSource;
	DirectX::PackedVector::XMHALF4* source = (DirectX::PackedVector::XMHALF4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadHalf4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadShortN4(DirectX::PackedVectors::XMSHORTN4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMSHORTN4> pSourc = pSource;
	DirectX::PackedVector::XMSHORTN4* source = (DirectX::PackedVector::XMSHORTN4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShortN4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadShort4(DirectX::PackedVectors::XMSHORT4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMSHORT4> pSourc = pSource;
	DirectX::PackedVector::XMSHORT4* source = (DirectX::PackedVector::XMSHORT4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShort4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUShortN4(DirectX::PackedVectors::XMUSHORTN4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORTN4> pSourc = pSource;
	DirectX::PackedVector::XMUSHORTN4* source = (DirectX::PackedVector::XMUSHORTN4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShortN4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUShort4(DirectX::PackedVectors::XMUSHORT4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORT4> pSourc = pSource;
	DirectX::PackedVector::XMUSHORT4* source = (DirectX::PackedVector::XMUSHORT4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShort4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadXDecN4(DirectX::PackedVectors::XMXDECN4^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadXDecN4((DirectX::PackedVector::XMXDECN4*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUDecN4(DirectX::PackedVectors::XMUDECN4^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDecN4((DirectX::PackedVector::XMUDECN4*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUDecN4_XR(DirectX::PackedVectors::XMUDECN4^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDecN4_XR((DirectX::PackedVector::XMUDECN4*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUDec4(DirectX::PackedVectors::XMUDEC4^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDec4((DirectX::PackedVector::XMUDEC4*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadByteN4(DirectX::PackedVectors::XMBYTEN4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMBYTEN4> pSourc = pSource;
	DirectX::PackedVector::XMBYTEN4* source = (DirectX::PackedVector::XMBYTEN4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByteN4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadByte4(DirectX::PackedVectors::XMBYTE4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMBYTE4> pSourc = pSource;
	DirectX::PackedVector::XMBYTE4* source = (DirectX::PackedVector::XMBYTE4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByte4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUByteN4(DirectX::PackedVectors::XMUBYTEN4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTEN4> pSourc = pSource;
	DirectX::PackedVector::XMUBYTEN4* source = (DirectX::PackedVector::XMUBYTEN4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByteN4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUByte4(DirectX::PackedVectors::XMUBYTE4* pSource)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTE4> pSourc = pSource;
	DirectX::PackedVector::XMUBYTE4* source = (DirectX::PackedVector::XMUBYTE4*)pSourc;
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByte4(source));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadUNibble4(DirectX::PackedVectors::XMUNIBBLE4^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUNibble4((DirectX::PackedVector::XMUNIBBLE4*)pSource));
}

inline DirectX::Math::XMVECTOR^ DirectX::PackedVectors::PackedVectorMath::XMLoadU555(DirectX::PackedVectors::XMU555^ pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadU555((DirectX::PackedVector::XMU555*)pSource));
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreColor(DirectX::PackedVectors::XMCOLOR* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMCOLOR> pDest = pDestination;
	DirectX::PackedVector::XMCOLOR* dest = (DirectX::PackedVector::XMCOLOR*)pDest;
	DirectX::PackedVector::XMStoreColor(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreHalf2(DirectX::PackedVectors::XMHALF2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMHALF2> pDest = pDestination;
	DirectX::PackedVector::XMHALF2* dest = (DirectX::PackedVector::XMHALF2*)pDest;
	DirectX::PackedVector::XMStoreHalf2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreShortN2(DirectX::PackedVectors::XMSHORTN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMSHORTN2> pDest = pDestination;
	DirectX::PackedVector::XMSHORTN2* dest = (DirectX::PackedVector::XMSHORTN2*)pDest;
	DirectX::PackedVector::XMStoreShortN2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreShort2(DirectX::PackedVectors::XMSHORT2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMSHORT2> pDest = pDestination;
	DirectX::PackedVector::XMSHORT2* dest = (DirectX::PackedVector::XMSHORT2*)pDest;
	DirectX::PackedVector::XMStoreShort2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUShortN2(DirectX::PackedVectors::XMUSHORTN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORTN2> pDest = pDestination;
	DirectX::PackedVector::XMUSHORTN2* dest = (DirectX::PackedVector::XMUSHORTN2*)pDest;
	DirectX::PackedVector::XMStoreUShortN2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUShort2(DirectX::PackedVectors::XMUSHORT2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORT2> pDest = pDestination;
	DirectX::PackedVector::XMUSHORT2* dest = (DirectX::PackedVector::XMUSHORT2*)pDest;
	DirectX::PackedVector::XMStoreUShort2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreByteN2(DirectX::PackedVectors::XMBYTEN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMBYTEN2> pDest = pDestination;
	DirectX::PackedVector::XMBYTEN2* dest = (DirectX::PackedVector::XMBYTEN2*)pDest;
	DirectX::PackedVector::XMStoreByteN2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreByte2(DirectX::PackedVectors::XMBYTE2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMBYTE2> pDest = pDestination;
	DirectX::PackedVector::XMBYTE2* dest = (DirectX::PackedVector::XMBYTE2*)pDest;
	DirectX::PackedVector::XMStoreByte2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUByteN2(DirectX::PackedVectors::XMUBYTEN2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTEN2> pDest = pDestination;
	DirectX::PackedVector::XMUBYTEN2* dest = (DirectX::PackedVector::XMUBYTEN2*)pDest;
	DirectX::PackedVector::XMStoreUByteN2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUByte2(DirectX::PackedVectors::XMUBYTE2* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTE2> pDest = pDestination;
	DirectX::PackedVector::XMUBYTE2* dest = (DirectX::PackedVector::XMUBYTE2*)pDest;
	DirectX::PackedVector::XMStoreUByte2(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreU565(DirectX::PackedVectors::XMU565^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreU565((DirectX::PackedVector::XMU565*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreFloat3PK(DirectX::PackedVectors::XMFLOAT3PK^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreFloat3PK((DirectX::PackedVector::XMFLOAT3PK*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreFloat3SE(DirectX::PackedVectors::XMFLOAT3SE^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreFloat3SE((DirectX::PackedVector::XMFLOAT3SE*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreHalf4(DirectX::PackedVectors::XMHALF4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMHALF4> pDest = pDestination;
	DirectX::PackedVector::XMHALF4* dest = (DirectX::PackedVector::XMHALF4*)pDest;
	DirectX::PackedVector::XMStoreHalf4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreShortN4(DirectX::PackedVectors::XMSHORTN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMSHORTN4> pDest = pDestination;
	DirectX::PackedVector::XMSHORTN4* dest = (DirectX::PackedVector::XMSHORTN4*)pDest;
	DirectX::PackedVector::XMStoreShortN4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreShort4(DirectX::PackedVectors::XMSHORT4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMSHORT4> pDest = pDestination;
	DirectX::PackedVector::XMSHORT4* dest = (DirectX::PackedVector::XMSHORT4*)pDest;
	DirectX::PackedVector::XMStoreShort4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUShortN4(DirectX::PackedVectors::XMUSHORTN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORTN4> pDest = pDestination;
	DirectX::PackedVector::XMUSHORTN4* dest = (DirectX::PackedVector::XMUSHORTN4*)pDest;
	DirectX::PackedVector::XMStoreUShortN4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUShort4(DirectX::PackedVectors::XMUSHORT4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUSHORT4> pDest = pDestination;
	DirectX::PackedVector::XMUSHORT4* dest = (DirectX::PackedVector::XMUSHORT4*)pDest;
	DirectX::PackedVector::XMStoreUShort4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreXDecN4(DirectX::PackedVectors::XMXDECN4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreXDecN4((DirectX::PackedVector::XMXDECN4*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUDecN4(DirectX::PackedVectors::XMUDECN4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUDecN4((DirectX::PackedVector::XMUDECN4*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUDecN4_XR(DirectX::PackedVectors::XMUDECN4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUDecN4_XR((DirectX::PackedVector::XMUDECN4*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUDec4(DirectX::PackedVectors::XMUDEC4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUDec4((DirectX::PackedVector::XMUDEC4*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreByteN4(DirectX::PackedVectors::XMBYTEN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMBYTEN4> pDest = pDestination;
	DirectX::PackedVector::XMBYTEN4* dest = (DirectX::PackedVector::XMBYTEN4*)pDest;
	DirectX::PackedVector::XMStoreByteN4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreByte4(DirectX::PackedVectors::XMBYTE4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMBYTE4> pDest = pDestination;
	DirectX::PackedVector::XMBYTE4* dest = (DirectX::PackedVector::XMBYTE4*)pDest;
	DirectX::PackedVector::XMStoreByte4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUByteN4(DirectX::PackedVectors::XMUBYTEN4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTEN4> pDest = pDestination;
	DirectX::PackedVector::XMUBYTEN4* dest = (DirectX::PackedVector::XMUBYTEN4*)pDest;
	DirectX::PackedVector::XMStoreUByteN4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUByte4(DirectX::PackedVectors::XMUBYTE4* pDestination, DirectX::Math::XMVECTOR^ V)
{
	pin_ptr<DirectX::PackedVectors::XMUBYTE4> pDest = pDestination;
	DirectX::PackedVector::XMUBYTE4* dest = (DirectX::PackedVector::XMUBYTE4*)pDest;
	DirectX::PackedVector::XMStoreUByte4(dest, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreUNibble4(DirectX::PackedVectors::XMUNIBBLE4^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreUNibble4((DirectX::PackedVector::XMUNIBBLE4*)pDestination, *(DirectX::XMVECTOR*)V);
}

inline void DirectX::PackedVectors::PackedVectorMath::XMStoreU555(DirectX::PackedVectors::XMU555^ pDestination, DirectX::Math::XMVECTOR^ V)
{
	DirectX::PackedVector::XMStoreU555((DirectX::PackedVector::XMU555*)pDestination, *(DirectX::XMVECTOR*)V);
}
