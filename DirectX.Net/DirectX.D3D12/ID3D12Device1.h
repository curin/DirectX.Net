#pragma once

#include "ID3D12Device.h"
#include "ID3D12Fence.h"
#include "D3D12_MULTIPLE_FENCE_WAIT_FLAGS.h"
#include "D3D12_RESIDENCY_PRIORITY.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12Device1 : public ID3D12Device
        {
            ::ID3D12Device1* _ref;
        public:
            ID3D12Device1(IntPtr pointer) : ID3D12Device(pointer) { _ref = (::ID3D12Device1*)pointer.ToPointer(); }
            ID3D12Device1(void* pointer) : ID3D12Device(pointer) { _ref = (::ID3D12Device1*)pointer; }

            long CreatePipelineLibrary(IntPtr pLibraryBlob, size_t BlobLength, Guid riid, [Out] IntPtr% ppPipelineLibrary)
            {
                void** ppOut;

                long ret = _ref->CreatePipelineLibrary(pLibraryBlob.ToPointer(), BlobLength, ToGUID(riid), ppOut);

                ppPipelineLibrary = IntPtr(*ppOut);
                return ret;
            }

            long SetEventOnMultipleFenceCompletion(array<ID3D12Fence^>^ ppFences, array<unsigned long long>^ pFenceValues, unsigned int NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
                IntPtr hEvent)
            {
                ::ID3D12Fence** fences = new ::ID3D12Fence * [NumFences];
                for (unsigned int i = 0; i < NumFences; i++)
                    fences[i] = (::ID3D12Fence*)ppFences[i]->Pointer.ToPointer();

                pin_ptr<unsigned long long> pArray = &pFenceValues[0];

                long ret = _ref->SetEventOnMultipleFenceCompletion(fences, pArray, NumFences, (::D3D12_MULTIPLE_FENCE_WAIT_FLAGS)Flags, hEvent.ToPointer());

                delete fences;
                return ret;
            }

            long SetEventOnMultipleFenceCompletion(array<ID3D12Fence^>^ ppFences, array<unsigned long long>^ pFenceValues, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
                IntPtr hEvent)
            {
                ::ID3D12Fence** fences = new ::ID3D12Fence * [ppFences->Length];
                for (unsigned int i = 0; i < ppFences->Length; i++)
                    fences[i] = (::ID3D12Fence*)ppFences[i]->Pointer.ToPointer();

                pin_ptr<unsigned long long> pArray = &pFenceValues[0];

                long ret = _ref->SetEventOnMultipleFenceCompletion(fences, pArray, ppFences->Length, (::D3D12_MULTIPLE_FENCE_WAIT_FLAGS)Flags, hEvent.ToPointer());

                delete fences;
                return ret;
            }

            long SetEventOnMultipleFenceCompletion(IntPtr ppFences, array<unsigned long long>^ pFenceValues, unsigned int NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
                IntPtr hEvent)
            {
                pin_ptr<unsigned long long> pArray = &pFenceValues[0];

                return _ref->SetEventOnMultipleFenceCompletion((::ID3D12Fence**)ppFences.ToPointer(), pArray, NumFences, (::D3D12_MULTIPLE_FENCE_WAIT_FLAGS)Flags, hEvent.ToPointer());
            }

            long SetEventOnMultipleFenceCompletion(IntPtr ppFences, array<unsigned long long>^ pFenceValues, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
                IntPtr hEvent)
            {
                pin_ptr<unsigned long long> pArray = &pFenceValues[0];

                return _ref->SetEventOnMultipleFenceCompletion((::ID3D12Fence**)ppFences.ToPointer(), pArray, pFenceValues->Length, (::D3D12_MULTIPLE_FENCE_WAIT_FLAGS)Flags, hEvent.ToPointer());
            }

            long SetResidencyPriority(unsigned int NumObjects, array<ID3D12Pageable^>^ ppObjects, array<D3D12_RESIDENCY_PRIORITY>^ pPriorities)
            {
                ::ID3D12Pageable** objects = new ::ID3D12Pageable * [NumObjects];
                for (int i = 0; i < NumObjects; i++)
                    objects[i] = (::ID3D12Pageable*)ppObjects[i]->Pointer.ToPointer();

                pin_ptr<D3D12_RESIDENCY_PRIORITY> priority = &pPriorities[0];

                long ret = _ref->SetResidencyPriority(NumObjects, objects, (::D3D12_RESIDENCY_PRIORITY*)priority);

                delete objects;
                return ret;
            }

            long SetResidencyPriority(array<ID3D12Pageable^>^ ppObjects, array<D3D12_RESIDENCY_PRIORITY>^ pPriorities)
            {
                ::ID3D12Pageable** objects = new ::ID3D12Pageable * [ppObjects->Length];
                for (int i = 0; i < ppObjects->Length; i++)
                    objects[i] = (::ID3D12Pageable*)ppObjects[i]->Pointer.ToPointer();

                pin_ptr<D3D12_RESIDENCY_PRIORITY> priority = &pPriorities[0];

                long ret = _ref->SetResidencyPriority(ppObjects->Length, objects, (::D3D12_RESIDENCY_PRIORITY*)priority);

                delete objects;
                return ret;
            }

            long SetResidencyPriority(unsigned int NumObjects, IntPtr ppObjects, array<D3D12_RESIDENCY_PRIORITY>^ pPriorities)
            {
                pin_ptr<D3D12_RESIDENCY_PRIORITY> priority = &pPriorities[0];

                return _ref->SetResidencyPriority(NumObjects, (::ID3D12Pageable**)ppObjects.ToPointer(), (::D3D12_RESIDENCY_PRIORITY*)priority);
            }

            long SetResidencyPriority(IntPtr ppObjects, array<D3D12_RESIDENCY_PRIORITY>^ pPriorities)
            {
                pin_ptr<D3D12_RESIDENCY_PRIORITY> priority = &pPriorities[0];

                return _ref->SetResidencyPriority(pPriorities->Length, (::ID3D12Pageable**)ppObjects.ToPointer(), (::D3D12_RESIDENCY_PRIORITY*)priority);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Device1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Device1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Device1* () { return (_ref); }
        };
    }
}