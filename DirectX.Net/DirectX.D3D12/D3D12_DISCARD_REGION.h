#pragma once

#include <d3d12.h>

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DISCARD_REGION
        {
            unsigned int NumRects;
            IntPtr pRects;//RECT*
            
            property array<RECT>^ Rects
            {
                array<RECT>^ get()
                {
                    array<RECT>^ ret = gcnew array<RECT>(NumRects);
                    RECT* pEntries = (RECT*)pRects.ToPointer();
                    for (unsigned int i = 0; i < NumRects; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<RECT>^ value)
                {
                    if (value->Length > NumRects)
                    {
                        NumRects = value->Length;
                    }

                    RECT* pEntries = (RECT*)pRects.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void DescriptorRanges_new(size_t numElements)
            {
                pRects = IntPtr(new ::D3D12_RECT[numElements]);
                NumRects = numElements;
            }

            void DescriptorRanges_delete()
            {
                delete pRects.ToPointer();
            }

            RECT DescriptorRanges_get(size_t index)
            {
                RECT* pEntries = (RECT*)pRects.ToPointer();
                return pEntries[index];
            }

            void DescriptorRanges_set(size_t index, RECT value)
            {
                RECT* pEntries = (RECT*)pRects.ToPointer();
                pEntries[index] = value;
            }

            unsigned int FirstSubresource;
            unsigned int NumSubresources;
        };
    }
}