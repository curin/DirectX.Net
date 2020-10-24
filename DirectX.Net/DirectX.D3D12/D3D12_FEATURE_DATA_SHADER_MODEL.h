#pragma once

#include "D3D_SHADER_MODEL.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_FEATURE_DATA_SHADER_MODEL
        {
            D3D_SHADER_MODEL HighestShaderModel;
        };
    }
}