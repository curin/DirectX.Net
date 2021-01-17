#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPES
        {
            unsigned int NodeIndex;
            unsigned int Count;
            IntPtr pTypes;//GUID*

            property array<Guid>^ Types
            {
                array<Guid>^ get()
                {
                    array<Guid>^ ret = gcnew array<Guid>(Count);
                    Guid* pEntries = (Guid*)pTypes.ToPointer();
                    for (unsigned int i = 0; i < Count; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<Guid>^ value)
                {
                    if (value->Length > Count)
                    {
                        Count = value->Length;
                    }

                    Guid* pEntries = (Guid*)pTypes.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            Guid DescriptorRanges_get(size_t index)
            {
                Guid* pEntries = (Guid*)pTypes.ToPointer();
                return pEntries[index];
            }

            void DescriptorRanges_set(size_t index, Guid value)
            {
                Guid* pEntries = (Guid*)pTypes.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}