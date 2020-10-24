#pragma once

#include "D3D12_QUERY_HEAP_TYPE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_QUERY_HEAP_DESC
        {
            D3D12_QUERY_HEAP_TYPE Type;
            unsigned int Count;
            unsigned int NodeMask;
        };
    }
}