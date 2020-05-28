#pragma once

#include <dxgi1_4.h>
#include "IDXGISwapChain2.h"
#include "DXGI_COLOR_SPACE_TYPE.h"
#include "DXGI_FORMAT.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISwapChain3 : IDXGISwapChain2
        {
            ::IDXGISwapChain3* _ref;
        public:
            IDXGISwapChain3(IntPtr pointer) : IDXGISwapChain2(pointer) { _ref = (::IDXGISwapChain3*)pointer.ToPointer(); }
            IDXGISwapChain3(void* pointer) : IDXGISwapChain2(pointer) { _ref = (::IDXGISwapChain3*)pointer; }

            unsigned int GetCurrentBackBufferIndex()
            {
                return _ref->GetCurrentBackBufferIndex();
            }

            long CheckColorSpaceSupport(DXGI_COLOR_SPACE_TYPE ColorSpace, [Out]  unsigned int% pColorSpaceSupport)
            {
                pin_ptr<unsigned int> colorSupport = &pColorSpaceSupport;
                return _ref->CheckColorSpaceSupport((::DXGI_COLOR_SPACE_TYPE)ColorSpace, colorSupport);
            }

            long SetColorSpace1(DXGI_COLOR_SPACE_TYPE ColorSpace)
            {
                return _ref->SetColorSpace1((::DXGI_COLOR_SPACE_TYPE)ColorSpace);
            }

            long ResizeBuffers1(unsigned int BufferCount, unsigned int Width, unsigned int Height, DXGI_FORMAT Format, unsigned int SwapChainFlags,
                array<unsigned int>^ pCreationNodeMask, array<DirectX::IUnknown^>^ ppPresentQueue)
            {
                ::IUnknown** temp = new ::IUnknown*[BufferCount];
                for (int i = 0; i < BufferCount; i++)
                    temp[i] = (::IUnknown*)ppPresentQueue[i]->Pointer.ToPointer();
                pin_ptr<unsigned int> creationNodeMask = &pCreationNodeMask[0];
                long ret = _ref->ResizeBuffers1(BufferCount, Width, Height, (::DXGI_FORMAT)Format, SwapChainFlags, creationNodeMask, temp);
                delete temp;
                return ret;
            }

            long ResizeBuffers1(unsigned int BufferCount, unsigned int Width, unsigned int Height, DXGI_FORMAT Format, unsigned int SwapChainFlags,
                array<unsigned int>^ pCreationNodeMask, IntPtr ppPresentQueue)
            {
                pin_ptr<unsigned int> creationNodeMask = &pCreationNodeMask[0];
                long ret = _ref->ResizeBuffers1(BufferCount, Width, Height, (::DXGI_FORMAT)Format, SwapChainFlags, creationNodeMask, (::IUnknown**)ppPresentQueue.ToPointer());
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGISwapChain3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISwapChain3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISwapChain3* () { return (_ref); }
        };
    }
}