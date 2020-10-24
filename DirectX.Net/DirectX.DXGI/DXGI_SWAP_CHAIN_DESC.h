#pragma once

#include "DXGI_MODE_DESC.h"
#include "DXGI_SAMPLE_DESC.h"
#include "DXGI_SWAP_EFFECT.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_SWAP_CHAIN_DESC
        {
            DXGI_MODE_DESC BufferDesc;
            DXGI_SAMPLE_DESC SampleDesc;
            unsigned int BufferUsage;
            unsigned int BufferCount;
            IntPtr OutputWindow;
            [MarshalAs(UnmanagedType::Bool)]
            bool Windowed;
            DXGI_SWAP_EFFECT SwapEffect;
            unsigned int Flags;
        };
    }
}