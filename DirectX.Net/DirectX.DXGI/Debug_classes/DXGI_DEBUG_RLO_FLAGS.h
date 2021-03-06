#pragma once

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public enum class DXGI_DEBUG_RLO_FLAGS
            {
                DXGI_DEBUG_RLO_SUMMARY = 0x1,
                DXGI_DEBUG_RLO_DETAIL = 0x2,
                DXGI_DEBUG_RLO_IGNORE_INTERNAL = 0x4,
                DXGI_DEBUG_RLO_ALL = 0x7
            };
        }
    }
}