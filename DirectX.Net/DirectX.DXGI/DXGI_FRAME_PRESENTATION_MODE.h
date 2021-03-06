#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum class DXGI_FRAME_PRESENTATION_MODE
        {
            DXGI_FRAME_PRESENTATION_MODE_COMPOSED = 0,
            DXGI_FRAME_PRESENTATION_MODE_OVERLAY = 1,
            DXGI_FRAME_PRESENTATION_MODE_NONE = 2,
            DXGI_FRAME_PRESENTATION_MODE_COMPOSITION_FAILURE = 3
        };
    }
}