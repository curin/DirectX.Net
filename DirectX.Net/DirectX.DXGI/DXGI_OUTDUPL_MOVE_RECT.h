#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public value struct DXGI_OUTDUPL_MOVE_RECT
        {
            POINT SourcePoint;
            RECT DestinationRect;
        };
    }
}