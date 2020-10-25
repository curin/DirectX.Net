#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    [StructLayout(LayoutKind::Sequential)]
    public value struct SECURITY_ATTRIBUTES
    {
        unsigned long nLength;
        IntPtr lpSecurityDescriptor;
        int bInheritHandle;
    };
}