#pragma once

#include <d3d12.h>
#include "D3D12_INPUT_ELEMENT_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_INPUT_LAYOUT_DESC
        {
            IntPtr pInputElementDescs;
            unsigned int NumElements;

            property array<D3D12_INPUT_ELEMENT_DESC>^ InputElementDescs
            {
                array<D3D12_INPUT_ELEMENT_DESC>^ get()
                {
                    array<D3D12_INPUT_ELEMENT_DESC>^ ret = gcnew array<D3D12_INPUT_ELEMENT_DESC>(NumElements);
                    D3D12_INPUT_ELEMENT_DESC* pEntries = (D3D12_INPUT_ELEMENT_DESC*)pInputElementDescs.ToPointer();
                    for (int i = 0; i < NumElements; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }
                void set(array<D3D12_INPUT_ELEMENT_DESC>^ value)
                {
                    if (value->Length > NumElements)
                    {
                        NumElements = value->Length;
                    }

                    D3D12_INPUT_ELEMENT_DESC* pEntries = (D3D12_INPUT_ELEMENT_DESC*)pInputElementDescs.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void InputElementDescs_new(size_t numElements)
            {
                pInputElementDescs = IntPtr(new ::D3D12_INPUT_ELEMENT_DESC[numElements]);
                NumElements = numElements;
            }

            void InputElementDescs_delete()
            {
                delete pInputElementDescs.ToPointer();
            }

            D3D12_INPUT_ELEMENT_DESC InputElementDescs_get(size_t index)
            {
                D3D12_INPUT_ELEMENT_DESC* pEntries = (D3D12_INPUT_ELEMENT_DESC*)pInputElementDescs.ToPointer();
                return pEntries[index];
            }

            void InputElementDescs_set(size_t index, D3D12_INPUT_ELEMENT_DESC value)
            {
                D3D12_INPUT_ELEMENT_DESC* pEntries = (D3D12_INPUT_ELEMENT_DESC*)pInputElementDescs.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}