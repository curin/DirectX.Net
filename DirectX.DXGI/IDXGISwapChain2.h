#pragma once

#include <dxgi1_3.h>
#include "IDXGISwapChain1.h"
#include "IDXGIObject.h"
#include "DXGI_MATRIX_3X2_F.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGISwapChain2 : IDXGISwapChain1
        {
            ::IDXGISwapChain2* _ref;
        public:
            IDXGISwapChain2(IntPtr pointer) : IDXGISwapChain1(pointer) { _ref = (::IDXGISwapChain2*)pointer.ToPointer(); }
            IDXGISwapChain2(void* pointer) : IDXGISwapChain1(pointer) { _ref = (::IDXGISwapChain2*)pointer; }

            long SetSourceSize(unsigned int Width, unsigned int Height)
            {
                return _ref->SetSourceSize(Width, Height);
            }

            long GetSourceSize([Out] unsigned int% pWidth, [Out] unsigned int% pHeight)
            {
                pin_ptr<unsigned int> width = &pWidth;
                pin_ptr<unsigned int> height = &pHeight;
                return _ref->GetSourceSize(width, height);
            }

            long SetMaximumFrameLatency(unsigned int MaxLatency)
            {
                return _ref->SetMaximumFrameLatency(MaxLatency);
            }

            long GetMaximumFrameLatency([Out] unsigned int% pMaxLatency)
            {
                pin_ptr<unsigned int> latency = &pMaxLatency;
                return _ref->GetMaximumFrameLatency(latency);
            }

            IntPtr GetFrameLatencyWaitableObject()
            {
                return IntPtr(_ref->GetFrameLatencyWaitableObject());
            }

            long SetMatrixTransform(DXGI_MATRIX_3X2_F% pMatrix)
            {
                pin_ptr<DXGI_MATRIX_3X2_F> matrix = &pMatrix;
                return _ref->SetMatrixTransform((::DXGI_MATRIX_3X2_F*)matrix);
            }

            long GetMatrixTransform([Out] DXGI_MATRIX_3X2_F% pMatrix)
            {
                pin_ptr<DXGI_MATRIX_3X2_F> matrix = &pMatrix;
                return _ref->GetMatrixTransform((::DXGI_MATRIX_3X2_F*)matrix);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGISwapChain2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGISwapChain2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGISwapChain2* () { return (_ref); }
        };
    }
}