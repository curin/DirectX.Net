#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_DECODE_SWAP_CHAIN_DESC
        {
            unsigned int Flags;
        };
    }
}