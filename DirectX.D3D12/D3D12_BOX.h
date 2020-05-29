#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public value struct D3D12_BOX
        {
            unsigned int left;
            unsigned int top;
            unsigned int front;
            unsigned int right;
            unsigned int bottom;
            unsigned int back;
        };
    }
}