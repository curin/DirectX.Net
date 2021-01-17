#pragma once

#include "D3D12_DESCRIPTOR_RANGE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_ROOT_DESCRIPTOR_TABLE
        {
            unsigned int NumDescriptorRanges;
            IntPtr pDescriptorRanges;//D3D12_DESCRIPTOR_RANGE*

            property array<D3D12_DESCRIPTOR_RANGE>^ DescriptorRanges
            {
                array<D3D12_DESCRIPTOR_RANGE>^ get()
                {
                    array<D3D12_DESCRIPTOR_RANGE>^ ret = gcnew array<D3D12_DESCRIPTOR_RANGE>(NumDescriptorRanges);
                    D3D12_DESCRIPTOR_RANGE* pEntries = (D3D12_DESCRIPTOR_RANGE*)pDescriptorRanges.ToPointer();
                    for (unsigned int i = 0; i < NumDescriptorRanges; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_DESCRIPTOR_RANGE>^ value)
                {
                    if (value->Length > NumDescriptorRanges)
                    {
                        NumDescriptorRanges = value->Length;
                    }

                    D3D12_DESCRIPTOR_RANGE* pEntries = (D3D12_DESCRIPTOR_RANGE*)pDescriptorRanges.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void DescriptorRanges_new(size_t numElements)
            {
                pDescriptorRanges = IntPtr(new ::D3D12_DESCRIPTOR_RANGE[numElements]);
                NumDescriptorRanges = numElements;
            }

            void DescriptorRanges_delete()
            {
                delete pDescriptorRanges.ToPointer();
            }

            D3D12_DESCRIPTOR_RANGE DescriptorRanges_get(size_t index)
            {
                D3D12_DESCRIPTOR_RANGE* pEntries = (D3D12_DESCRIPTOR_RANGE*)pDescriptorRanges.ToPointer();
                return pEntries[index];
            }

            void DescriptorRanges_set(size_t index, D3D12_DESCRIPTOR_RANGE value)
            {
                D3D12_DESCRIPTOR_RANGE* pEntries = (D3D12_DESCRIPTOR_RANGE*)pDescriptorRanges.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}