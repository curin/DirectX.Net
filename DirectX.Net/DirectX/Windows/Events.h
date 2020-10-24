#pragma once

#include "SECURITY_ATTRIBUTES.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    public ref class Events
    {
        [DllImport("synchapi.dll")]
        IntPtr CreateEventW(SECURITY_ATTRIBUTES* lpEventAttributes, [MarshalAs(UnmanagedType::Bool)]bool bManualReset, [MarshalAs(UnmanagedType::Bool)]bool bInitialState, [MarshalAs(UnmanagedType::BStr)]String^ lpName);
        [DllImport("synchapi.dll")]
        IntPtr OpenEventW(unsigned long dwDesiredAccess, [MarshalAs(UnmanagedType::Bool)]bool bInheritHandle, [MarshalAs(UnmanagedType::BStr)]String^ lpName);
        [DllImport("synchapi.dll")]
        unsigned long WaitForSingleObject(IntPtr hHandle, unsigned long dwMilliseconds);
        [DllImport("synchapi.dll")]
        unsigned long WaitForSingleObjectEx(IntPtr hHandle, unsigned long dwMilliseconds, [MarshalAs(UnmanagedType::Bool)]bool bAlertable);
    };
}