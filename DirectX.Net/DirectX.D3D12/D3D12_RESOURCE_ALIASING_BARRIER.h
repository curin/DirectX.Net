#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RESOURCE_ALIASING_BARRIER
        {
            IntPtr pResourceBefore;//ID3D12Resource*
            IntPtr pResourceAfter;//ID3D12Resource*

            property ID3D12Resource^ ResourceBefore
            {
                ID3D12Resource^ get()
                {
                    return gcnew ID3D12Resource(pResourceBefore);
                }
            }

            property ID3D12Resource^ ResourceAfter
            {
                ID3D12Resource^ get()
                {
                    return gcnew ID3D12Resource(pResourceAfter);
                }
            }
        };
    }
}