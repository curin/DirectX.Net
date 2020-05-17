#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    [StructLayout(LayoutKind::Sequential)]
    public value struct POINT
    {
        long  x;
        long  y;
    };
}