#pragma once
#include <dxgi1_5.h>
#include "IDXGIDevice3.h"
#include "IDXGIResource.h"
#include "DXGI_OFFER_RESOURCE_PRIORITY.h"
#include "DXGI_RECLAIM_RESOURCE_RESULTS.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDevice4 : IDXGIDevice3
        {
            ::IDXGIDevice4* _ref;
        public:
            IDXGIDevice4(IntPtr pointer) : IDXGIDevice3(pointer) { _ref = (::IDXGIDevice4*)pointer.ToPointer(); }
            IDXGIDevice4(void* pointer) : IDXGIDevice3(pointer) { _ref = (::IDXGIDevice4*)pointer; }

            long OfferResources1(unsigned int NumResources, array<IDXGIResource^>^ ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, unsigned int Flags)
            {
                ::IDXGIResource** ppRes = new ::IDXGIResource * [NumResources];
                for (int i = 0; i < NumResources; i++)
                    ppRes[i] = (::IDXGIResource*)ppResources[i];
                long ret = _ref->OfferResources1(NumResources, ppRes, (::DXGI_OFFER_RESOURCE_PRIORITY)Priority, Flags);
                delete ppRes;
                return ret;
            }

            long ReclaimResources1(unsigned int NumResources, array<IDXGIResource^>^ ppResources, [Out] array<DXGI_RECLAIM_RESOURCE_RESULTS>^% pResults)
            {
                pResults = gcnew array<DXGI_RECLAIM_RESOURCE_RESULTS>(NumResources);
                pin_ptr<DXGI_RECLAIM_RESOURCE_RESULTS> results = &pResults[0];
                ::IDXGIResource** ppRes = new ::IDXGIResource * [NumResources];
                for (int i = 0; i < NumResources; i++)
                    ppRes[i] = (::IDXGIResource*)ppResources[i];
                long ret = _ref->ReclaimResources1(NumResources, ppRes, (::DXGI_RECLAIM_RESOURCE_RESULTS*)results);
                delete ppRes;
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIDevice3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDevice3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDevice3* () { return (_ref); }
        };
    }
}