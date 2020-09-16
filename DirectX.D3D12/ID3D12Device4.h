#pragma once

#include "ID3D12Device3.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        ::D3D12_RESOURCE_ALLOCATION_INFO* ID3D12Device4_GetResourceAllocationInfo1(::ID3D12Device4* _ref, unsigned int visibleMask, unsigned int numResourceDescs,
            const ::D3D12_RESOURCE_DESC* pResourceDescs, ::D3D12_RESOURCE_ALLOCATION_INFO1* pResourceAllocationInfo1)
        {
            return &_ref->GetResourceAllocationInfo1(visibleMask, numResourceDescs, pResourceDescs, pResourceAllocationInfo1);
        }

        public ref class ID3D12Device4 : public ID3D12Device3
        {
            ::ID3D12Device4* _ref;
        public:
            ID3D12Device4(IntPtr pointer) : ID3D12Device3(pointer) { _ref = (::ID3D12Device4*)pointer.ToPointer(); }
            ID3D12Device4(void* pointer) : ID3D12Device3(pointer) { _ref = (::ID3D12Device4*)pointer; }

            long CreateCommandList1(unsigned int nodeMask, D3D12_COMMAND_LIST_TYPE type,
                D3D12_COMMAND_LIST_FLAGS flags, Guid riid, [Out]  IntPtr% ppCommandList)
            {
                void** ppOut;

                long ret = _ref->CreateCommandList1(nodeMask, (::D3D12_COMMAND_LIST_TYPE)type, (::D3D12_COMMAND_LIST_FLAGS)flags, ToGUID(riid), ppOut);

                ppCommandList = IntPtr(*ppOut);
                return ret;
            }

            long CreateProtectedResourceSession(D3D12_PROTECTED_RESOURCE_SESSION_DESC% pDesc, Guid riid, [Out]  IntPtr% ppSession)
            {
                void** ppOut;
                pin_ptr<D3D12_PROTECTED_RESOURCE_SESSION_DESC> desc = &pDesc;

                long ret = _ref->CreateProtectedResourceSession((::D3D12_PROTECTED_RESOURCE_SESSION_DESC*)desc, ToGUID(riid), ppOut);

                ppSession = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommittedResource1(D3D12_HEAP_PROPERTIES% pHeapProperties, D3D12_HEAP_FLAGS HeapFlags,
                D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialResourceState, D3D12_CLEAR_VALUE% pOptimizedClearValue,
                ID3D12ProtectedResourceSession^ pProtectedSession, Guid riidResource, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_HEAP_PROPERTIES> heapProps = &pHeapProperties;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;

                pin_ptr<D3D12_CLEAR_VALUE> clear = &pOptimizedClearValue;

                long ret = _ref->CreateCommittedResource1((::D3D12_HEAP_PROPERTIES*)heapProps, (::D3D12_HEAP_FLAGS)HeapFlags, (::D3D12_RESOURCE_DESC*)desc,
                    (::D3D12_RESOURCE_STATES)InitialResourceState,
                    (::D3D12_CLEAR_VALUE*)clear, (::ID3D12ProtectedResourceSession*)pProtectedSession->Pointer.ToPointer(),
                    ToGUID(riidResource), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommittedResource1(D3D12_HEAP_PROPERTIES% pHeapProperties, D3D12_HEAP_FLAGS HeapFlags,
                D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialResourceState, ID3D12ProtectedResourceSession^ pProtectedSession, 
                Guid riidResource, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_HEAP_PROPERTIES> heapProps = &pHeapProperties;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;

                long ret = _ref->CreateCommittedResource1((::D3D12_HEAP_PROPERTIES*)heapProps, (::D3D12_HEAP_FLAGS)HeapFlags, (::D3D12_RESOURCE_DESC*)desc,
                    (::D3D12_RESOURCE_STATES)InitialResourceState,
                    nullptr, (::ID3D12ProtectedResourceSession*)pProtectedSession->Pointer.ToPointer(),
                    ToGUID(riidResource), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommittedResource1(D3D12_HEAP_PROPERTIES% pHeapProperties, D3D12_HEAP_FLAGS HeapFlags,
                D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialResourceState, D3D12_CLEAR_VALUE% pOptimizedClearValue,
                Guid riidResource, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_HEAP_PROPERTIES> heapProps = &pHeapProperties;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;

                pin_ptr<D3D12_CLEAR_VALUE> clear = &pOptimizedClearValue;

                long ret = _ref->CreateCommittedResource1((::D3D12_HEAP_PROPERTIES*)heapProps, (::D3D12_HEAP_FLAGS)HeapFlags, (::D3D12_RESOURCE_DESC*)desc,
                    (::D3D12_RESOURCE_STATES)InitialResourceState,
                    (::D3D12_CLEAR_VALUE*)clear, nullptr,
                    ToGUID(riidResource), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateCommittedResource1(D3D12_HEAP_PROPERTIES% pHeapProperties, D3D12_HEAP_FLAGS HeapFlags,
                D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialResourceState, Guid riidResource, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_HEAP_PROPERTIES> heapProps = &pHeapProperties;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;

                long ret = _ref->CreateCommittedResource1((::D3D12_HEAP_PROPERTIES*)heapProps, (::D3D12_HEAP_FLAGS)HeapFlags, (::D3D12_RESOURCE_DESC*)desc,
                    (::D3D12_RESOURCE_STATES)InitialResourceState,
                    nullptr, nullptr,
                    ToGUID(riidResource), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateHeap1(D3D12_HEAP_DESC% pDesc, ID3D12ProtectedResourceSession^ pProtectedSession,
                Guid riid, [Out] IntPtr% ppvHeap)
            {
                void** ppOut;
                pin_ptr<D3D12_HEAP_DESC> desc = &pDesc;

                long ret = _ref->CreateHeap1((::D3D12_HEAP_DESC*)desc, (::ID3D12ProtectedResourceSession*)pProtectedSession->Pointer.ToPointer(), ToGUID(riid), ppOut);

                ppvHeap = IntPtr(*ppOut);
            }

            long CreateHeap1(D3D12_HEAP_DESC% pDesc, Guid riid, [Out] IntPtr% ppvHeap)
            {
                void** ppOut;
                pin_ptr<D3D12_HEAP_DESC> desc = &pDesc;

                long ret = _ref->CreateHeap1((::D3D12_HEAP_DESC*)desc, nullptr, ToGUID(riid), ppOut);

                ppvHeap = IntPtr(*ppOut);
            }

            long CreateReservedResource1(D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState,
                D3D12_CLEAR_VALUE% pOptimizedClearValue, ID3D12ProtectedResourceSession^ pProtectedSession,
                Guid riid, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                pin_ptr<D3D12_CLEAR_VALUE> val = &pOptimizedClearValue;

                long ret = _ref->CreateReservedResource1((::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState, (::D3D12_CLEAR_VALUE*)val,
                    (::ID3D12ProtectedResourceSession*)pProtectedSession->Pointer.ToPointer(), ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateReservedResource1(D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState,
                ID3D12ProtectedResourceSession^ pProtectedSession,
                Guid riid, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;

                long ret = _ref->CreateReservedResource1((::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState, nullptr,
                    (::ID3D12ProtectedResourceSession*)pProtectedSession->Pointer.ToPointer(), ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateReservedResource1(D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState,
                D3D12_CLEAR_VALUE% pOptimizedClearValue,
                Guid riid, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;
                pin_ptr<D3D12_CLEAR_VALUE> val = &pOptimizedClearValue;

                long ret = _ref->CreateReservedResource1((::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState, (::D3D12_CLEAR_VALUE*)val,
                    nullptr, ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            long CreateReservedResource1(D3D12_RESOURCE_DESC% pDesc, D3D12_RESOURCE_STATES InitialState,
                Guid riid, [Out] IntPtr% ppvResource)
            {
                void** ppOut;
                pin_ptr<D3D12_RESOURCE_DESC> desc = &pDesc;

                long ret = _ref->CreateReservedResource1((::D3D12_RESOURCE_DESC*)desc, (::D3D12_RESOURCE_STATES)InitialState, nullptr,
                    nullptr, ToGUID(riid), ppOut);

                ppvResource = IntPtr(*ppOut);
                return ret;
            }

            D3D12_RESOURCE_ALLOCATION_INFO GetResourceAllocationInfo1(unsigned int visibleMask, unsigned int numResourceDescs,
                array<D3D12_RESOURCE_DESC>^ pResourceDescs, array<D3D12_RESOURCE_ALLOCATION_INFO1>^ pResourceAllocationInfo1)
            {
                pin_ptr<D3D12_RESOURCE_DESC> descs = &pResourceDescs[0];
                pin_ptr<D3D12_RESOURCE_ALLOCATION_INFO1> allocInfo = &pResourceAllocationInfo1[0];

                return *(D3D12_RESOURCE_ALLOCATION_INFO*)ID3D12Device4_GetResourceAllocationInfo1(_ref, visibleMask, numResourceDescs, 
                    (::D3D12_RESOURCE_DESC*)descs, (::D3D12_RESOURCE_ALLOCATION_INFO1*)allocInfo);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Device4>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Device4);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Device4* () { return (_ref); }
        };
    }
}