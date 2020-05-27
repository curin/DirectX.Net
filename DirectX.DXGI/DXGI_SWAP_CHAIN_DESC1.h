#pragma once

#include "DXGI_MODE_DESC.h"
#include "DXGI_SAMPLE_DESC.h"
#include "DXGI_SWAP_EFFECT.h"
#include "DXGI_SCALING.h"
#include "DXGI_ALPHA_MODE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_SWAP_CHAIN_DESC1
        {
            unsigned int Width;
            unsigned int Height;
            DXGI_FORMAT Format;
            [MarshalAs(UnmanagedType::Bool)]
            bool Stereo;
            DXGI_SAMPLE_DESC SampleDesc;
            unsigned int BufferUsage;
            unsigned int BufferCount;
            DXGI_SCALING Scaling;
            DXGI_SWAP_EFFECT SwapEffect;
            DXGI_ALPHA_MODE AlphaMode;
            unsigned int Flags;
        };
    }
}