#pragma once
#include <dxgi1_5.h>
#include "IDXGIObject.h"
#include "IDXGIOutput4.h"
#include "DXGI_FORMAT.h"
#include "DXGI_COLOR_SPACE_TYPE.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput5 : IDXGIOutput4
        {
            ::IDXGIOutput5* _ref;
        public:
            IDXGIOutput5(IntPtr pointer) : IDXGIOutput4(pointer) { _ref = (::IDXGIOutput5*)pointer.ToPointer(); }
            IDXGIOutput5(void* pointer) : IDXGIOutput4(pointer) { _ref = (::IDXGIOutput5*)pointer; }

            long DuplicateOutput1(IUnknown^ pDevice, unsigned int Flags, unsigned int SupportedFormatsCount, array<DXGI_FORMAT>^ pSupportedFormats,
                [Out] IDXGIOutputDuplication^% ppOutputDuplication)
            {
                ::IDXGIOutputDuplication** ppOut;
                pin_ptr<DXGI_FORMAT> pArray = &pSupportedFormats[0];
                long ret = _ref->DuplicateOutput1((::IUnknown*)pDevice->Pointer.ToPointer(), Flags, SupportedFormatsCount, (::DXGI_FORMAT*)pArray, ppOut);
                ppOutputDuplication = gcnew IDXGIOutputDuplication(*ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutput5>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput5);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput5* () { return (_ref); }
        };
    }
}