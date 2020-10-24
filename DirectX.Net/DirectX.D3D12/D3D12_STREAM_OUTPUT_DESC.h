#pragma once

#include <d3d12.h>
#include "D3D12_SO_DECLARATION_ENTRY.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_STREAM_OUTPUT_DESC
        {
            IntPtr pSODeclaration;//D3D12_SO_DECLARATION_ENTRY array
            unsigned int NumEntries;
            IntPtr pBufferStrides;//unsigned int array
            unsigned int NumStrides;
            unsigned int RasterizedStream;

            property array<D3D12_SO_DECLARATION_ENTRY>^ SODeclaration
            {
                array<D3D12_SO_DECLARATION_ENTRY>^ get()
                {
                    array<D3D12_SO_DECLARATION_ENTRY>^ ret = gcnew array<D3D12_SO_DECLARATION_ENTRY>(NumEntries);
                    D3D12_SO_DECLARATION_ENTRY* pEntries = (D3D12_SO_DECLARATION_ENTRY*)pSODeclaration.ToPointer();
                    for (int i = 0; i < NumEntries; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }
                void set(array<D3D12_SO_DECLARATION_ENTRY>^ value)
                {
                    if (value->Length > NumEntries)
                    {
                        NumEntries = value->Length;
                    }

                    D3D12_SO_DECLARATION_ENTRY* pEntries = (D3D12_SO_DECLARATION_ENTRY*)pSODeclaration.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void SODeclaration_new(size_t numEntries)
            {
                pSODeclaration = IntPtr(new ::D3D12_SO_DECLARATION_ENTRY[numEntries]);
                NumEntries = numEntries;
            }

            void SODeclaration_delete()
            {
                delete pSODeclaration.ToPointer();
            }

            D3D12_SO_DECLARATION_ENTRY SODeclaration_get(size_t index)
            {
                D3D12_SO_DECLARATION_ENTRY* pEntries = (D3D12_SO_DECLARATION_ENTRY*)pSODeclaration.ToPointer();
                return pEntries[index];
            }

            void SODeclaration_set(size_t index, D3D12_SO_DECLARATION_ENTRY value)
            {
                D3D12_SO_DECLARATION_ENTRY* pEntries = (D3D12_SO_DECLARATION_ENTRY*)pSODeclaration.ToPointer();
                pEntries[index] = value;
            }


            property array<unsigned int>^ BufferStrides
            {
                array<unsigned int>^ get()
                {
                    array<unsigned int>^ ret = gcnew array<unsigned int>(NumStrides);
                    unsigned int* pEntries = (unsigned int*)pBufferStrides.ToPointer();
                    for (int i = 0; i < NumStrides; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }
                void set(array<unsigned int>^ value)
                {
                    if (value->Length > NumStrides)
                    {
                        NumStrides = value->Length;
                    }

                    unsigned int* pEntries = (unsigned int*)pBufferStrides.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void BufferStrides_new(size_t numStrides)
            {
                pBufferStrides = IntPtr(new unsigned int[numStrides]);
                NumStrides = numStrides;
            }

            void BufferStrides_delete()
            {
                delete pBufferStrides.ToPointer();
            }

            unsigned int BufferStrides_get(size_t index)
            {
                unsigned int* pEntries = (unsigned int*)pBufferStrides.ToPointer();
                return pEntries[index];
            }

            void BufferStrides_set(size_t index, unsigned int value)
            {
                unsigned int* pEntries = (unsigned int*)pBufferStrides.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}