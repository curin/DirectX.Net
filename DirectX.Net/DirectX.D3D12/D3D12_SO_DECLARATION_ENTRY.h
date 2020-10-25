#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SO_DECLARATION_ENTRY
        {
            unsigned int Stream;
            UnmanagedConstantString SemanticName;
            unsigned int SemanticIndex;
            unsigned char StartComponent;
            unsigned char ComponentCount;
            unsigned char OutputSlot;
        };
    }
}