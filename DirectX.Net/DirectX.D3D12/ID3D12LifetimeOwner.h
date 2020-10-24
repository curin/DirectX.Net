#pragma once

#include "ID3D12Object.h"
#include "D3D12_LIFETIME_STATE.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        
        public ref class ID3D12LifetimeOwner : public IUnknown
        {
            ::ID3D12LifetimeOwner* _ref;
        public:
            ID3D12LifetimeOwner(IntPtr pointer) : IUnknown(pointer) { _ref = (::ID3D12LifetimeOwner*)pointer.ToPointer(); }
            ID3D12LifetimeOwner(void* pointer) : IUnknown(pointer) { _ref = (::ID3D12LifetimeOwner*)pointer; }

            void LifetimeStateUpdated(D3D12_LIFETIME_STATE NewState)
            {
                _ref->LifetimeStateUpdated((::D3D12_LIFETIME_STATE)NewState);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12LifetimeOwner>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12LifetimeOwner);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12LifetimeOwner* () { return (_ref); }
        };
    }
}