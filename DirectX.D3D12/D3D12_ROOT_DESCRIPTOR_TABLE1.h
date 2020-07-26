#pragma once

#include "D3D12_DESCRIPTOR_RANGE1.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_ROOT_DESCRIPTOR_TABLE1
        {
            unsigned int NumDescriptorRanges;
            IntPtr pDescriptorRanges;//D3D12_DESCRIPTOR_RANGE1*

            property array<D3D12_DESCRIPTOR_RANGE1>^ DescriptorRanges
            {
                array<D3D12_DESCRIPTOR_RANGE1>^ get()
                {
                    array<D3D12_DESCRIPTOR_RANGE1>^ ret = gcnew array<D3D12_DESCRIPTOR_RANGE1>(NumDescriptorRanges);
                    D3D12_DESCRIPTOR_RANGE1* pEntries = (D3D12_DESCRIPTOR_RANGE1*)pDescriptorRanges.ToPointer();
                    for (int i = 0; i < NumDescriptorRanges; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_DESCRIPTOR_RANGE1>^ value)
                {
                    if (value->Length > NumDescriptorRanges)
                    {
                        NumDescriptorRanges = value->Length;
                    }

                    D3D12_DESCRIPTOR_RANGE1* pEntries = (D3D12_DESCRIPTOR_RANGE1*)pDescriptorRanges.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void DescriptorRanges_new(size_t numElements)
            {
                pDescriptorRanges = IntPtr(new ::D3D12_DESCRIPTOR_RANGE1[numElements]);
                NumDescriptorRanges = numElements;
            }

            void DescriptorRanges_delete()
            {
                delete pDescriptorRanges.ToPointer();
            }

            D3D12_DESCRIPTOR_RANGE1 DescriptorRanges_get(size_t index)
            {
                D3D12_DESCRIPTOR_RANGE1* pEntries = (D3D12_DESCRIPTOR_RANGE1*)pDescriptorRanges.ToPointer();
                return pEntries[index];
            }

            void DescriptorRanges_set(size_t index, D3D12_DESCRIPTOR_RANGE1 value)
            {
                D3D12_DESCRIPTOR_RANGE1* pEntries = (D3D12_DESCRIPTOR_RANGE1*)pDescriptorRanges.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}