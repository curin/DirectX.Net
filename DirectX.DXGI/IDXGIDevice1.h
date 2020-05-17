#pragma once

#include "IDXGIDevice.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDevice1 : IDXGIDevice
        {
            ::IDXGIDevice1* _ref;
        public:
            IDXGIDevice1(IntPtr pointer) : IDXGIDevice(pointer) { _ref = (::IDXGIDevice1*)pointer.ToPointer(); }
            IDXGIDevice1(void* pointer) : IDXGIDevice(pointer) { _ref = (::IDXGIDevice1*)pointer; }

            long SetMaximumFrameLatency(unsigned int MaxLatency)
            {
                return _ref->SetMaximumFrameLatency(MaxLatency);
            }

            long GetMaximumFrameLatency([Out] unsigned int% pMaxLatency)
            {
                pin_ptr<unsigned int> pMax = &pMaxLatency;
                return _ref->GetMaximumFrameLatency(pMax);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIDevice1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDevice1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDevice1* () { return (_ref); }
        };
    }
}