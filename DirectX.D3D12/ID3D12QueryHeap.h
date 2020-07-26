#pragma once

#include "ID3D12Pageable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12QueryHeap : public ID3D12Pageable
        {
            ::ID3D12QueryHeap* _ref;
        public:
            ID3D12QueryHeap(IntPtr pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12QueryHeap*)pointer.ToPointer(); }
            ID3D12QueryHeap(void* pointer) : ID3D12Pageable(pointer) { _ref = (::ID3D12QueryHeap*)pointer; }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12QueryHeap>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12QueryHeap);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12QueryHeap* () { return (_ref); }
        };
    }
}