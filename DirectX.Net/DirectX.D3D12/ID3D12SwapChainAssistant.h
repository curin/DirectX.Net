#pragma once

#include "ID3D12Object.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        ::LUID* ID3D12SwapChainAssistant_GetLUID(::ID3D12SwapChainAssistant* _ref) { return &_ref->GetLUID(); }
        public ref class ID3D12SwapChainAssistant : public IUnknown
        {
            ::ID3D12SwapChainAssistant* _ref;
        public:
            ID3D12SwapChainAssistant(IntPtr pointer) : IUnknown(pointer) { _ref = (::ID3D12SwapChainAssistant*)pointer.ToPointer(); }
            ID3D12SwapChainAssistant(void* pointer) : IUnknown(pointer) { _ref = (::ID3D12SwapChainAssistant*)pointer; }

            virtual LUID STDMETHODCALLTYPE GetLUID()
            {
                return *(LUID*)ID3D12SwapChainAssistant_GetLUID(_ref);
            }

            long GetSwapChainObject(Guid riid, [Out] IntPtr% ppv)
            {
                void** ppOut;

                long ret = _ref->GetSwapChainObject(ToGUID(riid), ppOut);

                ppv = IntPtr(*ppOut);
                return ret;
            }

            long GetCurrentResourceAndCommandQueue(Guid riidResource, [Out] IntPtr% ppvResource, Guid riidQueue, [Out] IntPtr% ppvQueue)
            {
                void** ppRes;
                void** ppQue;

                long ret = _ref->GetCurrentResourceAndCommandQueue(ToGUID(riidResource), ppRes, ToGUID(riidQueue), ppQue);

                ppvResource = IntPtr(*ppRes);
                ppvQueue = IntPtr(*ppQue);
                return ret;
            }

            long InsertImplicitSync()
            {
                return _ref->InsertImplicitSync();
            }

            virtual GUID getGUID() override 
            {
                return DirectX::D3D12::GetGUID<::ID3D12SwapChainAssistant>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12SwapChainAssistant);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12SwapChainAssistant* () { return (_ref); }
        };
    }
}