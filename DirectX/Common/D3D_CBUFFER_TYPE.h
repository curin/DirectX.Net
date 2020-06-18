#pragma once

namespace DirectX
{
    public enum class D3D_CBUFFER_TYPE
    {
        D3D_CT_CBUFFER = 0,
        D3D_CT_TBUFFER = (D3D_CT_CBUFFER + 1),
        D3D_CT_INTERFACE_POINTERS = (D3D_CT_TBUFFER + 1),
        D3D_CT_RESOURCE_BIND_INFO = (D3D_CT_INTERFACE_POINTERS + 1),
        D3D10_CT_CBUFFER = D3D_CT_CBUFFER,
        D3D10_CT_TBUFFER = D3D_CT_TBUFFER,
        D3D11_CT_CBUFFER = D3D_CT_CBUFFER,
        D3D11_CT_TBUFFER = D3D_CT_TBUFFER,
        D3D11_CT_INTERFACE_POINTERS = D3D_CT_INTERFACE_POINTERS,
        D3D11_CT_RESOURCE_BIND_INFO = D3D_CT_RESOURCE_BIND_INFO
    };
}