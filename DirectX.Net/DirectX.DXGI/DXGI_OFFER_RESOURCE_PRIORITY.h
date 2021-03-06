#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum class DXGI_OFFER_RESOURCE_PRIORITY
        {
            DXGI_OFFER_RESOURCE_PRIORITY_LOW = 1,
            DXGI_OFFER_RESOURCE_PRIORITY_NORMAL = (DXGI_OFFER_RESOURCE_PRIORITY_LOW + 1),
            DXGI_OFFER_RESOURCE_PRIORITY_HIGH = (DXGI_OFFER_RESOURCE_PRIORITY_NORMAL + 1)
        };
    }
}