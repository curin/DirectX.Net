#pragma once

namespace DirectX
{
    public enum class D3D_INCLUDE_TYPE
    {
        D3D_INCLUDE_LOCAL = 0,
        D3D_INCLUDE_SYSTEM = (D3D_INCLUDE_LOCAL + 1),
        D3D10_INCLUDE_LOCAL = D3D_INCLUDE_LOCAL,
        D3D10_INCLUDE_SYSTEM = D3D_INCLUDE_SYSTEM,
        D3D_INCLUDE_FORCE_DWORD = 0x7fffffff
    };
}