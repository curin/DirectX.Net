#pragma once

#include <dxgi1_3.h>
#include "IDXGIObject.h"

#include "DXGI_SWAP_CHAIN_DESC1.h"
#include "IDXGIOutput.h"
#include "IDXGISwapChain1.h"
#include "IDXGIDecodeSwapChain.h"
#include "IDXGIResource.h"
#include "DXGI_DECODE_SWAP_CHAIN_DESC.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIFactoryMedia : public IUnknown
        {
            ::IDXGIFactoryMedia* _ref;
        public:
            IDXGIFactoryMedia(IntPtr pointer) : IUnknown(pointer) { _ref = (::IDXGIFactoryMedia*)pointer.ToPointer(); }
            IDXGIFactoryMedia(void* pointer) : IUnknown(pointer) { _ref = (::IDXGIFactoryMedia*)pointer; }

            long CreateSwapChainForCompositionSurfaceHandle(IUnknown^ pDevice, IntPtr hSurface, DXGI_SWAP_CHAIN_DESC1% pDesc, IDXGIOutput^ pRestrictToOutput,
                [Out] IDXGISwapChain1^% ppSwapChain)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC1> desc = &pDesc;
                ::IDXGISwapChain1** ppOut;
                long ret = _ref->CreateSwapChainForCompositionSurfaceHandle((::IUnknown*)pDevice->Pointer.ToPointer(), hSurface.ToPointer(), (::DXGI_SWAP_CHAIN_DESC1*)desc,
                    (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGISwapChain1(ppOut);
                return ret;
            }

            long CreateSwapChainForCompositionSurfaceHandle(IUnknown^ pDevice, DXGI_SWAP_CHAIN_DESC1% pDesc, IDXGIOutput^ pRestrictToOutput, [Out] IDXGISwapChain1^% ppSwapChain)
            {
                pin_ptr<DXGI_SWAP_CHAIN_DESC1> desc = &pDesc;
                ::IDXGISwapChain1** ppOut;
                long ret = _ref->CreateSwapChainForCompositionSurfaceHandle((::IUnknown*)pDevice->Pointer.ToPointer(), NULL, (::DXGI_SWAP_CHAIN_DESC1*)desc,
                    (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGISwapChain1(ppOut);
                return ret;
            }

            long CreateDecodeSwapChainForCompositionSurfaceHandle(IUnknown^ pDevice, IntPtr hSurface, DXGI_DECODE_SWAP_CHAIN_DESC% pDesc, IDXGIResource^ pYuvDecodeBuffers,
                IDXGIOutput^ pRestrictToOutput, [Out] IDXGIDecodeSwapChain^% ppSwapChain)
            {
                pin_ptr<DXGI_DECODE_SWAP_CHAIN_DESC> desc = &pDesc;
                ::IDXGIDecodeSwapChain** ppOut;
                long ret = _ref->CreateDecodeSwapChainForCompositionSurfaceHandle((::IUnknown*)pDevice->Pointer.ToPointer(), hSurface.ToPointer(), (::DXGI_DECODE_SWAP_CHAIN_DESC*)desc,
                    (::IDXGIResource*) pYuvDecodeBuffers, (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGIDecodeSwapChain(ppOut);
                return ret;
            }

            long CreateDecodeSwapChainForCompositionSurfaceHandle(IUnknown^ pDevice, DXGI_DECODE_SWAP_CHAIN_DESC% pDesc, IDXGIResource^ pYuvDecodeBuffers,
                IDXGIOutput^ pRestrictToOutput, [Out] IDXGIDecodeSwapChain^% ppSwapChain)
            {
                pin_ptr<DXGI_DECODE_SWAP_CHAIN_DESC> desc = &pDesc;
                ::IDXGIDecodeSwapChain** ppOut;
                long ret = _ref->CreateDecodeSwapChainForCompositionSurfaceHandle((::IUnknown*)pDevice->Pointer.ToPointer(), NULL, (::DXGI_DECODE_SWAP_CHAIN_DESC*)desc,
                    (::IDXGIResource*) pYuvDecodeBuffers, (::IDXGIOutput*)pRestrictToOutput, ppOut);
                ppSwapChain = gcnew IDXGIDecodeSwapChain(ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIFactoryMedia>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactoryMedia);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactoryMedia* () { return (_ref); }
        };
    }
}