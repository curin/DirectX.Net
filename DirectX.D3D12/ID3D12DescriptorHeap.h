#pragma once

#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        ::D3D12_DESCRIPTOR_HEAP_DESC* ID3D12DescriptorHeap_GetDesc(::ID3D12DescriptorHeap* _ref) { return &_ref->GetDesc(); }

        ::D3D12_CPU_DESCRIPTOR_HANDLE* ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(::ID3D12DescriptorHeap* _ref) { return &_ref->GetCPUDescriptorHandleForHeapStart(); }

        ::D3D12_GPU_DESCRIPTOR_HANDLE* ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(::ID3D12DescriptorHeap* _ref) { return &_ref->GetGPUDescriptorHandleForHeapStart(); }

        public ref class ID3D12DescriptorHeap : public ID3D12Pageable
        {
            ::ID3D12DescriptorHeap* _ref;
        public:
            ID3D12DescriptorHeap(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12DescriptorHeap*)pointer.ToPointer(); }
            ID3D12DescriptorHeap(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12DescriptorHeap*)pointer; }

            D3D12_DESCRIPTOR_HEAP_DESC GetDesc()
            {
                return *(D3D12_DESCRIPTOR_HEAP_DESC*)ID3D12DescriptorHeap_GetDesc(_ref);
            }

            D3D12_CPU_DESCRIPTOR_HANDLE GetCPUDescriptorHandleForHeapStart()
            {
                return *(D3D12_CPU_DESCRIPTOR_HANDLE*)ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(_ref);
            }

            D3D12_GPU_DESCRIPTOR_HANDLE GetGPUDescriptorHandleForHeapStart()
            {
                return *(D3D12_GPU_DESCRIPTOR_HANDLE*)ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(_ref);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12DescriptorHeap>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12DescriptorHeap);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12DescriptorHeap* () { return (_ref); }
        };
    }
}