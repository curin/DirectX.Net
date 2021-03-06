#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

#include "D3D12_DRED_ALLOCATION_TYPE.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DRED_ALLOCATION_NODE1
        {
            IntPtr pObjectNameA;//const char*
            IntPtr pObjectNameW;//const wchar_t*
            D3D12_DRED_ALLOCATION_TYPE AllocationType;
            IntPtr pNext;//const D3D12_DRED_ALLOCATION_NODE*
            IntPtr pObject;//const IUnknown*

            property UnmanagedConstantString^ ObjectNameA
            {
                UnmanagedConstantString^ get()
                {
                    return gcnew UnmanagedConstantString((char*)pObjectNameA.ToPointer());
                }
                void set(UnmanagedConstantString^ value)
                {
                    pObjectNameA = value->Pointer;
                }
            }

            property UnmanagedConstantWString^ ObjectNameW
            {
                UnmanagedConstantWString^ get()
                {
                    return gcnew UnmanagedConstantWString((wchar_t*)pObjectNameW.ToPointer());
                }
                void set(UnmanagedConstantWString^ value)
                {
                    pObjectNameW = value->Pointer;
                }
            }

            property D3D12_DRED_ALLOCATION_NODE1 Next
            {
                D3D12_DRED_ALLOCATION_NODE1 get()
                {
                    return *(D3D12_DRED_ALLOCATION_NODE1*)pNext.ToPointer();
                }
                void set(D3D12_DRED_ALLOCATION_NODE1 value)
                {
                    (*(D3D12_DRED_ALLOCATION_NODE1*)pNext.ToPointer()) = value;
                }
            }

            property IUnknown^ Object
            {
                IUnknown^ get()
                {
                    return gcnew IUnknown(pNext);
                }
                void set(IUnknown^ value)
                {
                    pNext = value->Pointer;
                }
            }
        };
    }
}