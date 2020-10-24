#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_HDR_METADATA_HDR10PLUS
        {
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 72)]
            array<unsigned char>^ Data;
        };
    }
}