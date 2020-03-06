#pragma once
#include "Math/XMVECTOR.h"
#include "PackedVector/XMBYTE2.h"
#include "PackedVector/XMBYTE4.h"
#include "PackedVector/XMBYTEN2.h"
#include "PackedVector/XMBYTEN4.h"
#include "PackedVector/XMCOLOR.h"
#include "PackedVector/XMFLOAT3PK.h"
#include "PackedVector/XMFLOAT3SE.h"
#include "PackedVector/XMHALF2.h"
#include "PackedVector/XMHALF4.h"
#include "PackedVector/XMSHORT2.h"
#include "PackedVector/XMSHORT4.h"
#include "PackedVector/XMSHORTN2.h"
#include "PackedVector/XMSHORTN4.h"
#include "PackedVector/XMU555.h"
#include "PackedVector/XMU565.h"
#include "PackedVector/XMUBYTE2.h"
#include "PackedVector/XMUBYTE4.h"
#include "PackedVector/XMUBYTEN2.h"
#include "PackedVector/XMUBYTEN4.h"
#include "PackedVector/XMUDEC4.h"
#include "PackedVector/XMUDECN4.h"
#include "PackedVector/XMUNIBBLE4.h"
#include "PackedVector/XMUSHORT2.h"
#include "PackedVector/XMUSHORT4.h"
#include "PackedVector/XMUSHORTN2.h"
#include "PackedVector/XMUSHORTN4.h"
#include "PackedVector/XMXDECN4.h"

#include "UDXPackedMethods.h"

using namespace DirectX::PackedVectors;
namespace DirectX
{
    public ref class DirectXPackedVector
    {
	public:
        /****************************************************************************
        *
        * Data conversion operations
        *
        ****************************************************************************/

        static inline float XMConvertHalfToFloat(unsigned short Value);
        static inline array<float>^ XMConvertHalfToFloatStream(array<float>^ pOutputStream,
            unsigned int OutputStride,
            array<unsigned short>^ pInputStream,
            unsigned int InputStride, unsigned int HalfCount);
        static inline unsigned short XMConvertFloatToHalf(float Value);
        static inline array<unsigned short>^ XMConvertFloatToHalfStream(array<unsigned short>^ pOutputStream,
            unsigned int OutputStride,
            array<float>^ pInputStream,
            unsigned int InputStride, unsigned int FloatCount);
        /****************************************************************************
         *
         * Load operations
         *
         ****************************************************************************/

        static inline DirectX::Math::XMVECTOR^ XMLoadColor(MXMCOLOR pSource);

        static inline DirectX::Math::XMVECTOR^ XMLoadHalf2(MXMHALF2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadShortN2(MXMSHORTN2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadShort2(MXMSHORT2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUShortN2(MXMUSHORTN2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUShort2(MXMUSHORT2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadByteN2(MXMBYTEN2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadByte2(MXMBYTE2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUByteN2(MXMUBYTEN2 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUByte2(MXMUBYTE2 pSource);

        static inline DirectX::Math::XMVECTOR^ XMLoadU565(MXMU565 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadFloat3PK(MXMFLOAT3PK pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadFloat3SE(MXMFLOAT3SE pSource);

        static inline DirectX::Math::XMVECTOR^ XMLoadHalf4(MXMHALF4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadShortN4(MXMSHORTN4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadShort4(MXMSHORT4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUShortN4(MXMUSHORTN4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUShort4(MXMUSHORT4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadXDecN4(MXMXDECN4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUDecN4(MXMUDECN4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUDecN4_XR(MXMUDECN4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUDec4(MXMUDEC4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadByteN4(MXMBYTEN4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadByte4(MXMBYTE4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUByteN4(MXMUBYTEN4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUByte4(MXMUBYTE4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadUNibble4(MXMUNIBBLE4 pSource);
        static inline DirectX::Math::XMVECTOR^ XMLoadU555(MXMU555 pSource);

        /****************************************************************************
        *
        * Store operations
        *
        ****************************************************************************/

        static inline void XMStoreColor(MXMCOLOR pDestination, DirectX::Math::XMVECTOR^ V);

        static inline void XMStoreHalf2(MXMHALF2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreShortN2(MXMSHORTN2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreShort2(MXMSHORT2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUShortN2(MXMUSHORTN2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUShort2(MXMUSHORT2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreByteN2(MXMBYTEN2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreByte2(MXMBYTE2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUByteN2(MXMUBYTEN2 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUByte2(MXMUBYTE2 pDestination, DirectX::Math::XMVECTOR^ V);

        static inline void XMStoreU565(MXMU565 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat3PK(MXMFLOAT3PK pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreFloat3SE(MXMFLOAT3SE pDestination, DirectX::Math::XMVECTOR^ V);

        static inline void XMStoreHalf4(MXMHALF4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreShortN4(MXMSHORTN4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreShort4(MXMSHORT4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUShortN4(MXMUSHORTN4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUShort4(MXMUSHORT4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreXDecN4(MXMXDECN4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUDecN4(MXMUDECN4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUDecN4_XR(MXMUDECN4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUDec4(MXMUDEC4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreByteN4(MXMBYTEN4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreByte4(MXMBYTE4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUByteN4(MXMUBYTEN4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUByte4(MXMUBYTE4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreUNibble4(MXMUNIBBLE4 pDestination, DirectX::Math::XMVECTOR^ V);
        static inline void XMStoreU555(MXMU555 pDestination, DirectX::Math::XMVECTOR^ V);
    };
}

