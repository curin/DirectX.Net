#pragma once

#include "IDXGIFactory.h"
#include "IDXGIAdapter1.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIFactory1 : IDXGIFactory
        {
            ::IDXGIFactory1* _ref;
        public:
            IDXGIFactory1(IntPtr pointer) : IDXGIFactory(pointer) { _ref = (::IDXGIFactory1*)pointer.ToPointer(); }
            IDXGIFactory1(void* pointer) : IDXGIFactory(pointer) { _ref = (::IDXGIFactory1*)pointer; }

            long EnumAdapters1(unsigned int Adapter, [Out]  IDXGIAdapter1^% ppAdapter)
            {
                ::IDXGIAdapter1** ppOut;
                long ret = _ref->EnumAdapters1(Adapter, ppOut);
                ppAdapter = gcnew IDXGIAdapter1(*ppOut);
                return ret;
            }

            bool IsCurrent()
            {
                return _ref->IsCurrent();
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIFactory1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory1* () { return (_ref); }
        };
    }
}