#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum D3D12_INDEX_BUFFER_STRIP_CUT_VALUE
        {
            D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_DISABLED = 0,
            D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFF = 1,
            D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFFFFFF = 2
        };
    }
}