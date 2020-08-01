#pragma once

#include "ID3D12Pageable.h"
#include "ID3D12Resource.h"
#include "ID3D12Heap.h"
#include "ID3D12CommandList.h"
#include "ID3D12Fence.h"
#include "D3D12_TILED_RESOURCE_COORDINATE.h"
#include "D3D12_TILE_REGION_SIZE.h"
#include "D3D12_TILE_RANGE_FLAGS.h"
#include "D3D12_TILE_MAPPING_FLAGS.h"
#include "D3D12_COMMAND_QUEUE_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        ::D3D12_COMMAND_QUEUE_DESC* ID3D12CommandQueue_GetDesc(::ID3D12CommandQueue* _ref) { return &_ref->GetDesc(); }
        public ref class ID3D12CommandQueue : public ID3D12Pageable
        {
            ::ID3D12CommandQueue* _ref;
        public:
            ID3D12CommandQueue(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12CommandQueue*)pointer.ToPointer(); }
            ID3D12CommandQueue(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12CommandQueue*)pointer; }

            void UpdateTileMappings(ID3D12Resource^ pResource, unsigned int NumResourceRegions, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, ID3D12Heap^ pHeap, unsigned int NumRanges, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags,
                array<unsigned int>^ pHeapRangeStartOffsets, array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), NumResourceRegions, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, (::ID3D12Heap*)pHeap->Pointer.ToPointer(), NumRanges, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets, 
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void UpdateTileMappings(ID3D12Resource^ pResource, unsigned int NumResourceRegions, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, unsigned int NumRanges, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags, array<unsigned int>^ pHeapRangeStartOffsets,
                array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), NumResourceRegions, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, nullptr, NumRanges, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets,
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void UpdateTileMappings(ID3D12Resource^ pResource, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, ID3D12Heap^ pHeap, unsigned int NumRanges, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags,
                array<unsigned int>^ pHeapRangeStartOffsets, array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), pResourceRegionStartCoordinates->Length, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, (::ID3D12Heap*)pHeap->Pointer.ToPointer(), NumRanges, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets,
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void UpdateTileMappings(ID3D12Resource^ pResource, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, unsigned int NumRanges, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags, array<unsigned int>^ pHeapRangeStartOffsets,
                array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), pResourceRegionStartCoordinates->Length, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, nullptr, NumRanges, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets,
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void UpdateTileMappings(ID3D12Resource^ pResource, unsigned int NumResourceRegions, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, ID3D12Heap^ pHeap, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags,
                array<unsigned int>^ pHeapRangeStartOffsets, array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), NumResourceRegions, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, (::ID3D12Heap*)pHeap->Pointer.ToPointer(), pRangeFlags->Length, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets,
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void UpdateTileMappings(ID3D12Resource^ pResource, unsigned int NumResourceRegions, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags, array<unsigned int>^ pHeapRangeStartOffsets,
                array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), NumResourceRegions, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, nullptr, pRangeFlags->Length, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets,
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void UpdateTileMappings(ID3D12Resource^ pResource, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, ID3D12Heap^ pHeap, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags,
                array<unsigned int>^ pHeapRangeStartOffsets, array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), pResourceRegionStartCoordinates->Length, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, (::ID3D12Heap*)pHeap->Pointer.ToPointer(), pRangeFlags->Length, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets,
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void UpdateTileMappings(ID3D12Resource^ pResource, array<D3D12_TILED_RESOURCE_COORDINATE>^ pResourceRegionStartCoordinates,
                array<D3D12_TILE_REGION_SIZE>^ pResourceRegionSizes, array<D3D12_TILE_RANGE_FLAGS>^ pRangeFlags, array<unsigned int>^ pHeapRangeStartOffsets,
                array<unsigned int>^ pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> coords = &pResourceRegionStartCoordinates[0];
                pin_ptr<D3D12_TILE_REGION_SIZE> sizes = &pResourceRegionSizes[0];
                pin_ptr<D3D12_TILE_RANGE_FLAGS> flags = &pRangeFlags[0];
                pin_ptr<unsigned int> offsets = &pHeapRangeStartOffsets[0];
                pin_ptr<unsigned int> tileCounts = &pRangeTileCounts[0];
                _ref->UpdateTileMappings((::ID3D12Resource*)pResource->Pointer.ToPointer(), pResourceRegionStartCoordinates->Length, (::D3D12_TILED_RESOURCE_COORDINATE*)coords,
                    (::D3D12_TILE_REGION_SIZE*)sizes, nullptr, pRangeFlags->Length, (::D3D12_TILE_RANGE_FLAGS*)flags, offsets,
                    tileCounts, (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void CopyTileMappings(ID3D12Resource^ pDstResource, D3D12_TILED_RESOURCE_COORDINATE% pDstRegionStartCoordinate, ID3D12Resource^ pSrcResource,
                D3D12_TILED_RESOURCE_COORDINATE% pSrcRegionStartCoordinate, D3D12_TILE_REGION_SIZE% pRegionSize, D3D12_TILE_MAPPING_FLAGS Flags)
            {
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> dstStartCoord = &pDstRegionStartCoordinate;
                pin_ptr<D3D12_TILED_RESOURCE_COORDINATE> srcStartCoord = &pSrcRegionStartCoordinate;
                pin_ptr<D3D12_TILE_REGION_SIZE> region = &pRegionSize;
                _ref->CopyTileMappings((::ID3D12Resource*)pDstResource->Pointer.ToPointer(), (::D3D12_TILED_RESOURCE_COORDINATE*)dstStartCoord,
                    (::ID3D12Resource*)pSrcResource->Pointer.ToPointer(), (::D3D12_TILED_RESOURCE_COORDINATE*)srcStartCoord, (::D3D12_TILE_REGION_SIZE*)region, 
                    (::D3D12_TILE_MAPPING_FLAGS)Flags);
            }

            void ExecuteCommandLists(unsigned int NumCommandLists, array<ID3D12CommandList^>^ ppCommandLists)
            {
                ::ID3D12CommandList** commandLists = new ::ID3D12CommandList * [NumCommandLists];

                for (int i = 0; i < NumCommandLists; i++)
                    commandLists[i] = (::ID3D12CommandList*)ppCommandLists[i]->Pointer.ToPointer();

                _ref->ExecuteCommandLists(NumCommandLists, commandLists);
                delete commandLists;
            }

            void ExecuteCommandLists(array<ID3D12CommandList^>^ ppCommandLists)
            {
                ::ID3D12CommandList** commandLists = new ::ID3D12CommandList * [ppCommandLists->Length];

                for (int i = 0; i < ppCommandLists->Length; i++)
                    commandLists[i] = (::ID3D12CommandList*)ppCommandLists[i]->Pointer.ToPointer();

                _ref->ExecuteCommandLists(ppCommandLists->Length, commandLists);
                delete commandLists;
            }

            void ExecuteCommandLists(unsigned int NumCommandLists, IntPtr ppCommandLists)
            {
                _ref->ExecuteCommandLists(NumCommandLists, (::ID3D12CommandList**)ppCommandLists.ToPointer());
            }

            void SetMarker(unsigned int Metadata, IntPtr pData, unsigned int Size)
            {
                _ref->SetMarker(Metadata, pData.ToPointer(), Size);
            }

            void BeginEvent(unsigned int Metadata, IntPtr pData, unsigned int Size)
            {
                _ref->BeginEvent(Metadata, pData.ToPointer(), Size);
            }

            void EndEvent()
            {
                _ref->EndEvent();
            }

            long Signal(ID3D12Fence^ pFence, unsigned long long Value)
            {
                return _ref->Signal((::ID3D12Fence*)pFence->Pointer.ToPointer(), Value);
            }

            long Wait(ID3D12Fence^ pFence, unsigned long long Value)
            {
                return _ref->Wait((::ID3D12Fence*)pFence->Pointer.ToPointer(), Value);
            }

            long GetTimestampFrequency([Out] unsigned long long% pFrequency)
            {
                pin_ptr<unsigned long long> freq = &pFrequency;
                return _ref->GetTimestampFrequency(freq);
            }

            long GetClockCalibration([Out] unsigned long long% pGpuTimestamp, [Out] unsigned long long% pCpuTimestamp)
            {
                pin_ptr<unsigned long long> gpu = &pGpuTimestamp;
                pin_ptr<unsigned long long> cpu = &pCpuTimestamp;

                return _ref->GetClockCalibration(gpu, cpu);
            }

            D3D12_COMMAND_QUEUE_DESC GetDesc()
            {
                return *(D3D12_COMMAND_QUEUE_DESC*)ID3D12CommandQueue_GetDesc(_ref);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12CommandQueue>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12CommandQueue);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12CommandQueue* () { return (_ref); }
        };
    }
}