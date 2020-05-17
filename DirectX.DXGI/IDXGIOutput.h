#pragma once

#include "DXGI_MODE_DESC.h"
#include "DXGI_FORMAT.h"
#include "DXGI_OUTPUT_DESC.h"
#include "DXGI_GAMMA_CONTROL_CAPABILITIES.h"
#include "DXGI_GAMMA_CONTROL.h"
#include "DXGI_FRAME_STATISTICS.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput : IDXGIObject
        {
            ::IDXGIOutput* _ref;
        public:
            IDXGIOutput(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutput*)pointer.ToPointer(); }
            IDXGIOutput(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutput*)pointer; }

            long GetDesc([Out] DXGI_OUTPUT_DESC% pDesc)
            {
                pin_ptr<DXGI_OUTPUT_DESC> pDes = &pDesc;
                return _ref->GetDesc((::DXGI_OUTPUT_DESC*)pDes);
            }

            long GetDisplayModeList(DXGI_FORMAT EnumFormat, unsigned int Flags, unsigned int% pNumModes, [Out] array<DXGI_MODE_DESC>^ pDesc)
            {
                pin_ptr<unsigned int> pNum = &pNumModes;
                ::DXGI_MODE_DESC* pArray;
                long ret = _ref->GetDisplayModeList((::DXGI_FORMAT)EnumFormat, Flags, pNum, pArray);
                pDesc = gcnew array<DXGI_MODE_DESC>(pNumModes);
                for (int i = 0; i < pNumModes; i++)
                    pDesc[i] = *(DXGI_MODE_DESC*)(pArray + i);
                delete pArray;
                return ret;
            }

            long GetMatchingDisplayModeCount(DXGI_FORMAT EnumFormat, unsigned int Flags, unsigned int% pNumModes)
            {
                pin_ptr<unsigned int> pNum = &pNumModes;
                return _ref->GetDisplayModeList((::DXGI_FORMAT)EnumFormat, Flags, pNum, NULL);
            }

            long FindClosestMatchingMode(DXGI_MODE_DESC% pModeToMatch, [Out] DXGI_MODE_DESC% pClosestMatch, IUnknown^ pConcernedDevice)
            {
                pin_ptr<DXGI_MODE_DESC> pMatch = &pModeToMatch;
                pin_ptr<DXGI_MODE_DESC> pClose = &pClosestMatch;
                void* ppUn = nullptr;
                if (pConcernedDevice != nullptr)
                    ppUn = pConcernedDevice->Pointer.ToPointer();
                return _ref->FindClosestMatchingMode((::DXGI_MODE_DESC*)pMatch, (::DXGI_MODE_DESC*)pClose, (::IUnknown*)ppUn);
            }

            long WaitForVBlank() { return _ref->WaitForVBlank(); }

            long TakeOwnership(IUnknown^ pDevice, bool Exclusive) 
            { 
                void* ppUn = pDevice->Pointer.ToPointer();
                return _ref->TakeOwnership((::IUnknown*)ppUn, Exclusive); 
            }

            void ReleaseOwnership() { _ref->ReleaseOwnership(); }

            long GetGammaControlCapabilities([Out] DXGI_GAMMA_CONTROL_CAPABILITIES% pGammaCaps)
            {
                pin_ptr<DXGI_GAMMA_CONTROL_CAPABILITIES> pCaps = &pGammaCaps;
                return _ref->GetGammaControlCapabilities((::DXGI_GAMMA_CONTROL_CAPABILITIES*)pCaps);
            }

            long SetGammaControl(DXGI_GAMMA_CONTROL% pArray)
            {
                pin_ptr<DXGI_GAMMA_CONTROL> pNotArray = &pArray;
                return _ref->SetGammaControl((::DXGI_GAMMA_CONTROL*)pNotArray);
            }

            long GetGammaControl([Out] DXGI_GAMMA_CONTROL% pArray)
            {
                pin_ptr<DXGI_GAMMA_CONTROL> pNotArray = &pArray;
                return _ref->GetGammaControl((::DXGI_GAMMA_CONTROL*)pNotArray);
            }

            long SetDisplaySurface(IDXGISurface^ pScanoutSurface)
            {
                return _ref->SetDisplaySurface((::IDXGISurface*)pScanoutSurface);
            }

            long GetDisplaySurfaceData(IDXGISurface^ pDestination)
            {
                return _ref->GetDisplaySurfaceData((::IDXGISurface*)pDestination);
            }

            long GetFrameStatistics([Out] DXGI_FRAME_STATISTICS% pStats)
            {
                pin_ptr<DXGI_FRAME_STATISTICS> pStat = &pStats;
                return _ref->GetFrameStatistics((::DXGI_FRAME_STATISTICS*)pStat);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutput>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput* () { return (_ref); }
        };
    }
}