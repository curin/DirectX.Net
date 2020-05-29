#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SO_DECLARATION_ENTRY
        {
            unsigned int Stream;
            [MarshalAs(UnmanagedType::LPStr)]
            String^ SemanticName;
            unsigned int SemanticIndex;
            unsigned char StartComponent;
            unsigned char ComponentCount;
            unsigned char OutputSlot;
        };
    }
}