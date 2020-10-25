#pragma once

#include "DXGI_OUTDUPL_POINTER_POSITION.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_OUTDUPL_FRAME_INFO
        {
            LARGE_INTEGER LastPresentTime;
            LARGE_INTEGER LastMouseUpdateTime;
            unsigned int AccumulatedFrames;
            int RectsCoalesced;
            int ProtectedContentMaskedOut;
            DXGI_OUTDUPL_POINTER_POSITION PointerPosition;
            unsigned int TotalMetadataBufferSize;
            unsigned int PointerShapeBufferSize;
        };
    }
}