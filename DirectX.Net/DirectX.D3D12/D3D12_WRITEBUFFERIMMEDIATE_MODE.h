#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_WRITEBUFFERIMMEDIATE_MODE
        {
            D3D12_WRITEBUFFERIMMEDIATE_MODE_DEFAULT = 0,
            D3D12_WRITEBUFFERIMMEDIATE_MODE_MARKER_IN = 0x1,
            D3D12_WRITEBUFFERIMMEDIATE_MODE_MARKER_OUT = 0x2
        };
    }
}