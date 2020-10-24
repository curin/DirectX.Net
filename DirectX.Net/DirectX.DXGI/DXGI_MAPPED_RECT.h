#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_MAPPED_RECT
        {
            int Pitch;
            [MarshalAs(UnmanagedType::LPArray)]
            array<Byte>^ pBits;
        };
    }
}