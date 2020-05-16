#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    [StructLayout(LayoutKind::Sequential)]
    public value struct RECT
    {
        long    left;
        long    top;
        long    right;
        long    bottom;
    };
}