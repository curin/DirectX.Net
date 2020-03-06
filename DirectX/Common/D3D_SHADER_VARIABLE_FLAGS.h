#pragma once

namespace DirectX
{
    public enum D3D_SHADER_VARIABLE_FLAGS
    {
        D3D_SVF_USERPACKED = 1,
        D3D_SVF_USED = 2,
        D3D_SVF_INTERFACE_POINTER = 4,
        D3D_SVF_INTERFACE_PARAMETER = 8,
        D3D10_SVF_USERPACKED = D3D_SVF_USERPACKED,
        D3D10_SVF_USED = D3D_SVF_USED,
        D3D11_SVF_INTERFACE_POINTER = D3D_SVF_INTERFACE_POINTER,
        D3D11_SVF_INTERFACE_PARAMETER = D3D_SVF_INTERFACE_PARAMETER,
        D3D_SVF_FORCE_DWORD = 0x7fffffff
    };
}