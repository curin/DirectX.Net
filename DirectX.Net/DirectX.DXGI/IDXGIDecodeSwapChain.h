#pragma once

#include <dxgi1_3.h>
#include "IDXGIObject.h"
#include "DXGI_DECODE_SWAP_CHAIN_DESC.h"
#include "DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIDecodeSwapChain : public IUnknown
        {
            ::IDXGIDecodeSwapChain* _ref;
        public:
            IDXGIDecodeSwapChain(IntPtr pointer) : IUnknown(pointer) { _ref = (::IDXGIDecodeSwapChain*)pointer.ToPointer(); }
            IDXGIDecodeSwapChain(void* pointer) : IUnknown(pointer) { _ref = (::IDXGIDecodeSwapChain*)pointer; }

            long PresentBuffer(unsigned int BufferToPresent, unsigned int SyncInterval, unsigned int Flags)
            {
                return _ref->PresentBuffer(BufferToPresent, SyncInterval, Flags);
            }

            long SetSourceRect(RECT% pRect)
            {
                pin_ptr<RECT> rect = &pRect;
                return _ref->SetSourceRect((::RECT*)rect);
            }

            long SetTargetRect(RECT% pRect)
            {
                pin_ptr<RECT> rect = &pRect;
                return _ref->SetTargetRect((::RECT*)rect);
            }

            long SetDestSize(unsigned int Width, unsigned int Height)
            {
                return _ref->SetDestSize(Width, Height);
            }

            long GetSourceRect([Out]  RECT% pRect)
            {
                pin_ptr<RECT> rect = &pRect;
                return _ref->GetSourceRect((::RECT*)rect);
            }

            long GetTargetRect([Out]  RECT% pRect)
            {
                pin_ptr<RECT> rect = &pRect;
                return _ref->GetTargetRect((::RECT*)rect);
            }

            long GetDestSize([Out]  unsigned int% pWidth, [Out]  unsigned int% pHeight)
            {
                pin_ptr<unsigned int> width = &pWidth;
                pin_ptr<unsigned int> height = &pHeight;
                return _ref->GetDestSize(width, height);
            }

            long SetColorSpace(DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace)
            {
                return _ref->SetColorSpace((::DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS)ColorSpace);
            }

            DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS GetColorSpace()
            {
                return (DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS)_ref->GetColorSpace();
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIDecodeSwapChain>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIDecodeSwapChain);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIDecodeSwapChain* () { return (_ref); }
        };
    }
}