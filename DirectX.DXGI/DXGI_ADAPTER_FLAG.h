#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum DXGI_ADAPTER_FLAG
        {
            DXGI_ADAPTER_FLAG_NONE = 0,
            DXGI_ADAPTER_FLAG_REMOTE = 1,
            DXGI_ADAPTER_FLAG_SOFTWARE = 2,
            DXGI_ADAPTER_FLAG_FORCE_DWORD = 0xffffffff
        };
    }
}