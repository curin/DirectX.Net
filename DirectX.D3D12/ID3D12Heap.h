#pragma once

#include "D3D12_HEAP_DESC.h"
#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        ::D3D12_HEAP_DESC* ID3D12Heap_GetDesc(::ID3D12Heap* heap) { return &heap->GetDesc(); }
        public ref class ID3D12Heap : public ID3D12Pageable
        {
            ::ID3D12Heap* _ref;
        public:
            ID3D12Heap(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12Heap*)pointer.ToPointer(); }
            ID3D12Heap(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12Heap*)pointer; }

            D3D12_HEAP_DESC GetDesc()
            {
                return *(D3D12_HEAP_DESC*)ID3D12Heap_GetDesc(_ref);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12Heap>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Heap);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Heap* () { return (_ref); }
        };
    }
}