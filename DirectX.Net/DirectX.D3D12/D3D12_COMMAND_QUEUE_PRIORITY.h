#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_COMMAND_QUEUE_PRIORITY
        {
            D3D12_COMMAND_QUEUE_PRIORITY_NORMAL = 0,
            D3D12_COMMAND_QUEUE_PRIORITY_HIGH = 100,
            D3D12_COMMAND_QUEUE_PRIORITY_GLOBAL_REALTIME = 10000
        };
    }
}