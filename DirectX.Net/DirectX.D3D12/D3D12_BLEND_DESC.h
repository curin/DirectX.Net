#pragma once

#include "D3D12_RENDER_TARGET_BLEND_DESC.h"
#include "D3D12UnmanagedArray.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_BLEND_DESC
        {
            int AlphaToCoverageEnable;
            int IndependentBlendEnable;
        private:
#pragma region Hidden
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget0;
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget1;
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget2;
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget3;
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget4;
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget5;
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget6;
            D3D12_RENDER_TARGET_BLEND_DESC RenderTarget7;
#pragma endregion
        public:
            property UnmanagedArray_D3D12_RENDER_TARGET_BLEND_DESC^ RenderTarget
            {
                UnmanagedArray_D3D12_RENDER_TARGET_BLEND_DESC^ get()
                {
                    pin_ptr<D3D12_RENDER_TARGET_BLEND_DESC> loc = &RenderTarget0;
                    return gcnew UnmanagedArray_D3D12_RENDER_TARGET_BLEND_DESC(loc, 8);
                }
            }
        };
    }
}