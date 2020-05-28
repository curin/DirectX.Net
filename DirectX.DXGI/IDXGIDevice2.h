#pragma once

#include <dxgi1_2.h>
#include "IDXGIDevice1.h"
#include "IDXGIResource.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDevice2 : IDXGIDevice1
        {
            ::IDXGIDevice2* _ref;
        public:
            IDXGIDevice2(IntPtr pointer) : IDXGIDevice1(pointer) { _ref = (::IDXGIDevice2*)pointer.ToPointer(); }
            IDXGIDevice2(void* pointer) : IDXGIDevice1(pointer) { _ref = (::IDXGIDevice2*)pointer; }

            long OfferResources(unsigned int NumResources, array<IDXGIResource^>^ ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority)
            {
                ::IDXGIResource** ppRes = new ::IDXGIResource*[NumResources];
                for (int i = 0; i < NumResources; i++)
                    ppRes[i] = (::IDXGIResource*)ppResources[i];
                long ret = _ref->OfferResources(NumResources, ppRes, (::DXGI_OFFER_RESOURCE_PRIORITY)Priority);
                delete ppRes;
                return ret;
            }

            long ReclaimResources(unsigned int NumResources, array<IDXGIResource^>^ ppResources, bool% pDiscarded)
            {
                pin_ptr<bool> pDis = &pDiscarded;
                ::IDXGIResource** ppRes = new ::IDXGIResource * [NumResources];
                for (int i = 0; i < NumResources; i++)
                    ppRes[i] = (::IDXGIResource*)ppResources[i];
                long ret = _ref->ReclaimResources(NumResources, ppRes, (::BOOL*)pDis);
                delete ppRes;
                return ret;
            }

            long OfferResources(unsigned int NumResources, IntPtr ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority)
            {
                return _ref->OfferResources(NumResources, (::IDXGIResource**)ppResources.ToPointer(), (::DXGI_OFFER_RESOURCE_PRIORITY)Priority);
            }

            long ReclaimResources(unsigned int NumResources, IntPtr ppResources, bool% pDiscarded)
            {
                pin_ptr<bool> pDis = &pDiscarded;
                return _ref->ReclaimResources(NumResources, (::IDXGIResource**)ppResources.ToPointer(), (::BOOL*)pDis);
            }

            long EnqueueSetEvent(IntPtr hEvent)
            {
                pin_ptr<IntPtr> pEvent = &hEvent;
                return _ref->EnqueueSetEvent((::HANDLE)*pEvent);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIDevice2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDevice2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDevice2* () { return (_ref); }
        };
    }
}