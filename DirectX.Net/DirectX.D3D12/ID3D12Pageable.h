#pragma once

#include "ID3D12DeviceChild.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12Pageable : public ID3D12DeviceChild
        {
            ::ID3D12Pageable* _ref;
        public:
            ID3D12Pageable(IntPtr pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12Pageable*)pointer.ToPointer(); }
            ID3D12Pageable(void* pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12Pageable*)pointer; }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Pageable>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Pageable);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Pageable* () { return (_ref); }
        };
    }
}