#pragma once

#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12Fence : public ID3D12Pageable
        {
            ::ID3D12Fence* _ref;
        public:
            ID3D12Fence(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12Fence*)pointer.ToPointer(); }
            ID3D12Fence(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12Fence*)pointer; }

            unsigned long long GetCompletedValue()
            {
                return _ref->GetCompletedValue();
            }

            long SetEventOnCompletion(unsigned long long Value, IntPtr hEvent)
            {
                return _ref->SetEventOnCompletion(Value, hEvent.ToPointer());
            }

            long Signal(unsigned long long Value)
            {
                return _ref->Signal(Value);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12Fence>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Fence);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Fence* () { return (_ref); }
        };
    }
}