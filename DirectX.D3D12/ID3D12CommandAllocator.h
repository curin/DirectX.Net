#pragma once

#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12CommandAllocator : public ID3D12Pageable
        {
            ::ID3D12CommandAllocator* _ref;
        public:
            ID3D12CommandAllocator(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12CommandAllocator*)pointer.ToPointer(); }
            ID3D12CommandAllocator(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12CommandAllocator*)pointer; }

            long Reset()
            {
                return _ref->Reset();
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12CommandAllocator>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12CommandAllocator);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12CommandAllocator* () { return (_ref); }
        };
    }
}