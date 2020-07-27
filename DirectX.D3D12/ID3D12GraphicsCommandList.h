#pragma once

#include "ID3D12CommandList.h"
#include "ID3D12CommandAllocator.h"
#include "ID3D12PipelineState.h"
#include "ID3D12Resource.h"
#include "ID3D12RootSignature.h"
#include "D3D12_TEXTURE_COPY_LOCATION.h"
#include "D3D12_BOX.h"
#include "D3D12_TILED_RESOURCE_COORDINATE.h"
#include "D3D12_TILE_REGION_SIZE.h"
#include "D3D12_TILE_COPY_FLAGS.h"
#include "D3D12_VIEWPORT.h"
#include "D3D12_RESOURCE_BARRIER.h"
#include "D3D12_GPU_DESCRIPTOR_HANDLE.h"
#include "D3D12_INDEX_BUFFER_VIEW.h"
#include "D3D12_VERTEX_BUFFER_VIEW.h"
#include "D3D12_STREAM_OUTPUT_BUFFER_VIEW.h"
#include "D3D12_CPU_DESCRIPTOR_HANDLE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {

        void ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(::ID3D12GraphicsCommandList* _ref, unsigned int RootParameterIndex, ::D3D12_GPU_DESCRIPTOR_HANDLE* BaseDescriptor)
        {
            _ref->SetGraphicsRootDescriptorTable(RootParameterIndex, *BaseDescriptor);
        }

        void ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(::ID3D12GraphicsCommandList* _ref, unsigned int RootParameterIndex, ::D3D12_GPU_DESCRIPTOR_HANDLE* BaseDescriptor)
        {
            _ref->SetComputeRootDescriptorTable(RootParameterIndex, *BaseDescriptor);
        }

        void ID3D12GraphicsCommandList_ClearDepthStencilView(::ID3D12GraphicsCommandList* _ref, ::D3D12_CPU_DESCRIPTOR_HANDLE* DepthStencilView, ::D3D12_CLEAR_FLAGS ClearFlags, float Depth, unsigned char Stencil,
            unsigned int NumRects, ::D3D12_RECT* pRects)
        {
            _ref->ClearDepthStencilView(*DepthStencilView, ClearFlags, Depth, Stencil, NumRects, pRects);
        }

        void ID3D12GraphicsCommandList_ClearRenderTargetView(::ID3D12GraphicsCommandList* _ref, ::D3D12_CPU_DESCRIPTOR_HANDLE* RenderTargetView, float* ColorRGBA, unsigned int NumRects, ::D3D12_RECT* pRects)
        {
            _ref->ClearRenderTargetView(*RenderTargetView, ColorRGBA, NumRects, pRects);
        }

        void ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(::ID3D12GraphicsCommandList* _ref, ::D3D12_GPU_DESCRIPTOR_HANDLE* ViewGPUHandleInCurrentHeap, ::D3D12_CPU_DESCRIPTOR_HANDLE* ViewCPUHandle,
            ::ID3D12Resource* pResource, unsigned int* Values, unsigned int NumRects, ::D3D12_RECT* pRects)
        {
            _ref->ClearUnorderedAccessViewUint(*ViewGPUHandleInCurrentHeap, *ViewCPUHandle, pResource, Values, NumRects, pRects);
        }

        void ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(::ID3D12GraphicsCommandList* _ref, ::D3D12_GPU_DESCRIPTOR_HANDLE* ViewGPUHandleInCurrentHeap, ::D3D12_CPU_DESCRIPTOR_HANDLE* ViewCPUHandle,
            ::ID3D12Resource* pResource, float* Values, unsigned int NumRects, ::D3D12_RECT* pRects)
        {
            _ref->ClearUnorderedAccessViewFloat(*ViewGPUHandleInCurrentHeap, *ViewCPUHandle, pResource, Values, NumRects, pRects);
        }



        public ref class ID3D12GraphicsCommandList : public ID3D12CommandList
        {
            ::ID3D12GraphicsCommandList* _ref;
        public:
            ID3D12GraphicsCommandList(IntPtr pointer) : ID3D12CommandList(pointer) { _ref = (::ID3D12GraphicsCommandList*)pointer.ToPointer(); }
            ID3D12GraphicsCommandList(void* pointer) : ID3D12CommandList(pointer) { _ref = (::ID3D12GraphicsCommandList*)pointer; }

            long Close()
            {
                return _ref->Close();
            }

            long Reset(ID3D12CommandAllocator^ pAllocator,  ID3D12PipelineState^ pInitialState)
            {
                return _ref->Reset((::ID3D12CommandAllocator*)pAllocator->Pointer.ToPointer(), (::ID3D12PipelineState*)pInitialState->Pointer.ToPointer());
            }

            long Reset(ID3D12CommandAllocator^ pAllocator)
            {
                return _ref->Reset((::ID3D12CommandAllocator*)pAllocator->Pointer.ToPointer(), nullptr);
            }

            void ClearState(ID3D12PipelineState^ pPipelineState)
            {
                 _ref->ClearState((::ID3D12PipelineState*)pPipelineState->Pointer.ToPointer());
            }

            void ClearState()
            {
                _ref->ClearState(nullptr);
            }

            void DrawInstanced(unsigned int VertexCountPerInstance, unsigned int InstanceCount, unsigned int StartVertexLocation, unsigned int StartInstanceLocation)
            {
                _ref->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
            }

            void DrawIndexedInstanced(unsigned int IndexCountPerInstance, unsigned int InstanceCount, unsigned int StartIndexLocation, int BaseVertexLocation, 
                unsigned int StartInstanceLocation)
            {
                _ref->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
            }

            void Dispatch(unsigned int ThreadGroupCountX, unsigned int ThreadGroupCountY, unsigned int ThreadGroupCountZ)
            {
                _ref->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
            }

            void CopyBufferRegion(ID3D12Resource^ pDstBuffer, unsigned long long DstOffset, ID3D12Resource^ pSrcBuffer, unsigned long long SrcOffset, unsigned long long NumBytes)
            {
                _ref->CopyBufferRegion((::ID3D12Resource*)pDstBuffer->Pointer.ToPointer(), DstOffset, (::ID3D12Resource*)pSrcBuffer->Pointer.ToPointer(), SrcOffset, NumBytes);
            }

            void CopyTextureRegion(D3D12_TEXTURE_COPY_LOCATION% pDst, unsigned int DstX, unsigned int DstY, unsigned int DstZ, D3D12_TEXTURE_COPY_LOCATION% pSrc,
                D3D12_BOX% pSrcBox)
            {
                pin_ptr<D3D12_TEXTURE_COPY_LOCATION> dst = &pDst;
                pin_ptr<D3D12_TEXTURE_COPY_LOCATION> src = &pSrc;
                pin_ptr<D3D12_BOX> box = &pSrcBox;
                _ref->CopyTextureRegion((::D3D12_TEXTURE_COPY_LOCATION*)dst, DstX, DstY, DstZ, (::D3D12_TEXTURE_COPY_LOCATION*)src, (::D3D12_BOX*)box);
            }

            void CopyTextureRegion(D3D12_TEXTURE_COPY_LOCATION% pDst, UINT DstX, UINT DstY, UINT DstZ, D3D12_TEXTURE_COPY_LOCATION% pSrc)
            {
                pin_ptr<D3D12_TEXTURE_COPY_LOCATION> dst = &pDst;
                pin_ptr<D3D12_TEXTURE_COPY_LOCATION> src = &pSrc;
                return _ref->CopyTextureRegion((::D3D12_TEXTURE_COPY_LOCATION*)dst, DstX, DstY, DstZ, (::D3D12_TEXTURE_COPY_LOCATION*)src, nullptr);
            }

            void CopyResource(ID3D12Resource^ pDstResource, ID3D12Resource^ pSrcResource)
            {
                _ref->CopyResource((::ID3D12Resource*)pDstResource->Pointer.ToPointer(), (::ID3D12Resource*)pSrcResource->Pointer.ToPointer());
            }

            void CopyTiles(ID3D12Resource^ pTiledResource, D3D12_TILED_RESOURCE_COORDINATE% pTileRegionStartCoordinate, D3D12_TILE_REGION_SIZE% pTileRegionSize, 
                ID3D12Resource^ pBuffer, unsigned long long BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coord = &pTileRegionStartCoordinate;
                pin_ptr<D3D12_TILE_REGION_SIZE> size = &pTileRegionSize;
                _ref->CopyTiles((::ID3D12Resource*)pTiledResource->Pointer.ToPointer(), (::D3D12_TILED_RESOURCE_COORDINATE*)coord, (::D3D12_TILE_REGION_SIZE*)size,
                    (::ID3D12Resource*)pBuffer->Pointer.ToPointer(), BufferStartOffsetInBytes, (::D3D12_TILE_COPY_FLAGS)Flags);
            }

            void ResolveSubresource(ID3D12Resource^ pDstResource, unsigned int DstSubresource, ID3D12Resource^ pSrcResource,
                unsigned int SrcSubresource, DXGI::DXGI_FORMAT Format)
            {
                _ref->ResolveSubresource((::ID3D12Resource*)pDstResource->Pointer.ToPointer(), DstSubresource, (::ID3D12Resource*)pSrcResource, SrcSubresource, (::DXGI_FORMAT)Format);
            }

            void IASetPrimitiveTopology(DirectX::D3D_PRIMITIVE_TOPOLOGY PrimitiveTopology)
            {
                _ref->IASetPrimitiveTopology((::D3D12_PRIMITIVE_TOPOLOGY)PrimitiveTopology);
            }

            void RSSetViewports(unsigned int NumViewports, array<D3D12_VIEWPORT>^ pViewports)
            {
                pin_ptr<D3D12_VIEWPORT> views = &pViewports[0];
                _ref->RSSetViewports(NumViewports, (::D3D12_VIEWPORT*)views);
            }

            void RSSetViewports(array<D3D12_VIEWPORT>^ pViewports)
            {
                pin_ptr<D3D12_VIEWPORT> views = &pViewports[0];
                _ref->RSSetViewports(pViewports->Length, (::D3D12_VIEWPORT*)views);
            }

            void RSSetScissorRects(unsigned int NumRects, array<RECT>^ pRects)
            {
                pin_ptr<RECT> rects = &pRects[0];
                _ref->RSSetScissorRects(NumRects, (::D3D12_RECT*)rects);
            }

            void RSSetScissorRects(array<RECT>^ pRects)
            {
                pin_ptr<RECT> rects = &pRects[0];
                _ref->RSSetScissorRects(pRects->Length, (::D3D12_RECT*)rects);
            }

            void OMSetBlendFactor(array<float>^ BlendFactor)
            {
                pin_ptr<float> blend = &BlendFactor[0];
                _ref->OMSetBlendFactor(blend);
            }

            void OMSetBlendFactor()
            {
                _ref->OMSetBlendFactor(nullptr);
            }

            void OMSetStencilRef(unsigned int StencilRef)
            {
                _ref->OMSetStencilRef(StencilRef);
            }

            void SetPipelineState(ID3D12PipelineState^ pPipelineState)
            {
                _ref->SetPipelineState((::ID3D12PipelineState*)pPipelineState->Pointer.ToPointer());
            }

            void ResourceBarrier(unsigned int NumBarriers, array<D3D12_RESOURCE_BARRIER>^ pBarriers)
            {
                pin_ptr<D3D12_RESOURCE_BARRIER> barriers = &pBarriers[0];
                _ref->ResourceBarrier(NumBarriers, (::D3D12_RESOURCE_BARRIER*)barriers);
            }

            void ResourceBarrier(array<D3D12_RESOURCE_BARRIER>^ pBarriers)
            {
                pin_ptr<D3D12_RESOURCE_BARRIER> barriers = &pBarriers[0];
                _ref->ResourceBarrier(pBarriers->Length, (::D3D12_RESOURCE_BARRIER*)barriers);
            }

            void ExecuteBundle(ID3D12GraphicsCommandList^ pCommandList)
            {
                _ref->ExecuteBundle((::ID3D12GraphicsCommandList*)pCommandList->Pointer.ToPointer());
            }

            void SetDescriptorHeaps(unsigned int NumDescriptorHeaps, array<ID3D12DescriptorHeap^>^ ppDescriptorHeaps)
            {
                ::ID3D12DescriptorHeap** descriptorHeaps = new ::ID3D12DescriptorHeap*[NumDescriptorHeaps];
                for (int i = 0; i < NumDescriptorHeaps; i++)
                    descriptorHeaps[i] = (::ID3D12DescriptorHeap*)ppDescriptorHeaps[i]->Pointer.ToPointer();
                _ref->SetDescriptorHeaps(NumDescriptorHeaps, descriptorHeaps);
            }

            void SetDescriptorHeaps(unsigned int NumDescriptorHeaps, IntPtr ppDescriptorHeaps)
            {
                ::ID3D12DescriptorHeap** descriptorHeaps = (::ID3D12DescriptorHeap**)ppDescriptorHeaps.ToPointer();
                _ref->SetDescriptorHeaps(NumDescriptorHeaps, descriptorHeaps);
            }

            void SetDescriptorHeaps(array<ID3D12DescriptorHeap^>^ ppDescriptorHeaps)
            {
                ::ID3D12DescriptorHeap** descriptorHeaps = new ::ID3D12DescriptorHeap * [ppDescriptorHeaps->Length];
                for (int i = 0; i < ppDescriptorHeaps->Length; i++)
                    descriptorHeaps[i] = (::ID3D12DescriptorHeap*)ppDescriptorHeaps[i]->Pointer.ToPointer();
                _ref->SetDescriptorHeaps(ppDescriptorHeaps->Length, descriptorHeaps);
            }

            void SetComputeRootSignature(ID3D12RootSignature^ pRootSignature)
            {
                _ref->SetComputeRootSignature((::ID3D12RootSignature*)pRootSignature->Pointer.ToPointer());
            }

            void SetComputeRootSignature()
            {
                _ref->SetComputeRootSignature(nullptr);
            }

            void SetGraphicsRootSignature(ID3D12RootSignature^ pRootSignature)
            {
                _ref->SetGraphicsRootSignature((::ID3D12RootSignature*)pRootSignature->Pointer.ToPointer());
            }

            void SetGraphicsRootSignature()
            {
                _ref->SetGraphicsRootSignature(nullptr);
            }

            void SetComputeRootDescriptorTable(unsigned int RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
            {
                ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(_ref, RootParameterIndex, (::D3D12_GPU_DESCRIPTOR_HANDLE*) & BaseDescriptor);
            }

            void SetGraphicsRootDescriptorTable(unsigned int RootParameterIndex, _In_  D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
            {
                ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(_ref, RootParameterIndex, (::D3D12_GPU_DESCRIPTOR_HANDLE*) & BaseDescriptor);
            }

            void SetComputeRoot32BitConstant(unsigned int RootParameterIndex, unsigned int SrcData, unsigned int DestOffsetIn32BitValues)
            {
                _ref->SetComputeRoot32BitConstant(RootParameterIndex, SrcData, DestOffsetIn32BitValues);
            }

            void SetGraphicsRoot32BitConstant(unsigned int RootParameterIndex, unsigned int SrcData, unsigned int DestOffsetIn32BitValues)
            {
                _ref->SetGraphicsRoot32BitConstant(RootParameterIndex, SrcData, DestOffsetIn32BitValues);
            }

            void SetComputeRoot32BitConstants(unsigned int RootParameterIndex, unsigned int Num32BitValuesToSet, IntPtr pSrcData, unsigned int DestOffsetIn32BitValues)
            {
                _ref->SetComputeRoot32BitConstants(RootParameterIndex, Num32BitValuesToSet, pSrcData.ToPointer(), DestOffsetIn32BitValues);
            }

            void SetGraphicsRoot32BitConstants(unsigned int RootParameterIndex, unsigned int Num32BitValuesToSet, IntPtr pSrcData, unsigned int DestOffsetIn32BitValues)
            {
                _ref->SetGraphicsRoot32BitConstants(RootParameterIndex, Num32BitValuesToSet, pSrcData.ToPointer(), DestOffsetIn32BitValues);
            }

            void SetComputeRootConstantBufferView(unsigned int RootParameterIndex, unsigned long long BufferLocation)
            {
                _ref->SetComputeRootConstantBufferView(RootParameterIndex, BufferLocation);
            }

            void SetGraphicsRootConstantBufferView(unsigned int RootParameterIndex, unsigned long long BufferLocation)
            {
                _ref->SetGraphicsRootConstantBufferView(RootParameterIndex, BufferLocation);
            }

            void SetComputeRootShaderResourceView(unsigned int RootParameterIndex, unsigned long long BufferLocation)
            {
                _ref->SetComputeRootShaderResourceView(RootParameterIndex, BufferLocation);
            }

            void SetGraphicsRootShaderResourceView(unsigned int RootParameterIndex, unsigned long long BufferLocation)
            {
                _ref->SetGraphicsRootShaderResourceView(RootParameterIndex, BufferLocation);
            }

            void SetComputeRootUnorderedAccessView(unsigned int RootParameterIndex, unsigned long long BufferLocation)
            {
                _ref->SetComputeRootUnorderedAccessView(RootParameterIndex, BufferLocation);
            }

            void SetGraphicsRootUnorderedAccessView(unsigned int RootParameterIndex, unsigned long long BufferLocation)
            {
                _ref->SetGraphicsRootUnorderedAccessView(RootParameterIndex, BufferLocation);
            }

            void IASetIndexBuffer(D3D12_INDEX_BUFFER_VIEW% pView)
            {
                pin_ptr<D3D12_INDEX_BUFFER_VIEW> view = &pView;
                _ref->IASetIndexBuffer((::D3D12_INDEX_BUFFER_VIEW*)view);
            }

            void IASetIndexBuffer()
            {
                _ref->IASetIndexBuffer(nullptr);
            }

            void IASetVertexBuffers(unsigned int StartSlot, unsigned int NumViews, array<D3D12_VERTEX_BUFFER_VIEW>^ pViews)
            {
                pin_ptr<D3D12_VERTEX_BUFFER_VIEW> views = &pViews[0];
                _ref->IASetVertexBuffers(StartSlot, NumViews, (::D3D12_VERTEX_BUFFER_VIEW*)views);
            }

            void IASetVertexBuffers(unsigned int StartSlot, array<D3D12_VERTEX_BUFFER_VIEW>^ pViews)
            {
                pin_ptr<D3D12_VERTEX_BUFFER_VIEW> views = &pViews[0];
                _ref->IASetVertexBuffers(StartSlot, pViews->Length - StartSlot, (::D3D12_VERTEX_BUFFER_VIEW*)views);
            }

            void IASetVertexBuffers(array<D3D12_VERTEX_BUFFER_VIEW>^ pViews)
            {
                pin_ptr<D3D12_VERTEX_BUFFER_VIEW> views = &pViews[0];
                _ref->IASetVertexBuffers(0, pViews->Length, (::D3D12_VERTEX_BUFFER_VIEW*)views);
            }

            void SOSetTargets(unsigned int StartSlot, unsigned int NumViews, array<D3D12_STREAM_OUTPUT_BUFFER_VIEW>^ pViews)
            {
                pin_ptr<D3D12_STREAM_OUTPUT_BUFFER_VIEW> views = &pViews[0];
                _ref->SOSetTargets(StartSlot, NumViews, (::D3D12_STREAM_OUTPUT_BUFFER_VIEW*)views);
            }

            void SOSetTargets(unsigned int StartSlot, array<D3D12_STREAM_OUTPUT_BUFFER_VIEW>^ pViews)
            {
                pin_ptr<D3D12_STREAM_OUTPUT_BUFFER_VIEW> views = &pViews[0];
                _ref->SOSetTargets(StartSlot, pViews->Length - StartSlot, (::D3D12_STREAM_OUTPUT_BUFFER_VIEW*)views);
            }

            void SOSetTargets(array<D3D12_STREAM_OUTPUT_BUFFER_VIEW>^ pViews)
            {
                pin_ptr<D3D12_STREAM_OUTPUT_BUFFER_VIEW> views = &pViews[0];
                _ref->SOSetTargets(0, pViews->Length, (::D3D12_STREAM_OUTPUT_BUFFER_VIEW*)views);
            }

            void OMSetRenderTargets(unsigned int NumRenderTargetDescriptors, array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pRenderTargetDescriptors, bool RTsSingleHandleToDescriptorRange,
                D3D12_CPU_DESCRIPTOR_HANDLE% pDepthStencilDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> renderTargets = &pRenderTargetDescriptors[0];
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> depthStencil = &pDepthStencilDescriptor;
                _ref->OMSetRenderTargets(NumRenderTargetDescriptors, (::D3D12_CPU_DESCRIPTOR_HANDLE*)renderTargets, RTsSingleHandleToDescriptorRange, 
                    (::D3D12_CPU_DESCRIPTOR_HANDLE*)depthStencil);
            }

            void OMSetRenderTargets(unsigned int NumRenderTargetDescriptors, array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pRenderTargetDescriptors, bool RTsSingleHandleToDescriptorRange)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> renderTargets = &pRenderTargetDescriptors[0];
                _ref->OMSetRenderTargets(NumRenderTargetDescriptors, (::D3D12_CPU_DESCRIPTOR_HANDLE*)renderTargets, RTsSingleHandleToDescriptorRange, nullptr);
            }

            void OMSetRenderTargets(array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pRenderTargetDescriptors, bool RTsSingleHandleToDescriptorRange,
                D3D12_CPU_DESCRIPTOR_HANDLE% pDepthStencilDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> renderTargets = &pRenderTargetDescriptors[0];
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> depthStencil = &pDepthStencilDescriptor;
                _ref->OMSetRenderTargets(pRenderTargetDescriptors->Length, (::D3D12_CPU_DESCRIPTOR_HANDLE*)renderTargets, RTsSingleHandleToDescriptorRange,
                    (::D3D12_CPU_DESCRIPTOR_HANDLE*)depthStencil);
            }

            void OMSetRenderTargets(array<D3D12_CPU_DESCRIPTOR_HANDLE>^ pRenderTargetDescriptors, bool RTsSingleHandleToDescriptorRange)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> renderTargets = &pRenderTargetDescriptors[0];
                _ref->OMSetRenderTargets(pRenderTargetDescriptors->Length, (::D3D12_CPU_DESCRIPTOR_HANDLE*)renderTargets, RTsSingleHandleToDescriptorRange, nullptr);
            }

            void OMSetRenderTargets(bool RTsSingleHandleToDescriptorRange, _In_opt_ D3D12_CPU_DESCRIPTOR_HANDLE% pDepthStencilDescriptor)
            {
                pin_ptr<D3D12_CPU_DESCRIPTOR_HANDLE> depthStencil = &pDepthStencilDescriptor;
                _ref->OMSetRenderTargets(0, nullptr, RTsSingleHandleToDescriptorRange, (::D3D12_CPU_DESCRIPTOR_HANDLE*)depthStencil);
            }

            void OMSetRenderTargets(bool RTsSingleHandleToDescriptorRange)
            {
                _ref->OMSetRenderTargets(0, nullptr, RTsSingleHandleToDescriptorRange, nullptr);
            }

            void ClearDepthStencilView(D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags,
                _In_  FLOAT Depth, _In_  UINT8 Stencil, _In_  UINT NumRects, _In_reads_(NumRects)  const D3D12_RECT* pRects) = 0;

            void ClearRenderTargetView(_In_  D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, float* ColorRGBA,
                _In_  UINT NumRects, _In_reads_(NumRects)  const D3D12_RECT* pRects) = 0;

            void ClearUnorderedAccessViewUint(_In_  D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, _In_  D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
                _In_  ID3D12Resource* pResource, _In_  unsigned int* Values, _In_  UINT NumRects, _In_reads_(NumRects)  const D3D12_RECT* pRects) = 0;

            void ClearUnorderedAccessViewFloat(_In_  D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, _In_  D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
                _In_  ID3D12Resource* pResource, float* Values, _In_  UINT NumRects, _In_reads_(NumRects)  const D3D12_RECT* pRects) = 0;

            void DiscardResource(_In_  ID3D12Resource* pResource, _In_opt_  const D3D12_DISCARD_REGION* pRegion) = 0;

            void BeginQuery(_In_  ID3D12QueryHeap* pQueryHeap, _In_  D3D12_QUERY_TYPE Type, _In_  UINT Index) = 0;

            void EndQuery(_In_  ID3D12QueryHeap* pQueryHeap, _In_  D3D12_QUERY_TYPE Type, _In_  UINT Index) = 0;

            void ResolveQueryData(_In_  ID3D12QueryHeap* pQueryHeap, _In_  D3D12_QUERY_TYPE Type, _In_  UINT StartIndex, _In_  UINT NumQueries,
                _In_  ID3D12Resource* pDestinationBuffer, _In_  UINT64 AlignedDestinationBufferOffset) = 0;

            void SetPredication(_In_opt_  ID3D12Resource* pBuffer, _In_  UINT64 AlignedBufferOffset, _In_  D3D12_PREDICATION_OP Operation) = 0;

            void SetMarker(UINT Metadata, _In_reads_bytes_opt_(Size)  const void* pData, UINT Size) = 0;

            void BeginEvent(UINT Metadata, _In_reads_bytes_opt_(Size)  const void* pData, UINT Size) = 0;

            void EndEvent() = 0;

            void ExecuteIndirect(_In_  ID3D12CommandSignature* pCommandSignature, _In_  UINT MaxCommandCount, _In_  ID3D12Resource* pArgumentBuffer,
                _In_  UINT64 ArgumentBufferOffset, _In_opt_  ID3D12Resource* pCountBuffer, _In_  UINT64 CountBufferOffset) = 0;

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12GraphicsCommandList>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12GraphicsCommandList);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12GraphicsCommandList* () { return (_ref); }
        };
    }
}