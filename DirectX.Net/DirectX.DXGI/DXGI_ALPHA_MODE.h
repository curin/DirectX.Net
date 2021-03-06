#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum class DXGI_ALPHA_MODE
        {
            DXGI_ALPHA_MODE_UNSPECIFIED = 0,
            DXGI_ALPHA_MODE_PREMULTIPLIED = 1,
            DXGI_ALPHA_MODE_STRAIGHT = 2,
            DXGI_ALPHA_MODE_IGNORE = 3,
            DXGI_ALPHA_MODE_FORCE_DWORD = 0xffffffff
        };
    }
}