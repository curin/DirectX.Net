#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SHADER_BYTECODE
        {
            IntPtr pShaderBytecode;
            size_t BytecodeLength;
        };
    }
}