#pragma once

#include "IDXGIDebug.h"

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public ref class IDXGIDebug1 : IDXGIDebug
            {
                ::IDXGIDebug1* _ref;
            public:
                IDXGIDebug1(IntPtr pointer) : IDXGIDebug(pointer) { _ref = (::IDXGIDebug1*)pointer.ToPointer(); }
                IDXGIDebug1(void* pointer) : IDXGIDebug(pointer) { _ref = (::IDXGIDebug1*)pointer; }

                void EnableLeakTrackingForThread()
                {
                    (_ref)->EnableLeakTrackingForThread();
                }

                void DisableLeakTrackingForThread()
                {
                    (_ref)->DisableLeakTrackingForThread();
                }

                bool IsLeakTrackingEnabledForThread()
                {
                    return (_ref)->IsLeakTrackingEnabledForThread();
                }

                GUID getGUID() override
                {
                    return DirectX::GetGUID<::IDXGIDebug1>((_ref));
                }

                static GUID GetGUID()
                {
                    return __uuidof(::IDXGIDebug1);
                }

                static Guid GetGuid()
                {
                    return FromGUID(GetGUID());
                }

                explicit operator ::IDXGIDebug1* () { return (_ref); }
            };
        }
    }
}