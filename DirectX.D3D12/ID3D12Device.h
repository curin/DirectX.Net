#pragma once

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

            long CreateCommandQueue(const D3D12_COMMAND_QUEUE_DESC* pDesc, Guid riid, [Out] IntPtr* ppCommandQueue) = 0;

            long CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE type, Guid riid, [Out]  IntPtr* ppCommandAllocator) = 0;

            long CreateGraphicsPipelineState(const D3D12_GRAPHICS_PIPELINE_STATE_DESC* pDesc, Guid riid, [Out] IntPtr* ppPipelineState) = 0;

            long CreateComputePipelineState(const D3D12_COMPUTE_PIPELINE_STATE_DESC* pDesc, Guid riid, [Out] IntPtr* ppPipelineState) = 0;

            long CreateCommandList(unsigned int nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator* pCommandAllocator, _In_opt_  ID3D12PipelineState* pInitialState,
                Guid riid, [Out] IntPtr* ppCommandList) = 0;

            long CheckFeatureSupport(D3D12_FEATURE Feature, _Inout_updates_bytes_(FeatureSupportDataSize)  IntPtr pFeatureSupportData, unsigned int FeatureSupportDataSize) = 0;

            long CreateDescriptorHeap(const D3D12_DESCRIPTOR_HEAP_DESC* pDescriptorHeapDesc, Guid riid, [Out] IntPtr* ppvHeap) = 0;

            unsigned int GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType) = 0;

            long CreateRootSignature(unsigned int nodeMask, _In_reads_(blobLengthInBytes)  const IntPtr pBlobWithRootSignature, size_t blobLengthInBytes, Guid riid, [Out] IntPtr* ppvRootSignature) = 0;

            void CreateConstantBufferView(_In_opt_  const D3D12_CONSTANT_BUFFER_VIEW_DESC* pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor) = 0;

            void CreateShaderResourceView(_In_opt_  ID3D12Resource* pResource, _In_opt_  const D3D12_SHADER_RESOURCE_VIEW_DESC* pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor) = 0;

            void CreateUnorderedAccessView(_In_opt_  ID3D12Resource* pResource, _In_opt_  ID3D12Resource* pCounterResource, _In_opt_  const D3D12_UNORDERED_ACCESS_VIEW_DESC* pDesc,
                D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor) = 0;

            void CreateRenderTargetView(_In_opt_  ID3D12Resource* pResource, _In_opt_  const D3D12_RENDER_TARGET_VIEW_DESC* pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor) = 0;

            void CreateDepthStencilView(_In_opt_  ID3D12Resource* pResource, _In_opt_  const D3D12_DEPTH_STENCIL_VIEW_DESC* pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor) = 0;

            void CreateSampler(const D3D12_SAMPLER_DESC* pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor) = 0;

            void CopyDescriptors(unsigned int NumDestDescriptorRanges, _In_reads_(NumDestDescriptorRanges)  const D3D12_CPU_DESCRIPTOR_HANDLE* pDestDescriptorRangeStarts,
                _In_reads_opt_(NumDestDescriptorRanges)  const unsigned int* pDestDescriptorRangeSizes, unsigned int NumSrcDescriptorRanges,
                _In_reads_(NumSrcDescriptorRanges)  const D3D12_CPU_DESCRIPTOR_HANDLE* pSrcDescriptorRangeStarts, _In_reads_opt_(NumSrcDescriptorRanges)  const unsigned int* pSrcDescriptorRangeSizes,
                D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType) = 0;

            void CopyDescriptorsSimple(unsigned int NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
                D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType) = 0;

            D3D12_RESOURCE_ALLOCATION_INFO GetResourceAllocationInfo(unsigned int visibleMask, unsigned int numResourceDescs, 
                _In_reads_(numResourceDescs)  const D3D12_RESOURCE_DESC* pResourceDescs) = 0;

            D3D12_HEAP_PROPERTIES GetCustomHeapProperties(unsigned int nodeMask, D3D12_HEAP_TYPE heapType) = 0;

            long CreateCommittedResource(const D3D12_HEAP_PROPERTIES* pHeapProperties,
                D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC* pDesc, D3D12_RESOURCE_STATES InitialResourceState,
                _In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue, Guid riidResource,
                [Out] IntPtr* ppvResource) = 0;

            long CreateHeap(const D3D12_HEAP_DESC* pDesc, Guid riid, [Out] IntPtr* ppvHeap) = 0;

            long CreatePlacedResource(ID3D12Heap* pHeap, unsigned long long HeapOffset, const D3D12_RESOURCE_DESC* pDesc, D3D12_RESOURCE_STATES InitialState,
                _In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue, Guid riid, [Out] IntPtr* ppvResource) = 0;

            long CreateReservedResource(const D3D12_RESOURCE_DESC* pDesc, D3D12_RESOURCE_STATES InitialState,
                _In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue, Guid riid, [Out] IntPtr* ppvResource) = 0;

            long CreateSharedHandle(ID3D12DeviceChild* pObject,
                _In_opt_  const SECURITY_ATTRIBUTES* pAttributes, unsigned long Access,
                _In_opt_  String Name,
                [Out]  IntPtr* pHandle) = 0;

            long OpenSharedHandle(IntPtr NTHandle, Guid riid, [Out] IntPtr* ppvObj) = 0;

            long OpenSharedHandleByName(String Name, unsigned long Access, [Out] IntPtr* pNTHandle) = 0;

            long MakeResident(unsigned int NumObjects, _In_reads_(NumObjects)  ID3D12Pageable* const* ppObjects) = 0;

            long Evict(unsigned int NumObjects, _In_reads_(NumObjects)  ID3D12Pageable* const* ppObjects) = 0;

            long CreateFence(unsigned long long InitialValue, D3D12_FENCE_FLAGS Flags, Guid riid, [Out] IntPtr* ppFence) = 0;

            long GetDeviceRemovedReason() = 0;

            void GetCopyableFootprints(const D3D12_RESOURCE_DESC* pResourceDesc, unsigned int FirstSubresource, unsigned int NumSubresources, unsigned long long BaseOffset,
                _Out_writes_opt_(NumSubresources)  D3D12_PLACED_SUBRESOURCE_FOOTPRINT* pLayouts,
                _Out_writes_opt_(NumSubresources)  unsigned int* pNumRows,
                _Out_writes_opt_(NumSubresources)  unsigned long long* pRowSizeInBytes,
                [Out]  unsigned long long% pTotalBytes) = 0;

            long CreateQueryHeap(const D3D12_QUERY_HEAP_DESC* pDesc, Guid riid, [Out] IntPtr* ppvHeap) = 0;

            long SetStablePowerState(bool Enable) = 0;

            long CreateCommandSignature(const D3D12_COMMAND_SIGNATURE_DESC* pDesc, _In_opt_  ID3D12RootSignature* pRootSignature, Guid riid, [Out] IntPtr* ppvCommandSignature) = 0;

            void GetResourceTiling(ID3D12Resource* pTiledResource, [Out] unsigned int* pNumTilesForEntireResource, [Out] D3D12_PACKED_MIP_INFO* pPackedMipDesc,
                [Out] D3D12_TILE_SHAPE* pStandardTileShapeForNonPackedMips, unsigned int% pNumSubresourceTilings, unsigned int FirstSubresourceTilingToGet,
                _Out_writes_(*pNumSubresourceTilings)  D3D12_SUBRESOURCE_TILING* pSubresourceTilingsForNonPackedMips) = 0;

            LUID GetAdapterLuid() = 0;

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