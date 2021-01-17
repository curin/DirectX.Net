#pragma once

#include "D3D12_VIEW_INSTANCING_FLAGS.h"
#include "D3D12_VIEW_INSTANCE_LOCATION.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_VIEW_INSTANCING_DESC
        {
            unsigned int ViewInstanceCount;
            IntPtr pViewInstanceLocations;//D3D12_VIEW_INSTANCE_LOCATION*
            D3D12_VIEW_INSTANCING_FLAGS Flags;

            property array<D3D12_VIEW_INSTANCE_LOCATION>^ ViewInstanceLocations
            {
                array<D3D12_VIEW_INSTANCE_LOCATION>^ get()
                {
                    array<D3D12_VIEW_INSTANCE_LOCATION>^ ret = gcnew array<D3D12_VIEW_INSTANCE_LOCATION>(ViewInstanceCount);
                    D3D12_VIEW_INSTANCE_LOCATION* pEntries = (D3D12_VIEW_INSTANCE_LOCATION*)pViewInstanceLocations.ToPointer();
                    for (unsigned int i = 0; i < ViewInstanceCount; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_VIEW_INSTANCE_LOCATION>^ value)
                {
                    if (value->Length > ViewInstanceCount)
                    {
                        ViewInstanceCount = value->Length;
                    }

                    D3D12_VIEW_INSTANCE_LOCATION* pEntries = (D3D12_VIEW_INSTANCE_LOCATION*)pViewInstanceLocations.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void ViewInstanceLocations_new(size_t numElements)
            {
                pViewInstanceLocations = IntPtr(new ::D3D12_VIEW_INSTANCE_LOCATION[numElements]);
                ViewInstanceCount = numElements;
            }

            void ViewInstanceLocations_delete()
            {
                delete pViewInstanceLocations.ToPointer();
            }

            D3D12_VIEW_INSTANCE_LOCATION ViewInstanceLocations_get(size_t index)
            {
                D3D12_VIEW_INSTANCE_LOCATION* pEntries = (D3D12_VIEW_INSTANCE_LOCATION*)pViewInstanceLocations.ToPointer();
                return pEntries[index];
            }

            void ViewInstanceLocations_set(size_t index, D3D12_VIEW_INSTANCE_LOCATION value)
            {
                D3D12_VIEW_INSTANCE_LOCATION* pEntries = (D3D12_VIEW_INSTANCE_LOCATION*)pViewInstanceLocations.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}