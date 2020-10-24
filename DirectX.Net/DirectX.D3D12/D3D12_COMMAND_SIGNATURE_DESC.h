#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_COMMAND_SIGNATURE_DESC
        {
            unsigned int ByteStride;
            unsigned int NumArgumentDescs;
            IntPtr pArgumentDescs; //D3D12_INDIRECT_ARGUMENT_DESC*

            property array<D3D12_INDIRECT_ARGUMENT_DESC>^ ArgumentDescs
            {
                array<D3D12_INDIRECT_ARGUMENT_DESC>^ get()
                {
                    array<D3D12_INDIRECT_ARGUMENT_DESC>^ ret = gcnew array<D3D12_INDIRECT_ARGUMENT_DESC>(NumArgumentDescs);
                    D3D12_INDIRECT_ARGUMENT_DESC* pEntries = (D3D12_INDIRECT_ARGUMENT_DESC*)pArgumentDescs.ToPointer();
                    for (int i = 0; i < NumArgumentDescs; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_INDIRECT_ARGUMENT_DESC>^ value)
                {
                    if (value->Length > NumArgumentDescs)
                    {
                        NumArgumentDescs = value->Length;
                    }

                    D3D12_INDIRECT_ARGUMENT_DESC* pEntries = (D3D12_INDIRECT_ARGUMENT_DESC*)pArgumentDescs.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void ArgumentDescs_new(size_t numElements)
            {
                pArgumentDescs = IntPtr(new ::D3D12_INDIRECT_ARGUMENT_DESC[numElements]);
                NumArgumentDescs = numElements;
            }

            void ArgumentDescs_delete()
            {
                delete pArgumentDescs.ToPointer();
            }

            D3D12_INDIRECT_ARGUMENT_DESC ArgumentDescs_get(size_t index)
            {
                D3D12_INDIRECT_ARGUMENT_DESC* pEntries = (D3D12_INDIRECT_ARGUMENT_DESC*)pArgumentDescs.ToPointer();
                return pEntries[index];
            }

            void ArgumentDescs_set(size_t index, D3D12_INDIRECT_ARGUMENT_DESC value)
            {
                D3D12_INDIRECT_ARGUMENT_DESC* pEntries = (D3D12_INDIRECT_ARGUMENT_DESC*)pArgumentDescs.ToPointer();
                pEntries[index] = value;
            }

            unsigned int NodeMask;
        };
    }
}