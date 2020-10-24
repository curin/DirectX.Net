#pragma once

#include "ID3D12RootSignature.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_GLOBAL_ROOT_SIGNATURE
        {
            IntPtr pGlobalRootSignature;//ID3D12RootSignature*

            property ID3D12RootSignature^ GlobalRootSignature
            {
                ID3D12RootSignature^ get()
                {
                    return gcnew ID3D12RootSignature(pGlobalRootSignature);
                }
            }
        };
    }
}