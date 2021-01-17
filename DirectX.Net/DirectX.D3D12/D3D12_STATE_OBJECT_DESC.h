#pragma once

#include "D3D12_STATE_OBJECT_TYPE.h"
#include "D3D12_STATE_SUBOBJECT.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_STATE_OBJECT_DESC
        {
            D3D12_STATE_OBJECT_TYPE Type;
            unsigned int NumSubobjects;
            IntPtr pSubobjects; //D3D12_STATE_SUBOBJECT*

            property array<D3D12_STATE_SUBOBJECT>^ Subobjects
            {
                array<D3D12_STATE_SUBOBJECT>^ get()
                {
                    array<D3D12_STATE_SUBOBJECT>^ ret = gcnew array<D3D12_STATE_SUBOBJECT>(NumSubobjects);
                    D3D12_STATE_SUBOBJECT* pEntries = (D3D12_STATE_SUBOBJECT*)pSubobjects.ToPointer();
                    for (unsigned int i = 0; i < NumSubobjects; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_STATE_SUBOBJECT>^ value)
                {
                    if (value->Length > NumSubobjects)
                    {
                        NumSubobjects = value->Length;
                    }

                    D3D12_STATE_SUBOBJECT* pEntries = (D3D12_STATE_SUBOBJECT*)pSubobjects.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void Subobjects_new(size_t numElements)
            {
                pSubobjects = IntPtr(new ::D3D12_STATE_SUBOBJECT[numElements]);
                NumSubobjects = numElements;
            }

            void Subobjects_delete()
            {
                delete pSubobjects.ToPointer();
            }

            D3D12_STATE_SUBOBJECT Subobjects_get(size_t index)
            {
                D3D12_STATE_SUBOBJECT* pEntries = (D3D12_STATE_SUBOBJECT*)pSubobjects.ToPointer();
                return pEntries[index];
            }

            void Subobjects_set(size_t index, D3D12_STATE_SUBOBJECT value)
            {
                D3D12_STATE_SUBOBJECT* pEntries = (D3D12_STATE_SUBOBJECT*)pSubobjects.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}