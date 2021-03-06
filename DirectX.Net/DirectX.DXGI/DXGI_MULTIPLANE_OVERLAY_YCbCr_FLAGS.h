#pragma once

namespace DirectX
{
    namespace DXGI
    {
        public enum class DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS
        {
            DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAG_NOMINAL_RANGE = 0x1,
            DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAG_BT709 = 0x2,
            DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAG_xvYCC = 0x4
        };
    }
}