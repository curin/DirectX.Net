#pragma once

#include <dxgi1_3.h>
#include "IDXGIObject.h"
#include "IDXGIOutput1.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput2 : IDXGIOutput1
        {
            ::IDXGIOutput2* _ref;
        public:
            IDXGIOutput2(IntPtr pointer) : IDXGIOutput1(pointer) { _ref = (::IDXGIOutput2*)pointer.ToPointer(); }
            IDXGIOutput2(void* pointer) : IDXGIOutput1(pointer) { _ref = (::IDXGIOutput2*)pointer; }

            bool SupportsOverlays()
            {
                return _ref->SupportsOverlays();
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIOutput2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput2* () { return (_ref); }
        };
    }
}