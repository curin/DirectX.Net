#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum class DXGI_ADAPTER_FLAG3
        {
            DXGI_ADAPTER_FLAG3_NONE = 0,
            DXGI_ADAPTER_FLAG3_REMOTE = 1,
            DXGI_ADAPTER_FLAG3_SOFTWARE = 2,
            DXGI_ADAPTER_FLAG3_ACG_COMPATIBLE = 4,
            DXGI_ADAPTER_FLAG3_SUPPORT_MONITORED_FENCES = 8,
            DXGI_ADAPTER_FLAG3_SUPPORT_NON_MONITORED_FENCES = 0x10,
            DXGI_ADAPTER_FLAG3_KEYED_MUTEX_CONFORMANCE = 0x20,
            DXGI_ADAPTER_FLAG3_FORCE_DWORD = 0xffffffff
        };
    }
}