#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum DXGI_RECLAIM_RESOURCE_RESULTS
        {
            DXGI_RECLAIM_RESOURCE_RESULT_OK = 0,
            DXGI_RECLAIM_RESOURCE_RESULT_DISCARDED = 1,
            DXGI_RECLAIM_RESOURCE_RESULT_NOT_COMMITTED = 2
        };
    }
}