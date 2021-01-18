#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DRED_BREADCRUMB_CONTEXT
        {
            unsigned int BreadcrumbIndex;
            IntPtr pContextString;//const wchar_t*

            property UnmanagedConstantWString^ ContextString
            {
                UnmanagedConstantWString^ get()
                {
                    return gcnew UnmanagedConstantWString((wchar_t*)pContextString.ToPointer());
                }
                void set(UnmanagedConstantWString^ value)
                {
                    pContextString = value->Pointer;
                }
            }
        };
    }
}