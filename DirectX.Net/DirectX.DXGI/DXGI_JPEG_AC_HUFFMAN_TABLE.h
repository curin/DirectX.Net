#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_JPEG_AC_HUFFMAN_TABLE
        {
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 16)]
            array<unsigned char>^ CodeCounts;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 162)]
            array<unsigned char>^ CodeValues;
        };
    }
}