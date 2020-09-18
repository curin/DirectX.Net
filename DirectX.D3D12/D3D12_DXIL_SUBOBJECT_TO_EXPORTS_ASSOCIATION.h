#pragma once

#include "D3D12_SHADER_BYTECODE.h"
#include "D3D12_EXPORT_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION
        {
            [MarshalAs(UnmanagedType::BStr)]
            String^ pSubobjectToAssociate;
            unsigned int NumExports;
            IntPtr pExports; //LPCWSTR*

            void Exports_new(size_t numElements)
            {
                pExports = IntPtr(new wchar_t* [numElements]);
                NumExports = numElements;
            }

            void Exports_delete()
            {
                delete pExports.ToPointer();
            }

            String^ Exports_get(size_t index)
            {
                wchar_t** pEntries = (wchar_t**)pExports.ToPointer();
                return gcnew String(pEntries[index]);
            }

            void Exports_set(size_t index, String^ value)
            {
                wchar_t** pEntries = (wchar_t**)pExports.ToPointer();
                pEntries[index] = new wchar_t[value->Length];
                wchar_t* temp = pEntries[index];
                for (int i = 0; i < value->Length; i++)
                    temp[i] = value[i];
            }
        };
    }
}