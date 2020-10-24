#pragma once

#include "ID3D12RootSignature.h"
#include "D3D12_SHADER_BYTECODE.h"
#include "D3D12_CACHED_PIPELINE_STATE.h"
#include "D3D12_PIPELINE_STATE_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_COMPUTE_PIPELINE_STATE_DESC
        {
            IntPtr pRootSignature;
            D3D12_SHADER_BYTECODE CS;
            unsigned int NodeMask;
            D3D12_CACHED_PIPELINE_STATE CachedPSO;
            D3D12_PIPELINE_STATE_FLAGS Flags;

            property ID3D12RootSignature^ RootSignature
            {
                ID3D12RootSignature^ get()
                {
                    return gcnew ID3D12RootSignature(pRootSignature);
                }
                void set(ID3D12RootSignature^ value)
                {
                    pRootSignature = value->Pointer;
                }
            }
        };
    }
}