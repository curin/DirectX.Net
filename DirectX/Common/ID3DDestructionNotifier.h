#pragma once

#include <d3dcommon.h>

#include "IUnknown.h"

using namespace System::Runtime::InteropServices;
namespace DirectX
{
    public ref class ID3DDestructionNotifier : IUnknown
    {
    public:

        ::ID3DDestructionNotifier* _notifier;
        long RegisterDestructionCallback(PFN_DESTRUCTION_CALLBACK callbackFn, IntPtr pData, [Out] unsigned int% pCallbackID)
        {
            return 0;
        }

        long UnregisterDestructionCallback(unsigned int callbackID)
        {
            return _notifier->UnregisterDestructionCallback(callbackID);
        }

        GUID getGUID() override
        {
            return DirectX::GetGUID<::ID3DDestructionNotifier>(_notifier);
        }

        property ::IUnknown* Unknown
        {
            ::IUnknown* get() override
            {
                return _notifier;
            }

            void set(::IUnknown* value) override
            {
                _notifier = (::ID3DDestructionNotifier*)value;
            }
        }
    };
}