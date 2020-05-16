#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
#undef DUMMYSTRUCTNAME

namespace DirectX
{
    [StructLayout(LayoutKind::Explicit)]
    public value struct LARGE_INTEGER
    {
    value struct DUMMYSTRUCTNAME {
        unsigned long LowPart;
        long HighPart;
    };
    value struct u {
        unsigned long LowPart;
        long HighPart;
    };
    [FieldOffset(0)] DUMMYSTRUCTNAME DUMMYSTRUCTNAME;
    [FieldOffset(0)] u u;
    [FieldOffset(0)] long QuadPart;
    };
}