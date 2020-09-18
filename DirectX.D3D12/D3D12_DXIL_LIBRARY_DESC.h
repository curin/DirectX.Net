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
        public value struct D3D12_DXIL_LIBRARY_DESC
        {
            D3D12_SHADER_BYTECODE DXILLibrary;
            unsigned int NumExports;
            IntPtr pExports; //D3D12_EXPORT_DESC*

            property array<D3D12_EXPORT_DESC>^ Exports
            {
                array<D3D12_EXPORT_DESC>^ get()
                {
                    array<D3D12_EXPORT_DESC>^ ret = gcnew array<D3D12_EXPORT_DESC>(NumExports);
                    D3D12_EXPORT_DESC* pEntries = (D3D12_EXPORT_DESC*)pExports.ToPointer();
                    for (int i = 0; i < NumExports; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_EXPORT_DESC>^ value)
                {
                    if (value->Length > NumExports)
                    {
                        NumExports = value->Length;
                    }

                    D3D12_EXPORT_DESC* pEntries = (D3D12_EXPORT_DESC*)pExports.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void Exports_new(size_t numElements)
            {
                pExports = IntPtr(new ::D3D12_EXPORT_DESC[numElements]);
                NumExports = numElements;
            }

            void Exports_delete()
            {
                delete pExports.ToPointer();
            }

            D3D12_EXPORT_DESC Exports_get(size_t index)
            {
                D3D12_EXPORT_DESC* pEntries = (D3D12_EXPORT_DESC*)pExports.ToPointer();
                return pEntries[index];
            }

            void Exports_set(size_t index, D3D12_EXPORT_DESC value)
            {
                D3D12_EXPORT_DESC* pEntries = (D3D12_EXPORT_DESC*)pExports.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}