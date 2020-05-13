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
    namespace PackedVector
    {
        public ref class PackedVectorMath
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

            static inline DirectX::Math::XMVECTOR^ XMLoadColor(XMCOLOR* pSource);

            static inline DirectX::Math::XMVECTOR^ XMLoadHalf2(XMHALF2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadShortN2(XMSHORTN2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadShort2(XMSHORT2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUShortN2(XMUSHORTN2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUShort2(XMUSHORT2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadByteN2(XMBYTEN2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadByte2(XMBYTE2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUByteN2(XMUBYTEN2* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUByte2(XMUBYTE2* pSource);

            static inline DirectX::Math::XMVECTOR^ XMLoadU565(XMU565* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadFloat3PK(XMFLOAT3PK* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadFloat3SE(XMFLOAT3SE* pSource);

            static inline DirectX::Math::XMVECTOR^ XMLoadHalf4(XMHALF4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadShortN4(XMSHORTN4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadShort4(XMSHORT4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUShortN4(XMUSHORTN4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUShort4(XMUSHORT4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadXDecN4(XMXDECN4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUDecN4(XMUDECN4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUDecN4_XR(XMUDECN4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUDec4(XMUDEC4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadByteN4(XMBYTEN4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadByte4(XMBYTE4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUByteN4(XMUBYTEN4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUByte4(XMUBYTE4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadUNibble4(XMUNIBBLE4* pSource);
            static inline DirectX::Math::XMVECTOR^ XMLoadU555(XMU555* pSource);

            /****************************************************************************
            *
            * Store operations
            *
            ****************************************************************************/

            static inline void XMStoreColor(XMCOLOR* pDestination, DirectX::Math::XMVECTOR^ V);

            static inline void XMStoreHalf2(XMHALF2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreShortN2(XMSHORTN2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreShort2(XMSHORT2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUShortN2(XMUSHORTN2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUShort2(XMUSHORT2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreByteN2(XMBYTEN2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreByte2(XMBYTE2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUByteN2(XMUBYTEN2* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUByte2(XMUBYTE2* pDestination, DirectX::Math::XMVECTOR^ V);

            static inline void XMStoreU565(XMU565* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreFloat3PK(XMFLOAT3PK* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreFloat3SE(XMFLOAT3SE* pDestination, DirectX::Math::XMVECTOR^ V);

            static inline void XMStoreHalf4(XMHALF4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreShortN4(XMSHORTN4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreShort4(XMSHORT4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUShortN4(XMUSHORTN4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUShort4(XMUSHORT4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreXDecN4(XMXDECN4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUDecN4(XMUDECN4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUDecN4_XR(XMUDECN4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUDec4(XMUDEC4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreByteN4(XMBYTEN4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreByte4(XMBYTE4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUByteN4(XMUBYTEN4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUByte4(XMUBYTE4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreUNibble4(XMUNIBBLE4* pDestination, DirectX::Math::XMVECTOR^ V);
            static inline void XMStoreU555(XMU555* pDestination, DirectX::Math::XMVECTOR^ V);
        };
    }
}

