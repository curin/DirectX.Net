#pragma once
#include <dxgi1_3.h>
#include "IDXGIObject.h"
#include "IDXGIOutput2.h"
#include "DXGI_FORMAT.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput3 : IDXGIOutput2
        {
            ::IDXGIOutput3* _ref;
        public:
            IDXGIOutput3(IntPtr pointer) : IDXGIOutput2(pointer) { _ref = (::IDXGIOutput3*)pointer.ToPointer(); }
            IDXGIOutput3(void* pointer) : IDXGIOutput2(pointer) { _ref = (::IDXGIOutput3*)pointer; }

            long CheckOverlaySupport(DXGI_FORMAT enumFormat, IUnknown^ pConcernedDevice, [Out]  unsigned int% pFlags)
            {
                pin_ptr<unsigned int> flags = &pFlags;
                return _ref->CheckOverlaySupport((::DXGI_FORMAT)enumFormat, (::IUnknown*)pConcernedDevice->Pointer.ToPointer(), flags);
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIOutput3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput3* () { return (_ref); }
        };
    }
}