#pragma once
#include <dxgi1_6.h>
#include "IDXGIObject.h"
#include "IDXGIOutput5.h"
#include "DXGI_OUTPUT_DESC1.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput6 : IDXGIOutput5
        {
            ::IDXGIOutput6* _ref;
        public:
            IDXGIOutput6(IntPtr pointer) : IDXGIOutput5(pointer) { _ref = (::IDXGIOutput6*)pointer.ToPointer(); }
            IDXGIOutput6(void* pointer) : IDXGIOutput5(pointer) { _ref = (::IDXGIOutput6*)pointer; }

            long GetDesc1([Out] DXGI_OUTPUT_DESC1% pDesc)
            {
                pin_ptr<DXGI_OUTPUT_DESC1> desc = &pDesc;
                return _ref->GetDesc1((::DXGI_OUTPUT_DESC1*)desc);
            }

            long CheckHardwareCompositionSupport([Out] unsigned int% pFlags)
            {
                pin_ptr<unsigned int> flags = &pFlags;
                return _ref->CheckHardwareCompositionSupport(flags);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutput6>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput6);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput6* () { return (_ref); }
        };
    }
}