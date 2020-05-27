#pragma once

#include <dxgi1_2.h>
#include "IDXGIObject.h"
#include "IDXGIOutput.h"
#include "DXGI_MODE_DESC1.h"
#include "DXGI_FORMAT.h"
#include "IDXGIResource.h"
#include "IDXGIOutputDuplication.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput1 : IDXGIOutput
        {
            ::IDXGIOutput1* _ref;
        public:
            IDXGIOutput1(IntPtr pointer) : IDXGIOutput(pointer) { _ref = (::IDXGIOutput1*)pointer.ToPointer(); }
            IDXGIOutput1(void* pointer) : IDXGIOutput(pointer) { _ref = (::IDXGIOutput1*)pointer; }

            long GetDisplayModeList1(DXGI_FORMAT EnumFormat, unsigned int Flags, unsigned int% pNumModes, array<DXGI_MODE_DESC1>^ pDesc)
            {
                pin_ptr<unsigned int> pNum = &pNumModes;
                ::DXGI_MODE_DESC1* pArray;
                long ret = _ref->GetDisplayModeList1((::DXGI_FORMAT)EnumFormat, Flags, pNum, pArray);
                pDesc = gcnew array<DXGI_MODE_DESC1>(pNumModes);
                for (int i = 0; i < pNumModes; i++)
                    pDesc[i] = *(DXGI_MODE_DESC1*)(pArray + i);
                delete pArray;
                return ret;
            }

            long GetMatchingDisplayModeCount1(DXGI_FORMAT EnumFormat, unsigned int Flags, unsigned int% pNumModes)
            {
                pin_ptr<unsigned int> pNum = &pNumModes;
                return _ref->GetDisplayModeList1((::DXGI_FORMAT)EnumFormat, Flags, pNum, NULL);
            }

            long FindClosestMatchingMode1(DXGI_MODE_DESC1% pModeToMatch, [Out]  DXGI_MODE_DESC1% pClosestMatch, IUnknown^ pConcernedDevice)
            {
                pin_ptr<DXGI_MODE_DESC1> pMatch = &pModeToMatch;
                pin_ptr<DXGI_MODE_DESC1> pClose = &pClosestMatch;
                void* ppUn = nullptr;
                if (pConcernedDevice != nullptr)
                    ppUn = pConcernedDevice->Pointer.ToPointer();
                return _ref->FindClosestMatchingMode1((::DXGI_MODE_DESC1*)pMatch, (::DXGI_MODE_DESC1*)pClose, (::IUnknown*)ppUn);
            }

            long GetDisplaySurfaceData1(IDXGIResource^ pDestination)
            {
                return _ref->GetDisplaySurfaceData1((::IDXGIResource*)pDestination);
            }

            long DuplicateOutput(IUnknown^ pDevice, [Out]  IDXGIOutputDuplication^% ppOutputDuplication)
            {
                ::IDXGIOutputDuplication** ppOut;
                long ret = _ref->DuplicateOutput((::IUnknown*)pDevice->Pointer.ToPointer(), ppOut);
                ppOutputDuplication = gcnew IDXGIOutputDuplication(ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutput1>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput1);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput1* () { return (_ref); }
        };
    }
}