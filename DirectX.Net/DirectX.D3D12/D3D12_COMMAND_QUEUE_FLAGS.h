#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_COMMAND_QUEUE_FLAGS
        {
            D3D12_COMMAND_QUEUE_FLAG_NONE = 0,
            D3D12_COMMAND_QUEUE_FLAG_DISABLE_GPU_TIMEOUT = 0x1
        };
    }
}