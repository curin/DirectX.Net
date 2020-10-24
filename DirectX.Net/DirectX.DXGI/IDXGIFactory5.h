#pragma once
#include <dxgi1_5.h>
#include "IDXGIFactory4.h"
#include "IDXGIObject.h"
#include "DXGI_FEATURE.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIFactory5 : IDXGIFactory4
        {
            ::IDXGIFactory5* _ref;
        public:
            IDXGIFactory5(IntPtr pointer) : IDXGIFactory4(pointer) { _ref = (::IDXGIFactory5*)pointer.ToPointer(); }
            IDXGIFactory5(void* pointer) : IDXGIFactory4(pointer) { _ref = (::IDXGIFactory5*)pointer; }

            long CheckFeatureSupport(DXGI_FEATURE Feature, IntPtr pFeatureSupportData, unsigned int FeatureSupportDataSize)
            {
                return _ref->CheckFeatureSupport((::DXGI_FEATURE)Feature, pFeatureSupportData.ToPointer(), FeatureSupportDataSize);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIFactory5>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory5);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory5* () { return (_ref); }
        };
    }
}