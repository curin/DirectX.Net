#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAGS
        {
            DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_FULLSCREEN = 1,
            DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_WINDOWED = 2,
            DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_CURSOR_STRETCHED = 4
        };
    }
}