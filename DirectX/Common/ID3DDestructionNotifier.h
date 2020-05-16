#pragma once

#include <d3dcommon.h>

#include "../Windows/IUnknown.h"

using namespace System;
using namespace System::Runtime::InteropServices;
namespace DirectX
{
    public ref class ID3DDestructionNotifier : IUnknown
    {
    public:
        ID3DDestructionNotifier(IntPtr pointer) : IUnknown(pointer) { }
        ID3DDestructionNotifier(void* pointer) : IUnknown(pointer) { }
        
        long RegisterDestructionCallback(PFN_DESTRUCTION_CALLBACK callbackFn, IntPtr pData, [Out] unsigned int% pCallbackID)
        {
            pin_ptr<unsigned int> pCall = &pCallbackID;
            return ((::ID3DDestructionNotifier*)_ref)->RegisterDestructionCallback(callbackFn, pData.ToPointer(), pCall);
        }

        long UnregisterDestructionCallback(unsigned int callbackID)
        {
            return ((::ID3DDestructionNotifier*)_ref)->UnregisterDestructionCallback(callbackID);
        }

        GUID getGUID() override
        {
            return DirectX::GetGUID<::ID3DDestructionNotifier>(((::ID3DDestructionNotifier*)_ref));
        }

        static GUID GetGUID()
        {
            return __uuidof(::ID3DDestructionNotifier);
        }

        static Guid GetGuid()
        {
            return FromGUID(GetGUID());
        }

        explicit operator ::ID3DDestructionNotifier*() { return ((::ID3DDestructionNotifier*)_ref); }
    };
}