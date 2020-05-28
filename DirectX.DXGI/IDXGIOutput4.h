#pragma once
#include <dxgi1_4.h>
#include "IDXGIObject.h"
#include "IDXGIOutput3.h"
#include "DXGI_FORMAT.h"
#include "DXGI_COLOR_SPACE_TYPE.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput4 : IDXGIOutput3
        {
            ::IDXGIOutput4* _ref;
        public:
            IDXGIOutput4(IntPtr pointer) : IDXGIOutput3(pointer) { _ref = (::IDXGIOutput4*)pointer.ToPointer(); }
            IDXGIOutput4(void* pointer) : IDXGIOutput3(pointer) { _ref = (::IDXGIOutput4*)pointer; }

            long CheckOverlayColorSpaceSupport(DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown^ pConcernedDevice, [Out] unsigned int% pFlags)
            {
                pin_ptr<unsigned int> flags = &pFlags;
                return _ref->CheckOverlayColorSpaceSupport((::DXGI_FORMAT)Format, (::DXGI_COLOR_SPACE_TYPE)ColorSpace, (::IUnknown*)pConcernedDevice->Pointer.ToPointer(), flags);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutput4>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput4);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput4* () { return (_ref); }
        };
    }
}