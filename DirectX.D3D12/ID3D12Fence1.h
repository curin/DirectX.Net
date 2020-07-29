#pragma once

#include "ID3D12Fence.h"
#include "D3D12_FENCE_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12Fence1 : public ID3D12Fence
        {
            ::ID3D12Fence1* _ref;
        public:
            ID3D12Fence1(IntPtr pointer) : ID3D12Fence(pointer) { _ref = (::ID3D12Fence1*)pointer.ToPointer(); }
            ID3D12Fence1(void* pointer) : ID3D12Fence(pointer) { _ref = (::ID3D12Fence1*)pointer; }

            D3D12_FENCE_FLAGS GetCreationFlags()
            {
                return (D3D12_FENCE_FLAGS)_ref->GetCreationFlags();
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Fence1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Fence1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Fence1* () { return (_ref); }
        };
    }
}