#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    [StructLayout(LayoutKind::Sequential)]
    public value struct LUID
    {
        unsigned long LowPart;
        long HighPart;
    };
}