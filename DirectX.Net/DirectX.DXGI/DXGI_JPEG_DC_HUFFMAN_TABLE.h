#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_JPEG_DC_HUFFMAN_TABLE
        {
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 12)]
            array<unsigned char>^ CodeCounts;
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 12)]
            array<unsigned char>^ CodeValues;
        };
    }
}