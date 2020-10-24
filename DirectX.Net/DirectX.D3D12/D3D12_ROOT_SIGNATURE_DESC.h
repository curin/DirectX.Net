#pragma once

#include "D3D12_ROOT_PARAMETER.h"
#include "D3D12_STATIC_SAMPLER_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_ROOT_SIGNATURE_DESC
        {
            unsigned int NumParameters;
            IntPtr pParameters;
            property array<D3D12_ROOT_PARAMETER>^ Parameters
            {
                array<D3D12_ROOT_PARAMETER>^ get()
                {
                    array<D3D12_ROOT_PARAMETER>^ ret = gcnew array<D3D12_ROOT_PARAMETER>(NumParameters);
                    D3D12_ROOT_PARAMETER* pEntries = (D3D12_ROOT_PARAMETER*)pParameters.ToPointer();
                    for (int i = 0; i < NumParameters; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_ROOT_PARAMETER>^ value)
                {
                    if (value->Length > NumParameters)
                    {
                        NumParameters = value->Length;
                    }

                    D3D12_ROOT_PARAMETER* pEntries = (D3D12_ROOT_PARAMETER*)pParameters.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void Parameters_new(size_t numElements)
            {
                pParameters = IntPtr(new ::D3D12_ROOT_PARAMETER[numElements]);
                NumParameters = numElements;
            }

            void Parameters_delete()
            {
                delete pParameters.ToPointer();
            }

            D3D12_ROOT_PARAMETER Parameters_get(size_t index)
            {
                D3D12_ROOT_PARAMETER* pEntries = (D3D12_ROOT_PARAMETER*)pParameters.ToPointer();
                return pEntries[index];
            }

            void Parameters_set(size_t index, D3D12_ROOT_PARAMETER value)
            {
                D3D12_ROOT_PARAMETER* pEntries = (D3D12_ROOT_PARAMETER*)pParameters.ToPointer();
                pEntries[index] = value;
            }

            unsigned int NumStaticSamplers;
            IntPtr pStaticSamplers;
            property array<D3D12_STATIC_SAMPLER_DESC>^ StaticSamplers
            {
                array<D3D12_STATIC_SAMPLER_DESC>^ get()
                {
                    array<D3D12_STATIC_SAMPLER_DESC>^ ret = gcnew array<D3D12_STATIC_SAMPLER_DESC>(NumStaticSamplers);
                    D3D12_STATIC_SAMPLER_DESC* pEntries = (D3D12_STATIC_SAMPLER_DESC*)pStaticSamplers.ToPointer();
                    for (int i = 0; i < NumStaticSamplers; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_STATIC_SAMPLER_DESC>^ value)
                {
                    if (value->Length > NumStaticSamplers)
                    {
                        NumStaticSamplers = value->Length;
                    }

                    D3D12_STATIC_SAMPLER_DESC* pEntries = (D3D12_STATIC_SAMPLER_DESC*)pStaticSamplers.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void StaticSamplers_new(size_t numElements)
            {
                pStaticSamplers = IntPtr(new ::D3D12_STATIC_SAMPLER_DESC[numElements]);
                NumStaticSamplers = numElements;
            }

            void StaticSamplers_delete()
            {
                delete pStaticSamplers.ToPointer();
            }

            D3D12_STATIC_SAMPLER_DESC StaticSamplers_get(size_t index)
            {
                D3D12_STATIC_SAMPLER_DESC* pEntries = (D3D12_STATIC_SAMPLER_DESC*)pStaticSamplers.ToPointer();
                return pEntries[index];
            }

            void StaticSamplers_set(size_t index, D3D12_STATIC_SAMPLER_DESC value)
            {
                D3D12_STATIC_SAMPLER_DESC* pEntries = (D3D12_STATIC_SAMPLER_DESC*)pStaticSamplers.ToPointer();
                pEntries[index] = value;
            }
            D3D12_ROOT_SIGNATURE_FLAGS Flags;
        };
    }
}