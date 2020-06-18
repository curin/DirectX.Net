#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_COMMAND_LIST_TYPE
        {
            D3D12_COMMAND_LIST_TYPE_DIRECT = 0,
            D3D12_COMMAND_LIST_TYPE_BUNDLE = 1,
            D3D12_COMMAND_LIST_TYPE_COMPUTE = 2,
            D3D12_COMMAND_LIST_TYPE_COPY = 3,
            D3D12_COMMAND_LIST_TYPE_VIDEO_DECODE = 4,
            D3D12_COMMAND_LIST_TYPE_VIDEO_PROCESS = 5,
            D3D12_COMMAND_LIST_TYPE_VIDEO_ENCODE = 6
        };
    }
}