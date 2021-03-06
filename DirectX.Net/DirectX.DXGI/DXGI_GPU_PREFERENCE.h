#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum class DXGI_GPU_PREFERENCE
        {
            DXGI_GPU_PREFERENCE_UNSPECIFIED = 0,
            DXGI_GPU_PREFERENCE_MINIMUM_POWER = (DXGI_GPU_PREFERENCE_UNSPECIFIED + 1),
            DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE = (DXGI_GPU_PREFERENCE_MINIMUM_POWER + 1)
        };
    }
}