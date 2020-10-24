#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_JPEG_QUANTIZATION_TABLE
        {
            [MarshalAs(UnmanagedType::ByValArray, SizeConst = 64)]
            array<unsigned char>^ Elements;
        };
    }
}