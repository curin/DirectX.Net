#pragma once

#include "D3D12_RESOURCE_STATES.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RESOURCE_TRANSITION_BARRIER
        {
            IntPtr pResource; //ID3D12Resource*
            unsigned int Subresource;
            D3D12_RESOURCE_STATES StateBefore;
            D3D12_RESOURCE_STATES StateAfter;
        };
    }
}