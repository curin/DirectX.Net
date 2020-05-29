#pragma once

#include "D3D12_INPUT_CLASSIFICATION.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace DirectX::DXGI;

namespace DirectX
{
    namespace D3D12
    {
        public value struct D3D12_INPUT_ELEMENT_DESC
        {
            [MarshalAs(UnmanagedType::LPStr)]
            String^ SemanticName;
            unsigned int SemanticIndex;
            DXGI_FORMAT Format;
            unsigned int InputSlot;
            unsigned int AlignedByteOffset;
            D3D12_INPUT_CLASSIFICATION InputSlotClass;
            unsigned int InstanceDataStepRate;
        };
    }
}