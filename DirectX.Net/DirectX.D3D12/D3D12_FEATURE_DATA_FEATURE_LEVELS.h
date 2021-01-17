#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_FEATURE_LEVELS
        {
            unsigned int NumFeatureLevels;
            IntPtr pFeatureLevelsRequested;//D3D_FEATURE_LEVEL*
            D3D_FEATURE_LEVEL MaxSupportedFeatureLevel;

            property array<D3D_FEATURE_LEVEL>^ FeatureLevelsRequested
            {
                array<D3D_FEATURE_LEVEL>^ get()
                {
                    array<D3D_FEATURE_LEVEL>^ ret = gcnew array<D3D_FEATURE_LEVEL>(NumFeatureLevels);
                    D3D_FEATURE_LEVEL* pEntries = (D3D_FEATURE_LEVEL*)pFeatureLevelsRequested.ToPointer();
                    for (unsigned int i = 0; i < NumFeatureLevels; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D_FEATURE_LEVEL>^ value)
                {
                    if (value->Length > NumFeatureLevels)
                    {
                        NumFeatureLevels = value->Length;
                    }

                    D3D_FEATURE_LEVEL* pEntries = (D3D_FEATURE_LEVEL*)pFeatureLevelsRequested.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void FeatureLevelsRequested_new(size_t numElements)
            {
                pFeatureLevelsRequested = IntPtr(new ::D3D_FEATURE_LEVEL[numElements]);
                NumFeatureLevels = numElements;
            }

            void FeatureLevelsRequested_delete()
            {
                delete pFeatureLevelsRequested.ToPointer();
            }

            D3D_FEATURE_LEVEL FeatureLevelsRequested_get(size_t index)
            {
                D3D_FEATURE_LEVEL* pEntries = (D3D_FEATURE_LEVEL*)pFeatureLevelsRequested.ToPointer();
                return pEntries[index];
            }

            void FeatureLevelsRequested_set(size_t index, D3D_FEATURE_LEVEL value)
            {
                D3D_FEATURE_LEVEL* pEntries = (D3D_FEATURE_LEVEL*)pFeatureLevelsRequested.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}