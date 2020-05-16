#pragma once

#include "IDXGIInfoQueue.h"
#include "IDXGIDebug.h"
#include "IDXGIDebug1.h"

using namespace System;

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public ref class DXGIDebug
            {
            public:
                static long DXGIGetDebugInterface([Out] IDXGIInfoQueue^% ppDebug)
                {
                    void** pPointer;
                    long ret = DXGIGetDebugInterface(IDXGIInfoQueue::GetGUID(), pPointer);
                    ppDebug = gcnew IDXGIInfoQueue(*pPointer);
                    return ret;
                }

                static long DXGIGetDebugInterface([Out] IDXGIDebug^% ppDebug)
                {
                    void** pPointer;
                    long ret = DXGIGetDebugInterface(IDXGIDebug::GetGUID(), pPointer);
                    ppDebug = gcnew IDXGIDebug(*pPointer);
                    return ret;
                }

                static long DXGIGetDebugInterface([Out] IDXGIDebug1^% ppDebug)
                {
                    void** pPointer;
                    long ret = DXGIGetDebugInterface(IDXGIDebug1::GetGUID(), pPointer);
                    ppDebug = gcnew IDXGIDebug1(*pPointer);
                    return ret;
                }

                [DllImport("Dxgidebug.dll")]
                static long DXGIGetDebugInterface(REFIID riid, void** ppDebug);

                static long DXGIGetDebugInterface(Guid riid, [Out] IntPtr% ppDebug)
                {
                    void** pPointer;
                    long ret = DXGIGetDebugInterface(ToGUID(riid), pPointer);
                    ppDebug = IntPtr(*pPointer);
                    return ret;
                }

                static long DXGIGetDebugInterface(Guid riid, [Out] IUnknown^% ppDebug)
                {
                    void** pPointer;
                    long ret = DXGIGetDebugInterface(ToGUID(riid), pPointer);
                    ppDebug = gcnew IUnknown(*pPointer);
                    return ret;
                }
            };
        }
    }
}