#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum class DXGI_RESIDENCY
        {
            DXGI_RESIDENCY_FULLY_RESIDENT = 1,
            DXGI_RESIDENCY_RESIDENT_IN_SHARED_MEMORY = 2,
            DXGI_RESIDENCY_EVICTED_TO_DISK = 3
        };
    }
}