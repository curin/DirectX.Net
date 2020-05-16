#pragma once

#include "IDXGIObject.h"
#include "DXGI_ADAPTER_DESC.h"
#include "IDXGIOutput.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIAdapter : IDXGIObject
        {
            ::IDXGIAdapter* _ref;
        public:
            IDXGIAdapter(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIAdapter*)pointer.ToPointer(); }
            IDXGIAdapter(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIAdapter*)pointer; }

            long EnumOutputs(unsigned int Output, [Out] IDXGIOutput^% ppOutput)
            {
                ::IDXGIOutput** ppOut;
                long ret = _ref->EnumOutputs(Output, ppOut);
                ppOutput = gcnew IDXGIOutput(*ppOut);
                return ret;
            }

            long GetDesc([Out] DXGI_ADAPTER_DESC% pDesc)
            {
                pin_ptr<DXGI_ADAPTER_DESC> pDes = &pDesc;
                return _ref->GetDesc((::DXGI_ADAPTER_DESC*)pDes);
            }

            long CheckInterfaceSupport(Guid InterfaceName, [Out]  LARGE_INTEGER% pUMDVersion)
            {
                pin_ptr<LARGE_INTEGER> pUMD = &pUMDVersion;
                return _ref->CheckInterfaceSupport(ToGUID(InterfaceName), (::LARGE_INTEGER*)pUMD);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIAdapter>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIAdapter);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIAdapter* () { return (_ref); }
        };
    }
}