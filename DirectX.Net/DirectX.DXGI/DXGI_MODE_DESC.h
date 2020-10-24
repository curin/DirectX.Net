#pragma once
#include "DXGI_RATIONAL.h"
#include "DXGI_FORMAT.h"
#include "DXGI_MODE_SCANLINE_ORDER.h"
#include "DXGI_MODE_SCALING.h"

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_MODE_DESC
        {
            unsigned int Width;
            unsigned int Height;
            DXGI_RATIONAL RefreshRate;
            DXGI_FORMAT Format;
            DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
            DXGI_MODE_SCALING Scaling;

            DXGI_MODE_DESC(unsigned int width, unsigned int height, DXGI_RATIONAL refreshRate, DXGI_FORMAT format, 
                DXGI_MODE_SCANLINE_ORDER scanlineOrdering, DXGI_MODE_SCALING scaling)
            {
                Width = width;
                Height = height;
                RefreshRate = refreshRate;
                Format = format;
                ScanlineOrdering = scanlineOrdering;
                Scaling = scaling;
            }
        };
    }
}