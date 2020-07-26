#pragma once

#include "D3D12_COMMAND_LIST_TYPE.h"
#include "ID3D12DeviceChild.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12CommandList : public ID3D12DeviceChild
        {
            ::ID3D12CommandList* _ref;
        public:
            ID3D12CommandList(IntPtr pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12CommandList*)pointer.ToPointer(); }
            ID3D12CommandList(void* pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12CommandList*)pointer; }

            D3D12_COMMAND_LIST_TYPE GetType()
            {
                return (D3D12_COMMAND_LIST_TYPE)_ref->GetType();
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::ID3D12CommandList>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12CommandList);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12CommandList* () { return (_ref); }
        };
    }
}