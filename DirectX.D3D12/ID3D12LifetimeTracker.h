#pragma once

#include "ID3D12DeviceChild.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12LifetimeTracker : public ID3D12DeviceChild
        {
            ::ID3D12LifetimeTracker* _ref;
        public:
            ID3D12LifetimeTracker(IntPtr pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12LifetimeTracker*)pointer.ToPointer(); }
            ID3D12LifetimeTracker(void* pointer) : ID3D12DeviceChild(pointer) { _ref = (::ID3D12LifetimeTracker*)pointer; }

            long DestroyOwnedObject(ID3D12DeviceChild^ pObject)
            {
                return _ref->DestroyOwnedObject((::ID3D12DeviceChild*)pObject->Pointer.ToPointer());
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12LifetimeTracker>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12LifetimeTracker);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12LifetimeTracker* () { return (_ref); }
        };
    }
}