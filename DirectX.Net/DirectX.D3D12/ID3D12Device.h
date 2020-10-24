#pragma once

#include <vcclr.h>

#include "D3D12_COMMAND_QUEUE_DESC.h"
#include "D3D12_COMMAND_LIST_TYPE.h"
#include "D3D12_GRAPHICS_PIPELINE_STATE_DESC.h"
#include "D3D12_COMPUTE_PIPELINE_STATE_DESC.h"
#include "D3D12_FEATURE.h"
#include "D3D12_DESCRIPTOR_HEAP_DESC.h"
#include "D3D12_DESCRIPTOR_HEAP_TYPE.h"
#include "D3D12_HEAP_PROPERTIES.h"
#include "D3D12_HEAP_TYPE.h"
#include "D3D12_CONSTANT_BUFFER_VIEW_DESC.h"
#include "D3D12_CPU_DESCRIPTOR_HANDLE.h"
#include "D3D12_SHADER_RESOURCE_VIEW_DESC.h"
#include "D3D12_UNORDERED_ACCESS_VIEW_DESC.h"
#include "D3D12_RENDER_TARGET_VIEW_DESC.h"
#include "D3D12_DEPTH_STENCIL_VIEW_DESC.h"
#include "D3D12_SAMPLER_DESC.h"
#include "D3D12_RESOURCE_ALLOCATION_INFO.h"
#include "D3D12_RESOURCE_DESC.h"
#include "D3D12_RESOURCE_STATES.h"
#include "D3D12_CLEAR_VALUE.h"
#include "D3D12_FENCE_FLAGS.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS.h"
#include "D3D12_FEATURE_DATA_ARCHITECTURE.h"
#include "D3D12_FEATURE_DATA_FEATURE_LEVELS.h"
#include "D3D12_FEATURE_DATA_FORMAT_SUPPORT.h"
#include "D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS.h"
#include "D3D12_FEATURE_DATA_FORMAT_INFO.h"
#include "D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT.h"
#include "D3D12_FEATURE_DATA_SHADER_MODEL.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS1.h"
#include "D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT.h"
#include "D3D12_FEATURE_DATA_ROOT_SIGNATURE.h"
#include "D3D12_FEATURE_DATA_ARCHITECTURE1.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS2.h"
#include "D3D12_FEATURE_DATA_SHADER_CACHE.h"
#include "D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS3.h"
#include "D3D12_FEATURE_DATA_EXISTING_HEAPS.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS4.h"
#include "D3D12_FEATURE_DATA_SERIALIZATION.h"
#include "D3D12_FEATURE_DATA_CROSS_NODE.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS5.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS6.h"
#include "D3D12_FEATURE_DATA_QUERY_META_COMMAND.h"
#include "D3D12_FEATURE_DATA_D3D12_OPTIONS7.h"
#include "D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPE_COUNT.h"
#include "D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPES.h"
#include "ID3D12Heap.h"
#include "ID3D12Resource.h"
#include "ID3D12CommandAllocator.h"
#include "ID3D12Object.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {

        void ID3D12Device_CreateConstantBufferView(::ID3D12Device* _ref, const ::D3D12_CONSTANT_BUFFER_VIEW_DESC* pDesc, ::D3D12_CPU_DESCRIPTOR_HANDLE* DestDescriptor) { _ref->CreateConstantBufferView(pDesc, *DestDescriptor); }
        void ID3D12Device_CreateShaderResourceView(::ID3D12Device* _ref, ::ID3D12Resource* pResource, const ::D3D12_SHADER_RESOURCE_VIEW_DESC* pDesc, ::D3D12_CPU_DESCRIPTOR_HANDLE* DestDescriptor) { _ref->CreateShaderResourceView(pResource, pDesc, *DestDescriptor); }
        void ID3D12Device_CreateUnorderedAccessView(::ID3D12Device* _ref, ::ID3D12Resource* pResource, ::ID3D12Resource* pCounterResource, const ::D3D12_UNORDERED_ACCESS_VIEW_DESC* pDesc, ::D3D12_CPU_DESCRIPTOR_HANDLE* DestDescriptor) { _ref->CreateUnorderedAccessView(pResource, pCounterResource, pDesc, *DestDescriptor); }
        void ID3D12Device_CreateRenderTargetView(::ID3D12Device* _ref, ::ID3D12Resource* pResource, _In_opt_  const ::D3D12_RENDER_TARGET_VIEW_DESC* pDesc, ::D3D12_CPU_DESCRIPTOR_HANDLE* DestDescriptor) { _ref->CreateRenderTargetView(pResource, pDesc, *DestDescriptor); }
        void ID3D12Device_CreateDepthStencilView(::ID3D12Device* _ref, ::ID3D12Resource* pResource, _In_opt_  const ::D3D12_DEPTH_STENCIL_VIEW_DESC* pDesc, ::D3D12_CPU_DESCRIPTOR_HANDLE* DestDescriptor) { _ref->CreateDepthStencilView(pResource, pDesc, *DestDescriptor); }
        void ID3D12Device_CreateSampler(::ID3D12Device* _ref, const ::D3D12_SAMPLER_DESC* pDesc, ::D3D12_CPU_DESCRIPTOR_HANDLE* DestDescriptor) { _ref->CreateSampler(pDesc, *DestDescriptor); }
        void ID3D12Device_CopyDescriptorsSimple(::ID3D12Device* _ref, unsigned int NumDescriptors, ::D3D12_CPU_DESCRIPTOR_HANDLE* DestDescriptorRangeStart, ::D3D12_CPU_DESCRIPTOR_HANDLE* SrcDescriptorRangeStart, ::D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType) { _ref->CopyDescriptorsSimple(NumDescriptors, *DestDescriptorRangeStart, *SrcDescriptorRangeStart, DescriptorHeapsType); }
        ::D3D12_RESOURCE_ALLOCATION_INFO* ID3D12Device_GetResourceAllocationInfo(::ID3D12Device* _ref, unsigned int visibleMask, unsigned int numResourceDescs, ::D3D12_RESOURCE_DESC* pResourceDescs) { return &_ref->GetResourceAllocationInfo(visibleMask, numResourceDescs, pResourceDescs); }
        ::D3D12_HEAP_PROPERTIES* ID3D12Device_GetCustomHeapProperties(::ID3D12Device* _ref, unsigned int nodeMask, ::D3D12_HEAP_TYPE heapType) { return &_ref->GetCustomHeapProperties(nodeMask, heapType); }
        ::LUID* ID3D12Device_GetAdapterLuid(::ID3D12Device* _ref) { return &_ref->GetAdapterLuid(); }

        public ref class ID3D12Device : public ID3D12Object
        {
            ::ID3D12Device* _ref;
        public:
            ID3D12Device(IntPtr pointer) : ID3D12Object(pointer) { _ref = (::ID3D12Device*)pointer.ToPointer(); }
            ID3D12Device(void* pointer) : ID3D12Object(pointer) { _ref = (::ID3D12Device*)pointer; }

            unsigned int GetNodeCount()
            {
                return _ref->GetNodeCount();
            }

            long CreateCommandQueue(D3D12_COMMAND_QUEUE_DESC% pDesc, Guid riid, [Out] IntPtr% ppCommandQueue)
            {
                void** ppOut;
                pin_ptr<D3D12_COMMAND_QUEUE_DESC> desc = &pDesc;

                long ret = _ref->CreateCommandQueue((::D3D12_COMMAND_QUEUE_DESC*)desc, ToGUID(riid), ppOut);

                ppCommandQueue = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE type, Guid riid, [Out]  IntPtr% ppCommandAllocator)
            {
                void** ppOut;

                long ret = _ref->CreateCommandAllocator((::D3D12_COMMAND_LIST_TYPE)type, ToGUID(riid), ppOut);

                ppCommandAllocator = IntPtr(*ppOut);
                return ret;
            }

            long CreateGraphicsPipelineState(D3D12_GRAPHICS_PIPELINE_STATE_DESC% pDesc, Guid riid, [Out] IntPtr% ppPipelineState)
            {
                pin_ptr<D3D12_GRAPHICS_PIPELINE_STATE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateGraphicsPipelineState((::D3D12_GRAPHICS_PIPELINE_STATE_DESC*)desc, ToGUID(riid), ppOut);

                ppPipelineState = IntPtr(*ppOut);
                return ret;
            }

            long CreateComputePipelineState(D3D12_COMPUTE_PIPELINE_STATE_DESC% pDesc, Guid riid, [Out] IntPtr% ppPipelineState)
            {
                pin_ptr<D3D12_COMPUTE_PIPELINE_STATE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateComputePipelineState((::D3D12_COMPUTE_PIPELINE_STATE_DESC*)desc, ToGUID(riid), ppOut);

                ppPipelineState = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommandList(unsigned int nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator^ pCommandAllocator, ID3D12PipelineState^ pInitialState,
                Guid riid, [Out] IntPtr% ppCommandList)
            {
                void** ppOut;

                long ret = _ref->CreateCommandList(nodeMask, (::D3D12_COMMAND_LIST_TYPE)type, (::ID3D12CommandAllocator*)pCommandAllocator->Pointer.ToPointer(),
                    (::ID3D12PipelineState*)pInitialState->Pointer.ToPointer(), ToGUID(riid), ppOut);

                ppCommandList = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommandList(unsigned int nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator^ pCommandAllocator, Guid riid, [Out] IntPtr% ppCommandList)
            {
                void** ppOut;

                long ret = _ref->CreateCommandList(nodeMask, (::D3D12_COMMAND_LIST_TYPE)type, (::ID3D12CommandAllocator*)pCommandAllocator->Pointer.ToPointer(), nullptr,
                    ToGUID(riid), ppOut);

                ppCommandList = IntPtr(*ppOut);
                return ret;
            }

            long CheckFeatureSupport(D3D12_FEATURE Feature, IntPtr pFeatureSupportData, unsigned int FeatureSupportDataSize)
            {
                return _ref->CheckFeatureSupport((::D3D12_FEATURE)Feature, pFeatureSupportData.ToPointer(), FeatureSupportDataSize);
            }
            
            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_ARCHITECTURE% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_ARCHITECTURE> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_ARCHITECTURE, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_FEATURE_LEVELS% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_FEATURE_LEVELS> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_FEATURE_LEVELS, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_FORMAT_SUPPORT% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_FORMAT_SUPPORT> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_FORMAT_SUPPORT, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_MULTISAMPLE_QUALITY_LEVELS, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_FORMAT_INFO% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_FORMAT_INFO> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_FORMAT_INFO, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_GPU_VIRTUAL_ADDRESS_SUPPORT, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_SHADER_MODEL% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_SHADER_MODEL> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_SHADER_MODEL, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS1% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS1> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS1, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_PROTECTED_RESOURCE_SESSION_SUPPORT, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_ROOT_SIGNATURE% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_ROOT_SIGNATURE> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_ROOT_SIGNATURE, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_ARCHITECTURE1% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_ARCHITECTURE1> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_ARCHITECTURE1, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS2% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS2> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS2, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_SHADER_CACHE% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_SHADER_CACHE> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_SHADER_CACHE, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_COMMAND_QUEUE_PRIORITY, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS3% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS3> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS3, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_EXISTING_HEAPS% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_EXISTING_HEAPS> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_EXISTING_HEAPS, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS4% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS4> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS4, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_SERIALIZATION% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_SERIALIZATION> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_SERIALIZATION, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_CROSS_NODE% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_CROSS_NODE> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_CROSS_NODE, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS5% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS5> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS5, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS6% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS6> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS6, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_QUERY_META_COMMAND% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_QUERY_META_COMMAND> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_QUERY_META_COMMAND, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_D3D12_OPTIONS7% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_D3D12_OPTIONS7> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_D3D12_OPTIONS7, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPE_COUNT% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPE_COUNT> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_PROTECTED_RESOURCE_SESSION_TYPE_COUNT, out, sizeof(feature));
            }

            long CheckFeatureSupport(D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPES% feature)
            {
                pin_ptr<D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPES> out = &feature;
                return _ref->CheckFeatureSupport(::D3D12_FEATURE::D3D12_FEATURE_PROTECTED_RESOURCE_SESSION_TYPES, out, sizeof(feature));
            }

            long CreateDescriptorHeap(D3D12_DESCRIPTOR_HEAP_DESC% pDescriptorHeapDesc, Guid riid, [Out] IntPtr% ppvHeap)
            {
                pin_ptr<D3D12_DESCRIPTOR_HEAP_DESC> heapDesc = &pDescriptorHeapDesc;
                void** ppOut;

                long ret = _ref->CreateDescriptorHeap((::D3D12_DESCRIPTOR_HEAP_DESC*)heapDesc, ToGUID(riid), ppOut);

                ppvHeap = IntPtr(*ppOut);
                return ret;
            }

            unsigned int GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType)
            {
                return _ref->GetDescriptorHandleIncrementSize((::D3D12_DESCRIPTOR_HEAP_TYPE)DescriptorHeapType);
            }

            long CreateRootSignature(unsigned int nodeMask, IntPtr pBlobWithRootSignature, size_t blobLengthInBytes, Guid riid, [Out] IntPtr% ppvRootSignature)
            {
                void** ppOut;

                long ret = _ref->CreateRootSignature(nodeMask, pBlobWithRootSignature.ToPointer(), blobLengthInBytes, ToGUID(riid), ppOut);

                ppvRootSignature = IntPtr(*ppOut);
                return ret;
            }

            void CreateConstantBufferView(D3D12_CONSTANT_BUFFER_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_CONSTANT_BUFFER_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateConstantBufferView(_ref, (::D3D12_CONSTANT_BUFFER_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateConstantBufferView(D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateConstantBufferView(_ref, nullptr, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateShaderResourceView(ID3D12Resource^ pResource, D3D12_SHADER_RESOURCE_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_SHADER_RESOURCE_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateShaderResourceView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), (::D3D12_SHADER_RESOURCE_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateShaderResourceView(D3D12_SHADER_RESOURCE_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_SHADER_RESOURCE_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateShaderResourceView(_ref, nullptr, (::D3D12_SHADER_RESOURCE_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateShaderResourceView(ID3D12Resource^ pResource, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateShaderResourceView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), nullptr, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateUnorderedAccessView(ID3D12Resource^ pResource, ID3D12Resource^ pCounterResource, D3D12_UNORDERED_ACCESS_VIEW_DESC% pDesc,
                D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_UNORDERED_ACCESS_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateUnorderedAccessView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), (::ID3D12Resource*)pCounterResource->Pointer.ToPointer(),
                    (::D3D12_UNORDERED_ACCESS_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateUnorderedAccessView(ID3D12Resource^ pCounterResource, D3D12_UNORDERED_ACCESS_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_UNORDERED_ACCESS_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateUnorderedAccessView(_ref, nullptr, (::ID3D12Resource*)pCounterResource->Pointer.ToPointer(),
                    (::D3D12_UNORDERED_ACCESS_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateUnorderedAccessView(ID3D12Resource^ pResource, ID3D12Resource^ pCounterResource, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateUnorderedAccessView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), (::ID3D12Resource*)pCounterResource->Pointer.ToPointer(),
                    nullptr, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateUnorderedAccessView(D3D12_UNORDERED_ACCESS_VIEW_DESC% pDesc, ID3D12Resource^ pResource,  D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_UNORDERED_ACCESS_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateUnorderedAccessView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), nullptr, (::D3D12_UNORDERED_ACCESS_VIEW_DESC*)desc, 
                    (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateUnorderedAccessView(D3D12_UNORDERED_ACCESS_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_UNORDERED_ACCESS_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateUnorderedAccessView(_ref, nullptr, nullptr, (::D3D12_UNORDERED_ACCESS_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateUnorderedAccessView(ID3D12Resource^ pResource, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateUnorderedAccessView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), nullptr, nullptr, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateRenderTargetView(ID3D12Resource^ pResource, D3D12_RENDER_TARGET_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_RENDER_TARGET_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateRenderTargetView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), (::D3D12_RENDER_TARGET_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateRenderTargetView(D3D12_RENDER_TARGET_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_RENDER_TARGET_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateRenderTargetView(_ref, nullptr, (::D3D12_RENDER_TARGET_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateRenderTargetView(ID3D12Resource^ pResource, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateRenderTargetView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), nullptr, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateDepthStencilView(ID3D12Resource^ pResource, D3D12_DEPTH_STENCIL_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_DEPTH_STENCIL_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateDepthStencilView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), (::D3D12_DEPTH_STENCIL_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateDepthStencilView(D3D12_DEPTH_STENCIL_VIEW_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_DEPTH_STENCIL_VIEW_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateDepthStencilView(_ref, nullptr, (::D3D12_DEPTH_STENCIL_VIEW_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateDepthStencilView(ID3D12Resource^ pResource, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateDepthStencilView(_ref, (::ID3D12Resource*)pResource->Pointer.ToPointer(), nullptr, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CreateSampler(D3D12_SAMPLER_DESC% pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
            {
                pin_ptr<D3D12_SAMPLER_DESC> desc = &pDesc;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> handle = &DestDescriptor;

                ID3D12Device_CreateSampler(_ref, (::D3D12_SAMPLER_DESC*)desc, (::D3D12_CPU_DESCRIPTOR_HANDLE*)handle);
            }

            void CopyDescriptors(unsigned int NumDestDescriptorRanges, array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pDestDescriptorRangeStarts, array<unsigned int>^ pDestDescriptorRangeSizes, 
                unsigned int NumSrcDescriptorRanges, array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pSrcDescriptorRangeStarts, array<unsigned int>^ pSrcDescriptorRangeSizes,
                D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> destRangeStarts = &pDestDescriptorRangeStarts[0];
                pin_ptr<unsigned int> destRangeSizes = &pDestDescriptorRangeSizes[0];

                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> srcRangeStarts = &pSrcDescriptorRangeStarts[0];
                pin_ptr<unsigned int> srcRangeSizes = &pSrcDescriptorRangeSizes[0];

                _ref->CopyDescriptors(NumDestDescriptorRanges, (::D3D12_CPU_DESCRIPTOR_HANDLE*)destRangeStarts, destRangeSizes,
                    NumSrcDescriptorRanges, (::D3D12_CPU_DESCRIPTOR_HANDLE*)srcRangeStarts, srcRangeSizes, (::D3D12_DESCRIPTOR_HEAP_TYPE)DescriptorHeapsType);
            }

            void CopyDescriptors(array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pDestDescriptorRangeStarts, array<unsigned int>^ pDestDescriptorRangeSizes, 
                array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pSrcDescriptorRangeStarts, array<unsigned int>^ pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> destRangeStarts = &pDestDescriptorRangeStarts[0];
                pin_ptr<unsigned int> destRangeSizes = &pDestDescriptorRangeSizes[0];

                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> srcRangeStarts = &pSrcDescriptorRangeStarts[0];
                pin_ptr<unsigned int> srcRangeSizes = &pSrcDescriptorRangeSizes[0];

                _ref->CopyDescriptors(pDestDescriptorRangeStarts->Length, (::D3D12_CPU_DESCRIPTOR_HANDLE*)destRangeStarts, destRangeSizes,
                    pSrcDescriptorRangeStarts->Length, (::D3D12_CPU_DESCRIPTOR_HANDLE*)srcRangeStarts, srcRangeSizes, (::D3D12_DESCRIPTOR_HEAP_TYPE)DescriptorHeapsType);
            }

            void CopyDescriptorsSimple(unsigned int NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
                D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> dest = &DestDescriptorRangeStart;
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> src = &SrcDescriptorRangeStart;

                ID3D12Device_CopyDescriptorsSimple(_ref, NumDescriptors, (::D3D12_CPU_DESCRIPTOR_HANDLE*)dest, (::D3D12_CPU_DESCRIPTOR_HANDLE*)src, (::D3D12_DESCRIPTOR_HEAP_TYPE)DescriptorHeapsType);
            }

            D3D12_RESOURCE_ALLOCATION_INFO GetResourceAllocationInfo(unsigned int visibleMask, unsigned int numResourceDescs, array<D3D12_RESOURCE_DESC>^ pResourceDescs)
            {
                pin_ptr<D3D12_RESOURCE_DESC> descs = &pResourceDescs[0];

                return *(D3D12_RESOURCE_ALLOCATION_INFO*)ID3D12Device_GetResourceAllocationInfo(_ref, visibleMask, numResourceDescs, (::D3D12_RESOURCE_DESC*)descs);
            }

            D3D12_RESOURCE_ALLOCATION_INFO GetResourceAllocationInfo(unsigned int visibleMask, array<D3D12_RESOURCE_DESC>^ pResourceDescs)
            {
                pin_ptr<D3D12_RESOURCE_DESC> descs = &pResourceDescs[0];

                return *(D3D12_RESOURCE_ALLOCATION_INFO*)ID3D12Device_GetResourceAllocationInfo(_ref, visibleMask, pResourceDescs->Length, (::D3D12_RESOURCE_DESC*)descs);
            }

            D3D12_HEAP_PROPERTIES GetCustomHeapProperties(unsigned int nodeMask, D3D12_HEAP_TYPE heapType)
            {
                return *(D3D12_HEAP_PROPERTIES*)ID3D12Device_GetCustomHeapProperties(_ref, nodeMask, (::D3D12_HEAP_TYPE)heapType);
            }

            long CreateCommittedResource(D3D12_HEAP_PROPERTIES% pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialResourceState,
                D3D12_CLEAR_VALUE% pOptimizedClearValue, Guid riidResource, [Out] IntPtr% ppvResource)
            {
                pin_ptr<D3D12_HEAP_PROPERTIES> props = &pHeapProperties;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                pin_ptr<D3D12_CLEAR_VALUE> clear = &pOptimizedClearValue;
                void** ppOut;

                long ret = _ref->CreateCommittedResource((::D3D12_HEAP_PROPERTIES*)props, (::D3D12_HEAP_FLAGS)HeapFlags, (::D3D12_RESOURCE_DESC*)desc,
                    (::D3D12_RESOURCE_STATES)InitialResourceState, (::D3D12_CLEAR_VALUE*)clear, ToGUID(riidResource), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommittedResource(D3D12_HEAP_PROPERTIES% pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, D3D12_RESOURCE_DESC% pDesc, 
                D3D12_RESOURCE_STATES InitialResourceState, Guid riidResource, [Out] IntPtr% ppvResource)
            {
                pin_ptr<D3D12_HEAP_PROPERTIES> props = &pHeapProperties;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateCommittedResource((::D3D12_HEAP_PROPERTIES*)props, (::D3D12_HEAP_FLAGS)HeapFlags, (::D3D12_RESOURCE_DESC*)desc,
                    (::D3D12_RESOURCE_STATES)InitialResourceState, nullptr, ToGUID(riidResource), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateHeap(D3D12_HEAP_DESC% pDesc, Guid riid, [Out] IntPtr% ppvHeap)
            {
                pin_ptr<D3D12_HEAP_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateHeap((::D3D12_HEAP_DESC*)desc, ToGUID(riid), ppOut);

                ppvHeap = IntPtr(*ppOut);
                return ret;
            }

            long CreatePlacedResource(ID3D12Heap^ pHeap, unsigned long long HeapOffset, D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState,
                D3D12_CLEAR_VALUE% pOptimizedClearValue, Guid riid, [Out] IntPtr% ppvResource)
            {
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                pin_ptr<D3D12_CLEAR_VALUE> clear = &pOptimizedClearValue;
                void** ppOut;

                long ret = _ref->CreatePlacedResource((::ID3D12Heap*)pHeap->Pointer.ToPointer(), HeapOffset, (::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState,
                    (::D3D12_CLEAR_VALUE*)clear, ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreatePlacedResource(ID3D12Heap^ pHeap, unsigned long long HeapOffset, D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState,
                Guid riid, [Out] IntPtr% ppvResource)
            {
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreatePlacedResource((::ID3D12Heap*)pHeap->Pointer.ToPointer(), HeapOffset, (::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState,
                    nullptr, ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateReservedResource(D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState, D3D12_CLEAR_VALUE% pOptimizedClearValue, Guid riid, [Out] IntPtr% ppvResource)
            {
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                pin_ptr<D3D12_CLEAR_VALUE> clear = &pOptimizedClearValue;
                void** ppOut;

                long ret = _ref->CreateReservedResource((::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState, (::D3D12_CLEAR_VALUE*)clear, ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateReservedResource(D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState, Guid riid, [Out] IntPtr% ppvResource)
            {
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateReservedResource((::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState, nullptr, ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateSharedHandle(ID3D12DeviceChild^ pObject, SECURITY_ATTRIBUTES% pAttributes, unsigned long Access, String^ Name, [Out] IntPtr% pHandle)
            {
                pin_ptr<SECURITY_ATTRIBUTES> attr = &pAttributes;
                pin_ptr<const wchar_t> wch = PtrToStringChars(Name);
                void** ppOut;

                long ret = _ref->CreateSharedHandle((::ID3D12DeviceChild*)pObject->Pointer.ToPointer(), (::SECURITY_ATTRIBUTES*)attr, Access, wch, ppOut);
                
                pHandle = IntPtr(*ppOut);
                return ret;
            }

            long CreateSharedHandle(ID3D12DeviceChild^ pObject, unsigned long Access, String^ Name, [Out]  IntPtr% pHandle)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(Name);
                void** ppOut;

                long ret = _ref->CreateSharedHandle((::ID3D12DeviceChild*)pObject->Pointer.ToPointer(), nullptr, Access, wch, ppOut);

                pHandle = IntPtr(*ppOut);
                return ret;
            }

            long OpenSharedHandle(IntPtr NTHandle, Guid riid, [Out] IntPtr% ppvObj)
            {
                void** ppOut;

                long ret = _ref->OpenSharedHandle(NTHandle.ToPointer(), ToGUID(riid), ppOut);

                ppvObj = IntPtr(*ppOut);
                return ret;
            }

            long OpenSharedHandleByName(String^ Name, unsigned long Access, [Out] IntPtr% pNTHandle)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(Name);
                void** ppOut;

                long ret = _ref->OpenSharedHandleByName(wch, Access, ppOut);

                pNTHandle = IntPtr(*ppOut);
                return ret;
            }

            long MakeResident(unsigned int NumObjects, array<ID3D12Pageable^>^ ppObjects)
            {
                ::ID3D12Pageable** objects = new ::ID3D12Pageable*[NumObjects];

                for (int i = 0; i < NumObjects; i++)
                    objects[i] = (::ID3D12Pageable*)ppObjects[i]->Pointer.ToPointer();

                long ret = _ref->MakeResident(NumObjects, objects);

                delete objects;
                return ret;
            }

            long Evict(unsigned int NumObjects, array<ID3D12Pageable^>^ ppObjects)
            {
                ::ID3D12Pageable** objects = new ::ID3D12Pageable*[NumObjects];

                for (int i = 0; i < NumObjects; i++)
                    objects[i] = (::ID3D12Pageable*)ppObjects[i]->Pointer.ToPointer();

                long ret = _ref->Evict(NumObjects, objects);

                delete objects;
                return ret;
            }

            long CreateFence(unsigned long long InitialValue, D3D12_FENCE_FLAGS Flags, Guid riid, [Out] IntPtr% ppFence)
            {
                void** ppOut;

                long ret = _ref->CreateFence(InitialValue, (::D3D12_FENCE_FLAGS)Flags, ToGUID(riid), ppOut);

                ppFence = IntPtr(*ppOut);
                return ret;
            }

            long GetDeviceRemovedReason()
            {
                return _ref->GetDeviceRemovedReason();
            }

            void GetCopyableFootprints(D3D12_RESOURCE_DESC% pResourceDesc, unsigned int FirstSubresource, unsigned int NumSubresources, unsigned long long BaseOffset,
                array<D3D12_PLACED_SUBRESOURCE_FOOTPRINT>^ pLayouts, array<unsigned int>^ pNumRows, array<unsigned long long>^ pRowSizeInBytes,
                [Out]  unsigned long long% pTotalBytes)
            {
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pResourceDesc;
                pin_ptr<D3D12_PLACED_SUBRESOURCE_FOOTPRINT> footprints = &pLayouts[0];
                pin_ptr<unsigned int> rows = &pNumRows[0];
                pin_ptr<unsigned long long> rowSize = &pRowSizeInBytes[0];
                pin_ptr<unsigned long long> total = &pTotalBytes;

                return _ref->GetCopyableFootprints((::D3D12_RESOURCE_DESC*)desc, FirstSubresource, NumSubresources, BaseOffset, (::D3D12_PLACED_SUBRESOURCE_FOOTPRINT*)footprints,
                    rows, rowSize, total);
            }

            void GetCopyableFootprints(D3D12_RESOURCE_DESC% pResourceDesc, unsigned int FirstSubresource, unsigned long long BaseOffset,
                array<D3D12_PLACED_SUBRESOURCE_FOOTPRINT>^ pLayouts, array<unsigned int>^ pNumRows, array<unsigned long long>^ pRowSizeInBytes,
                [Out]  unsigned long long% pTotalBytes)
            {
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pResourceDesc;
                pin_ptr<D3D12_PLACED_SUBRESOURCE_FOOTPRINT> footprints = &pLayouts[0];
                pin_ptr<unsigned int> rows = &pNumRows[0];
                pin_ptr<unsigned long long> rowSize = &pRowSizeInBytes[0];
                pin_ptr<unsigned long long> total = &pTotalBytes;

                return _ref->GetCopyableFootprints((::D3D12_RESOURCE_DESC*)desc, FirstSubresource, pLayouts->Length, BaseOffset, (::D3D12_PLACED_SUBRESOURCE_FOOTPRINT*)footprints,
                    rows, rowSize, total);
            }

            long CreateQueryHeap(D3D12_QUERY_HEAP_DESC% pDesc, Guid riid, [Out] IntPtr% ppvHeap)
            {
                pin_ptr<D3D12_QUERY_HEAP_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateQueryHeap((::D3D12_QUERY_HEAP_DESC*)desc, ToGUID(riid), ppOut);

                ppvHeap = IntPtr(*ppOut);
                return ret;
            }

            long SetStablePowerState(bool Enable)
            {
                return _ref->SetStablePowerState(Enable);
            }

            long CreateCommandSignature(D3D12_COMMAND_SIGNATURE_DESC% pDesc, ID3D12RootSignature^ pRootSignature, Guid riid, [Out] IntPtr% ppvCommandSignature)
            {
                pin_ptr<D3D12_COMMAND_SIGNATURE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateCommandSignature((::D3D12_COMMAND_SIGNATURE_DESC*)desc, (::ID3D12RootSignature*)pRootSignature->Pointer.ToPointer(), ToGUID(riid), ppOut);

                ppvCommandSignature = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommandSignature(D3D12_COMMAND_SIGNATURE_DESC% pDesc, Guid riid, [Out] IntPtr% ppvCommandSignature)
            {
                pin_ptr<D3D12_COMMAND_SIGNATURE_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateCommandSignature((::D3D12_COMMAND_SIGNATURE_DESC*)desc, nullptr, ToGUID(riid), ppOut);

                ppvCommandSignature = IntPtr(*ppOut);
                return ret;
            }

            void GetResourceTiling(ID3D12Resource^ pTiledResource, [Out] unsigned int% pNumTilesForEntireResource, [Out] D3D12_PACKED_MIP_INFO% pPackedMipDesc,
                [Out] D3D12_TILE_SHAPE% pStandardTileShapeForNonPackedMips, unsigned int% pNumSubresourceTilings, unsigned int FirstSubresourceTilingToGet,
                [Out]  D3D12_SUBRESOURCE_TILING% pSubresourceTilingsForNonPackedMips)
            {
                pin_ptr<unsigned int> numTiles = &pNumTilesForEntireResource;
                pin_ptr<D3D12_PACKED_MIP_INFO> mipDesc = &pPackedMipDesc;
                pin_ptr<D3D12_TILE_SHAPE> tileShape = &pStandardTileShapeForNonPackedMips;
                pin_ptr<unsigned int> numSubResource = &pNumSubresourceTilings;
                pin_ptr<D3D12_SUBRESOURCE_TILING> tiling = &pSubresourceTilingsForNonPackedMips;

                return _ref->GetResourceTiling((::ID3D12Resource*)pTiledResource->Pointer.ToPointer(), numTiles, (::D3D12_PACKED_MIP_INFO*)mipDesc, (::D3D12_TILE_SHAPE*)tileShape, 
                    numSubResource, FirstSubresourceTilingToGet, (::D3D12_SUBRESOURCE_TILING*)tiling);
            }

            LUID GetAdapterLuid()
            {
                return *(LUID*)ID3D12Device_GetAdapterLuid(_ref);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Device>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Device);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Device* () { return (_ref); }
        };
    }
}