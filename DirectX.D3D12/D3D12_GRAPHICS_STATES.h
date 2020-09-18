#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_GRAPHICS_STATES
        {
            D3D12_GRAPHICS_STATE_NONE = 0,
            D3D12_GRAPHICS_STATE_IA_VERTEX_BUFFERS = (1 << 0),
            D3D12_GRAPHICS_STATE_IA_INDEX_BUFFER = (1 << 1),
            D3D12_GRAPHICS_STATE_IA_PRIMITIVE_TOPOLOGY = (1 << 2),
            D3D12_GRAPHICS_STATE_DESCRIPTOR_HEAP = (1 << 3),
            D3D12_GRAPHICS_STATE_GRAPHICS_ROOT_SIGNATURE = (1 << 4),
            D3D12_GRAPHICS_STATE_COMPUTE_ROOT_SIGNATURE = (1 << 5),
            D3D12_GRAPHICS_STATE_RS_VIEWPORTS = (1 << 6),
            D3D12_GRAPHICS_STATE_RS_SCISSOR_RECTS = (1 << 7),
            D3D12_GRAPHICS_STATE_PREDICATION = (1 << 8),
            D3D12_GRAPHICS_STATE_OM_RENDER_TARGETS = (1 << 9),
            D3D12_GRAPHICS_STATE_OM_STENCIL_REF = (1 << 10),
            D3D12_GRAPHICS_STATE_OM_BLEND_FACTOR = (1 << 11),
            D3D12_GRAPHICS_STATE_PIPELINE_STATE = (1 << 12),
            D3D12_GRAPHICS_STATE_SO_TARGETS = (1 << 13),
            D3D12_GRAPHICS_STATE_OM_DEPTH_BOUNDS = (1 << 14),
            D3D12_GRAPHICS_STATE_SAMPLE_POSITIONS = (1 << 15),
            D3D12_GRAPHICS_STATE_VIEW_INSTANCE_MASK = (1 << 16)
        };
    }
}