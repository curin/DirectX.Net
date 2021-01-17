#include "pch.h"

#include "DirectX.D3D12.h"

#include "D3D12_COMMAND_LIST_TYPE.h"
#include "D3D12_COMMAND_QUEUE_FLAGS.h"
#include "D3D12_COMMAND_QUEUE_PRIORITY.h"
#include "D3D12_COMMAND_QUEUE_DESC.h"
#include "D3D12_PRIMITIVE_TOPOLOGY_TYPE.h"
#include "D3D12_INPUT_CLASSIFICATION.h"
#include "D3D12_INPUT_ELEMENT_DESC.h"
#include "D3D12_FILL_MODE.h"
#include "D3D12_CULL_MODE.h"
#include "D3D12_SO_DECLARATION_ENTRY.h"
#include "D3D12_VIEWPORT.h"
#include "D3D12_BOX.h"
#include "D3D12_COMPARISON_FUNC.h"
#include "D3D12_DEPTH_WRITE_MASK.h"
#include "D3D12_STENCIL_OP.h"
#include "D3D12_DEPTH_STENCILOP_DESC.h"
#include "D3D12_DEPTH_STENCIL_DESC.h"
#include "D3D12_DEPTH_STENCIL_DESC1.h"
#include "D3D12_BLEND.h"
#include "D3D12_BLEND_OP.h"
#include "D3D12_COLOR_WRITE_ENABLE.h"
#include "D3D12_LOGIC_OP.h"
#include "D3D12_RENDER_TARGET_BLEND_DESC.h"
#include "D3D12_BLEND_DESC.h"
#include "D3D12_CONSERVATIVE_RASTERIZATION_MODE.h"
#include "D3D12_RASTERIZER_DESC.h"
#include "D3D12_SHADER_BYTECODE.h"
#include "D3D12_STREAM_OUTPUT_DESC.h"
#include "D3D12_INPUT_LAYOUT_DESC.h"
#include "D3D12_INDEX_BUFFER_STRIP_CUT_VALUE.h"
#include "D3D12_CACHED_PIPELINE_STATE.h"
#include "D3D12_PIPELINE_STATE_FLAGS.h"
#include "D3D12_GRAPHICS_PIPELINE_STATE_DESC.h"
#include "D3D12_COMPUTE_PIPELINE_STATE_DESC.h"
#include "D3D12_RT_FORMAT_ARRAY.h"
#include "D3D12_PIPELINE_STATE_STREAM_DESC.h"
#include "D3D12_PIPELINE_STATE_SUBOBJECT_TYPE.h"
#include "D3D12_FEATURE.h"
#include "D3D12_SHADER_MIN_PRECISION_SUPPORT.h"
#include "D3D12_TILED_RESOURCES_TIER.h"
#include "D3D12_RESOURCE_BINDING_TIER.h"
#include "D3D12_CONSERVATIVE_RASTERIZATION_TIER.h"
#include "D3D12_FORMAT_SUPPORT1.h"
#include "D3D12_FORMAT_SUPPORT2.h"
#include "D3D12_MULTISAMPLE_QUALITY_LEVEL_FLAGS.h"
#include "D3D12_CROSS_NODE_SHARING_TIER.h"
#include "D3D12_RESOURCE_HEAP_TIER.h"
#include "D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER.h"
#include "D3D12_VIEW_INSTANCING_TIER.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS1.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS2.h"
#include "D3D_ROOT_SIGNATURE_VERSION.h"
#include "D3D12_FEATURE_DATA_ROOT_SIGNATURE.h"
#include "D3D12_FEATURE_DATA_ARCHITECTURE.h"
#include "D3D12_FEATURE_DATA_ARCHITECTURE1.h"
#include "D3D12_FEATURE_DATA_FEATURE_LEVELS.h"
#include "D3D_SHADER_MODEL.h"
#include "D3D12_FEATURE_DATA_SHADER_MODEL.h"
#include "D3D12_FEATURE_DATA_FORMAT_SUPPORT.h"
#include "D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS.h"
#include "D3D12_FEATURE_DATA_FORMAT_INFO.h"
#include "D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT.h"
#include "D3D12_SHADER_CACHE_SUPPORT_FLAGS.h"
#include "D3D12_FEATURE_DATA_SHADER_CACHE.h"
#include "D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY.h"
#include "D3D12_COMMAND_LIST_SUPPORT_FLAGS.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS3.h"
#include "D3D12_FEATURE_DATA_EXISTING_HEAPS.h"
#include "D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS4.h"
#include "D3D12_HEAP_SERIALIZATION_TIER.h"
#include "D3D12_FEATURE_DATA_SERIALIZATION.h"
#include "D3D12_FEATURE_DATA_CROSS_NODE.h"
#include "D3D12_RENDER_PASS_TIER.h"
#include "D3D12_RAYTRACING_TIER.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS5.h"
#include "D3D12_VARIABLE_SHADING_RATE_TIER.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS6.h"
#include "D3D12_MESH_SHADER_TIER.h"
#include "D3D12_SAMPLER_FEEDBACK_TIER.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS7.h"
#include "D3D12_FEATURE_DATA_QUERY_META_COMMAND.h"
#include "D3D12_RESOURCE_ALLOCATION_INFO.h"
#include "D3D12_RESOURCE_ALLOCATION_INFO1.h"
#include "D3D12_HEAP_TYPE.h"
#include "D3D12_CPU_PAGE_PROPERTY.h"
#include "D3D12_MEMORY_POOL.h"
#include "D3D12_HEAP_PROPERTIES.h"
#include "D3D12_HEAP_FLAGS.h"
#include "D3D12_HEAP_DESC.h"
#include "D3D12_RESOURCE_DIMENSION.h"
#include "D3D12_TEXTURE_LAYOUT.h"
#include "D3D12_RESOURCE_FLAGS.h"
#include "D3D12_RESOURCE_DESC.h"
#include "D3D12_RESOURCE_DESC1.h"
#include "D3D12_DEPTH_STENCIL_VALUE.h"
#include "D3D12_CLEAR_VALUE.h"
#include "D3D12_RANGE.h"
#include "D3D12_RANGE_UINT64.h"
#include "D3D12_SUBRESOURCE_RANGE_UINT64.h"
#include "D3D12_SUBRESOURCE_INFO.h"
#include "D3D12_TILED_RESOURCE_COORDINATE.h"
#include "D3D12_TILE_REGION_SIZE.h"
#include "D3D12_TILE_RANGE_FLAGS.h"
#include "D3D12_SUBRESOURCE_TILING.h"
#include "D3D12_TILE_SHAPE.h"
#include "D3D12_PACKED_MIP_INFO.h"
#include "D3D12_TILE_MAPPING_FLAGS.h"
#include "D3D12_TILE_COPY_FLAGS.h"
#include "D3D12_RESOURCE_STATES.h"
#include "D3D12_RESOURCE_BARRIER_TYPE.h"
#include "D3D12_RESOURCE_TRANSITION_BARRIER.h"
#include "D3D12_RESOURCE_ALIASING_BARRIER.h"
#include "D3D12_RESOURCE_UAV_BARRIER.h"
#include "D3D12_RESOURCE_BARRIER_FLAGS.h"
#include "D3D12_RESOURCE_BARRIER.h"
#include "D3D12_SUBRESOURCE_FOOTPRINT.h"
#include "D3D12_PLACED_SUBRESOURCE_FOOTPRINT.h"
#include "D3D12_TEXTURE_COPY_TYPE.h"
#include "D3D12_TEXTURE_COPY_LOCATION.h"
#include "D3D12_RESOLVE_MODE.h"
#include "D3D12_SAMPLE_POSITION.h"
#include "D3D12_VIEW_INSTANCE_LOCATION.h"
#include "D3D12_VIEW_INSTANCING_FLAGS.h"
#include "D3D12_VIEW_INSTANCING_DESC.h"
#include "D3D12_SHADER_COMPONENT_MAPPING.h"
#include "D3D12_BUFFER_SRV_FLAGS.h"
#include "D3D12_BUFFER_SRV.h"
#include "D3D12_TEX1D_SRV.h"
#include "D3D12_TEX1D_ARRAY_SRV.h"
#include "D3D12_TEX2D_SRV.h"
#include "D3D12_TEX2D_ARRAY_SRV.h"
#include "D3D12_TEX3D_SRV.h"
#include "D3D12_TEXCUBE_SRV.h"
#include "D3D12_TEXCUBE_ARRAY_SRV.h"
#include "D3D12_TEX2DMS_SRV.h"
#include "D3D12_TEX2DMS_ARRAY_SRV.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV.h"
#include "D3D12_SRV_DIMENSION.h"
#include "D3D12_SHADER_RESOURCE_VIEW_DESC.h"
#include "D3D12_CONSTANT_BUFFER_VIEW_DESC.h"
#include "D3D12_FILTER.h"
#include "D3D12_FILTER_TYPE.h"
#include "D3D12_FILTER_REDUCTION_TYPE.h"
#include "D3D12_TEXTURE_ADDRESS_MODE.h"
#include "D3D12_SAMPLER_DESC.h"
#include "D3D12_BUFFER_UAV_FLAGS.h"
#include "D3D12_BUFFER_UAV.h"
#include "D3D12_TEX1D_UAV.h"
#include "D3D12_TEX1D_ARRAY_UAV.h"
#include "D3D12_TEX2D_UAV.h"
#include "D3D12_TEX2D_ARRAY_UAV.h"
#include "D3D12_TEX3D_UAV.h"
#include "D3D12_UNORDERED_ACCESS_VIEW_DESC.h"
#include "D3D12_BUFFER_RTV.h"
#include "D3D12_TEX1D_RTV.h"
#include "D3D12_TEX1D_ARRAY_RTV.h"
#include "D3D12_TEX2D_RTV.h"
#include "D3D12_TEX2DMS_RTV.h"
#include "D3D12_TEX2D_ARRAY_RTV.h"
#include "D3D12_TEX2DMS_ARRAY_RTV.h"
#include "D3D12_TEX3D_RTV.h"
#include "D3D12_RTV_DIMENSION.h"
#include "D3D12_RENDER_TARGET_VIEW_DESC.h"
#include "D3D12_TEX1D_DSV.h"
#include "D3D12_TEX1D_ARRAY_DSV.h"
#include "D3D12_TEX2D_DSV.h"
#include "D3D12_TEX2D_ARRAY_DSV.h"
#include "D3D12_TEX2DMS_DSV.h"
#include "D3D12_TEX2DMS_ARRAY_DSV.h"
#include "D3D12_DSV_FLAGS.h"
#include "D3D12_DSV_DIMENSION.h"
#include "D3D12_DEPTH_STENCIL_VIEW_DESC.h"
#include "D3D12_CLEAR_FLAGS.h"
#include "D3D12_FENCE_FLAGS.h"
#include "D3D12_DESCRIPTOR_HEAP_TYPE.h"
#include "D3D12_DESCRIPTOR_HEAP_FLAGS.h"
#include "D3D12_DESCRIPTOR_HEAP_DESC.h"
#include "D3D12_DESCRIPTOR_RANGE_TYPE.h"
#include "D3D12_DESCRIPTOR_RANGE.h"
#include "D3D12_ROOT_DESCRIPTOR_TABLE.h"
#include "D3D12_ROOT_CONSTANTS.h"
#include "D3D12_ROOT_DESCRIPTOR.h"
#include "D3D12_SHADER_VISIBILITY.h"
#include "D3D12_ROOT_PARAMETER_TYPE.h"
#include "D3D12_ROOT_PARAMETER.h"
#include "D3D12_ROOT_SIGNATURE_FLAGS.h"
#include "D3D12_STATIC_BORDER_COLOR.h"
#include "D3D12_STATIC_SAMPLER_DESC.h"
#include "D3D12_ROOT_SIGNATURE_DESC.h"
#include "D3D12_DESCRIPTOR_RANGE_FLAGS.h"
#include "D3D12_DESCRIPTOR_RANGE1.h"
#include "D3D12_ROOT_DESCRIPTOR_TABLE1.h"
#include "D3D12_ROOT_DESCRIPTOR_FLAGS.h"
#include "D3D12_ROOT_DESCRIPTOR1.h"
#include "D3D12_ROOT_PARAMETER1.h"
#include "D3D12_ROOT_SIGNATURE_DESC1.h"
#include "D3D12_VERSIONED_ROOT_SIGNATURE_DESC.h"
#include "D3D12_CPU_DESCRIPTOR_HANDLE.h"
#include "D3D12_GPU_DESCRIPTOR_HANDLE.h"
#include "D3D12_DISCARD_REGION.h"
#include "D3D12_QUERY_HEAP_TYPE.h"
#include "D3D12_QUERY_HEAP_DESC.h"
#include "D3D12_QUERY_TYPE.h"
#include "D3D12_PREDICATION_OP.h"
#include "D3D12_QUERY_DATA_PIPELINE_STATISTICS.h"
#include "D3D12_QUERY_DATA_SO_STATISTICS.h"
#include "D3D12_STREAM_OUTPUT_BUFFER_VIEW.h"
#include "D3D12_DRAW_ARGUMENTS.h"
#include "D3D12_DRAW_INDEXED_ARGUMENTS.h"
#include "D3D12_DISPATCH_ARGUMENTS.h"
#include "D3D12_INDEX_BUFFER_VIEW.h"
#include "D3D12_INDIRECT_ARGUMENT_TYPE.h"
#include "D3D12_INDIRECT_ARGUMENT_DESC.h"
#include "D3D12_COMMAND_SIGNATURE_DESC.h"
#include "D3D12_WRITEBUFFERIMMEDIATE_PARAMETER.h"
#include "D3D12_WRITEBUFFERIMMEDIATE_MODE.h"
#include "D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAGS.h"
#include "D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPES.h"
#include "D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPE_COUNT.h"
#include "D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT.h"
#include "D3D12_FEATURE.h"
#include "D3D12_MULTIPLE_FENCE_WAIT_FLAGS.h"
#include "D3D12_RESIDENCY_PRIORITY.h"
#include "D3D12_RESIDENCY_FLAGS.h"
#include "D3D12_COMMAND_LIST_FLAGS.h"
#include "D3D12_COMMAND_POOL_FLAGS.h"
#include "D3D12_COMMAND_RECORDER_FLAGS.h"
#include "D3D12_PROTECTED_SESSION_STATUS.h"
#include "D3D12_PROTECTED_RESOURCE_SESSION_FLAGS.h"
#include "D3D12_PROTECTED_RESOURCE_SESSION_DESC.h"
#include "D3D12_LIFETIME_STATE.h"
#include "D3D12_META_COMMAND_PARAMETER_TYPE.h"
#include "D3D12_META_COMMAND_PARAMETER_FLAGS.h"
#include "D3D12_META_COMMAND_PARAMETER_STAGE.h"
#include "D3D12_META_COMMAND_PARAMETER_DESC.h"
#include "D3D12_GRAPHICS_STATES.h"
#include "D3D12_STATE_SUBOBJECT_TYPE.h"
#include "D3D12_STATE_SUBOBJECT.h"
#include "D3D12_STATE_OBJECT_FLAGS.h"
#include "D3D12_STATE_OBJECT_CONFIG.h"
#include "D3D12_GLOBAL_ROOT_SIGNATURE.h"
#include "D3D12_LOCAL_ROOT_SIGNATURE.h"
#include "D3D12_NODE_MASK.h"
#include "D3D12_EXPORT_FLAGS.h"
#include "D3D12_EXPORT_DESC.h"
#include "D3D12_DXIL_LIBRARY_DESC.h"
#include "D3D12_EXISTING_COLLECTION_DESC.h"
#include "D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION.h"
#include "D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION.h"
#include "D3D12_HIT_GROUP_TYPE.h"
#include "D3D12_HIT_GROUP_DESC.h"
#include "D3D12_RAYTRACING_SHADER_CONFIG.h"
#include "D3D12_RAYTRACING_PIPELINE_CONFIG.h"
#include "D3D12_RAYTRACING_PIPELINE_FLAGS.h"
#include "D3D12_RAYTRACING_PIPELINE_CONFIG1.h"
#include "D3D12_STATE_OBJECT_TYPE.h"
#include "D3D12_STATE_OBJECT_DESC.h"
#include "D3D12_RAYTRACING_GEOMETRY_FLAGS.h"
#include "D3D12_RAYTRACING_GEOMETRY_TYPE.h"
#include "D3D12_RAYTRACING_INSTANCE_FLAGS.h"
#include "D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE.h"
#include "D3D12_GPU_VIRTUAL_ADDRESS_RANGE.h"
#include "D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE.h"
#include "D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC.h"
#include "D3D12_RAYTRACING_AABB.h"
#include "D3D12_RAYTRACING_GEOMETRY_AABBS_DESC.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE.h"
#include "D3D12_ELEMENTS_LAYOUT.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TYPE.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_COMPACTED_SIZE_DESC.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TOOLS_VISUALIZATION_DESC.h"
#include "D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_TOOLS_VISUALIZATION_HEADER.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_SERIALIZATION_DESC.h"
#include "D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER.h"
#include "D3D12_SERIALIZED_DATA_TYPE.h"
#include "D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS.h"
#include "D3D12_SERIALIZED_RAYTRACING_ACCELERATION_STRUCTURE_HEADER.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_CURRENT_SIZE_DESC.h"
#include "D3D12_RAYTRACING_INSTANCE_DESC.h"
#include "D3D12_RAYTRACING_GEOMETRY_DESC.h"
#include "D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS.h"
#include "D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO.h"
#include "D3D12_RAY_FLAGS.h"
#include "D3D12_HIT_KIND.h"
