#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum class D3D12_STATE_SUBOBJECT_TYPE
        {
            D3D12_STATE_SUBOBJECT_TYPE_STATE_OBJECT_CONFIG = 0,
            D3D12_STATE_SUBOBJECT_TYPE_GLOBAL_ROOT_SIGNATURE = 1,
            D3D12_STATE_SUBOBJECT_TYPE_LOCAL_ROOT_SIGNATURE = 2,
            D3D12_STATE_SUBOBJECT_TYPE_NODE_MASK = 3,
            D3D12_STATE_SUBOBJECT_TYPE_DXIL_LIBRARY = 5,
            D3D12_STATE_SUBOBJECT_TYPE_EXISTING_COLLECTION = 6,
            D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION = 7,
            D3D12_STATE_SUBOBJECT_TYPE_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION = 8,
            D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_SHADER_CONFIG = 9,
            D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_PIPELINE_CONFIG = 10,
            D3D12_STATE_SUBOBJECT_TYPE_HIT_GROUP = 11,
            D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_PIPELINE_CONFIG1 = 12,
            D3D12_STATE_SUBOBJECT_TYPE_MAX_VALID = (D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_PIPELINE_CONFIG1 + 1)
        };
    }
}