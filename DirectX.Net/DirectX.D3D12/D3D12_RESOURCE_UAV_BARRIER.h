#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public value struct D3D12_RESOURCE_UAV_BARRIER
        {
            IntPtr pResource;//ID3D12Resource*

            property ID3D12Resource^ Resource
            {
                ID3D12Resource^ get()
                {
                    return gcnew ID3D12Resource(pResource);
                }
            }
        };
    }
}