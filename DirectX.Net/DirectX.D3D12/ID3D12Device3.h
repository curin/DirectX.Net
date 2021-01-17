#pragma once

#include "ID3D12Device2.h"
#include "D3D12_RESIDENCY_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12Device3 : public ID3D12Device2
        {
            ::ID3D12Device3* _ref;
        public:
            ID3D12Device3(IntPtr pointer) : ID3D12Device2(pointer) { _ref = (::ID3D12Device3*)pointer.ToPointer(); }
            ID3D12Device3(void* pointer) : ID3D12Device2(pointer) { _ref = (::ID3D12Device3*)pointer; }

            long OpenExistingHeapFromAddress(IntPtr pAddress, Guid riid, [Out] IntPtr% ppvHeap)
            {
                void** ppOut;

                long ret = _ref->OpenExistingHeapFromAddress(pAddress.ToPointer(), ToGUID(riid), ppOut);

                ppvHeap = IntPtr(*ppOut);
                return ret;
            }

            long OpenExistingHeapFromFileMapping(IntPtr hFileMapping, Guid riid, [Out] IntPtr% ppvHeap)
            {
                void** ppOut;

                long ret = _ref->OpenExistingHeapFromFileMapping(hFileMapping.ToPointer(), ToGUID(riid), ppOut);

                ppvHeap = IntPtr(*ppOut);
                return ret;
            }

            long EnqueueMakeResident(D3D12_RESIDENCY_FLAGS Flags, unsigned int NumObjects, array<ID3D12Pageable^>^ ppObjects,
                ID3D12Fence^ pFenceToSignal, unsigned long long FenceValueToSignal)
            {
                ::ID3D12Pageable** objects = new ::ID3D12Pageable*[NumObjects];
                for (unsigned int i = 0; i < NumObjects; i++)
                    objects[i] = (::ID3D12Pageable*)ppObjects[i]->Pointer.ToPointer();

                long ret = _ref->EnqueueMakeResident((::D3D12_RESIDENCY_FLAGS)Flags, NumObjects, objects, (::ID3D12Fence*)pFenceToSignal->Pointer.ToPointer(), FenceValueToSignal);

                delete objects;
                return ret;
            }

            long EnqueueMakeResident(D3D12_RESIDENCY_FLAGS Flags, array<ID3D12Pageable^>^ ppObjects,
                ID3D12Fence^ pFenceToSignal, unsigned long long FenceValueToSignal)
            {
                ::ID3D12Pageable** objects = new ::ID3D12Pageable * [ppObjects->Length];
                for (int i = 0; i < ppObjects->Length; i++)
                    objects[i] = (::ID3D12Pageable*)ppObjects[i]->Pointer.ToPointer();

                long ret = _ref->EnqueueMakeResident((::D3D12_RESIDENCY_FLAGS)Flags, ppObjects->Length, objects, (::ID3D12Fence*)pFenceToSignal->Pointer.ToPointer(), FenceValueToSignal);

                delete objects;
                return ret;
            }

            long EnqueueMakeResident(D3D12_RESIDENCY_FLAGS Flags, unsigned int NumObjects, IntPtr ppObjects,
                ID3D12Fence^ pFenceToSignal, unsigned long long FenceValueToSignal)
            {
                return _ref->EnqueueMakeResident((::D3D12_RESIDENCY_FLAGS)Flags, NumObjects, (::ID3D12Pageable**)ppObjects.ToPointer(), 
                    (::ID3D12Fence*)pFenceToSignal->Pointer.ToPointer(), FenceValueToSignal);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Device3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Device3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Device3* () { return (_ref); }
        };
    }
}