#pragma once

namespace DirectX
{
    public enum class D3D_SHADER_CBUFFER_FLAGS
    {
        D3D_CBF_USERPACKED = 1,
        D3D10_CBF_USERPACKED = D3D_CBF_USERPACKED,
        D3D_CBF_FORCE_DWORD = 0x7fffffff
    };
}