#pragma once

#include "IDXGIObject.h"
#include "DXGI_RESIDENCY.h"
#include "DXGI_SURFACE_DESC.h"
#include "DXGI_SHARED_RESOURCE.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDevice : IDXGIObject
        {
            ::IDXGIDevice* _ref;
        public:
            IDXGIDevice(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIDevice*)pointer.ToPointer(); }
            IDXGIDevice(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIDevice*)pointer; }

            long GetAdapter([Out]  IDXGIAdapter^% pAdapter)
            {
                ::IDXGIAdapter** ppOut;
                long ret = _ref->GetAdapter(ppOut);
                pAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            long CreateSurface(DXGI_SURFACE_DESC% pDesc, unsigned int NumSurfaces, unsigned int Usage, DXGI_SHARED_RESOURCE% pSharedResource, [Out] IDXGISurface^% ppSurface)
            {
                ::IDXGISurface** ppOut;
                pin_ptr<DXGI_SURFACE_DESC> pDes = &pDesc;
                pin_ptr<DXGI_SHARED_RESOURCE> pShared = &pSharedResource;
                long ret = _ref->CreateSurface((::DXGI_SURFACE_DESC*)pDes, NumSurfaces, Usage, (::DXGI_SHARED_RESOURCE*)pShared, ppOut);
                ppSurface = gcnew IDXGISurface(*ppOut);
                return ret;
            }

            long CreateSurface(DXGI_SURFACE_DESC% pDesc, unsigned int NumSurfaces, unsigned int Usage, [Out] IDXGISurface^% ppSurface)
            {
                ::IDXGISurface** ppOut;
                pin_ptr<DXGI_SURFACE_DESC> pDes = &pDesc;
                long ret = _ref->CreateSurface((::DXGI_SURFACE_DESC*)pDes, NumSurfaces, Usage, NULL, ppOut);
                ppSurface = gcnew IDXGISurface(*ppOut);
                return ret;
            }

            long QueryResourceResidency(array<IUnknown^>^ ppResources, [Out] array<DXGI_RESIDENCY>^ pResidencyStatus, unsigned int NumResources)
            {
                ::IUnknown** ppResource = new ::IUnknown*[NumResources];
                for (unsigned int i = 0; i < NumResources; i++)
                    ppResource[i] = (::IUnknown*)ppResources[i]->Pointer.ToPointer();
                pResidencyStatus = gcnew array<DXGI_RESIDENCY>(NumResources);
                pin_ptr<DXGI_RESIDENCY> pResidency = &pResidencyStatus[0];
                long ret = _ref->QueryResourceResidency(ppResource, (::DXGI_RESIDENCY*)pResidency, NumResources);
                delete ppResource;
                return ret;
            }

            long QueryResourceResidency(IntPtr ppResources, [Out] array<DXGI_RESIDENCY>^ pResidencyStatus, unsigned int NumResources)
            {
                pResidencyStatus = gcnew array<DXGI_RESIDENCY>(NumResources);
                pin_ptr<DXGI_RESIDENCY> pResidency = &pResidencyStatus[0];
                long ret = _ref->QueryResourceResidency((::IUnknown**)ppResources.ToPointer(), (::DXGI_RESIDENCY*)pResidency, NumResources);
                return ret;
            }

            long SetGPUThreadPriority(int Priority)
            {
                return _ref->SetGPUThreadPriority(Priority);
            }

            long GetGPUThreadPriority([Out] int% pPriority)
            {
                pin_ptr<int> pPri = &pPriority;
                return _ref->GetGPUThreadPriority(pPri);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIDevice>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDevice);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDevice* () { return (_ref); }
        };
    }
}