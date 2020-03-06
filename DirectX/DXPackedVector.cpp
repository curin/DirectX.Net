#include "pch.h"
#include "DXPackedVector.h"

inline float DirectX::DirectXPackedVector::XMConvertHalfToFloat(unsigned short Value)
{
	return DirectX::XMConvertHalfToFloat(Value);
}

inline array<float>^ DirectX::DirectXPackedVector::XMConvertHalfToFloatStream(array<float>^ pOutputStream, unsigned int OutputStride, array<unsigned short>^ pInputStream, unsigned int InputStride, unsigned int HalfCount)
{
	float* out = new float[HalfCount];
	unsigned short* in = new unsigned short[HalfCount];
	pOutputStream = gcnew array<float>(HalfCount);

	unsigned int i;
	for (i = 0; i < HalfCount; i++)
		in[i] = pInputStream[i];

	DirectX::XMConvertHalfToFloatStream(out, OutputStride, in, InputStride, HalfCount);

	for (i = 0; i < HalfCount; i++)
		pOutputStream[i] = out[i];

	delete out;
	delete in;

	return pOutputStream;
}

inline unsigned short DirectX::DirectXPackedVector::XMConvertFloatToHalf(float Value)
{
	return DirectX::XMConvertFloatToHalf(Value);
}

inline array<unsigned short>^ DirectX::DirectXPackedVector::XMConvertFloatToHalfStream(array<unsigned short>^ pOutputStream, unsigned int OutputStride, array<float>^ pInputStream, unsigned int InputStride, unsigned int FloatCount)
{
	float* in = new float[FloatCount];
	unsigned short* out = new unsigned short[FloatCount];
	pOutputStream = gcnew array<unsigned short>(FloatCount);

    unsigned int i;
	for (i = 0; i < FloatCount; i++)
		in[i] = pInputStream[i];

	DirectX::XMConvertFloatToHalfStream(out, OutputStride, in, InputStride, FloatCount);

	for (i = 0; i < FloatCount; i++)
		pOutputStream[i] = out[i];

	delete out;
	delete in;

	return pOutputStream;
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadColor(MXMCOLOR pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadColor(pSource->_color));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadHalf2(MXMHALF2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadHalf2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadShortN2(MXMSHORTN2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShortN2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadShort2(MXMSHORT2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShort2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUShortN2(MXMUSHORTN2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShortN2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUShort2(MXMUSHORT2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShort2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadByteN2(MXMBYTEN2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByteN2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadByte2(MXMBYTE2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByte2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUByteN2(MXMUBYTEN2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByteN2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUByte2(MXMUBYTE2 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByte2(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadU565(MXMU565 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadU565(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadFloat3PK(MXMFLOAT3PK pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadFloat3PK(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadFloat3SE(MXMFLOAT3SE pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadFloat3SE(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadHalf4(MXMHALF4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadHalf4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadShortN4(MXMSHORTN4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShortN4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadShort4(MXMSHORT4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadShort4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUShortN4(MXMUSHORTN4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShortN4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUShort4(MXMUSHORT4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUShort4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadXDecN4(MXMXDECN4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadXDecN4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUDecN4(MXMUDECN4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDecN4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUDecN4_XR(MXMUDECN4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDecN4_XR(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUDec4(MXMUDEC4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUDec4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadByteN4(MXMBYTEN4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByteN4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadByte4(MXMBYTE4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadByte4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUByteN4(MXMUBYTEN4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByteN4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUByte4(MXMUBYTE4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUByte4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadUNibble4(MXMUNIBBLE4 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadUNibble4(pSource->_vec));
}

inline DirectX::Math::XMVECTOR^ DirectX::DirectXPackedVector::XMLoadU555(MXMU555 pSource)
{
	return gcnew DirectX::Math::XMVECTOR(DirectX::XMLoadU555(pSource->_vec));
}

inline void DirectX::DirectXPackedVector::XMStoreColor(MXMCOLOR pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreHalf2(MXMHALF2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreShortN2(MXMSHORTN2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreShort2(MXMSHORT2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUShortN2(MXMUSHORTN2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUShort2(MXMUSHORT2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreByteN2(MXMBYTEN2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreByte2(MXMBYTE2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUByteN2(MXMUBYTEN2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUByte2(MXMUBYTE2 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreU565(MXMU565 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreFloat3PK(MXMFLOAT3PK pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreFloat3SE(MXMFLOAT3SE pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreHalf4(MXMHALF4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreShortN4(MXMSHORTN4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreShort4(MXMSHORT4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUShortN4(MXMUSHORTN4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUShort4(MXMUSHORT4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreXDecN4(MXMXDECN4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUDecN4(MXMUDECN4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUDecN4_XR(MXMUDECN4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUDec4(MXMUDEC4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreByteN4(MXMBYTEN4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreByte4(MXMBYTE4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUByteN4(MXMUBYTEN4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUByte4(MXMUBYTE4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreUNibble4(MXMUNIBBLE4 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}

inline void DirectX::DirectXPackedVector::XMStoreU555(MXMU555 pDestination, DirectX::Math::XMVECTOR^ V)
{
	throw gcnew System::NotImplementedException();
}
