#pragma once

#include "DXGI_FORMAT.h"
#include "DXGI_SAMPLE_DESC.h"

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_SURFACE_DESC
        {
            unsigned int Width;
            unsigned int Height;
            DXGI_FORMAT Format;
            DXGI_SAMPLE_DESC SampleDesc;
        };
    }
}