#pragma once

#include "D3D12_INPUT_CLASSIFICATION.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace DirectX::DXGI;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        public value struct D3D12_INPUT_ELEMENT_DESC
        {
            UnmanagedConstantString SemanticName;
            unsigned int SemanticIndex;
            DirectX::DXGI::DXGI_FORMAT Format;
            unsigned int InputSlot;
            unsigned int AlignedByteOffset;
            D3D12_INPUT_CLASSIFICATION InputSlotClass;
            unsigned int InstanceDataStepRate;
        };
    }
}