#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RT_FORMAT_ARRAY
        {
        private:
#pragma region Hidden
            DirectX::DXGI::DXGI_FORMAT RTFormats0;
            DirectX::DXGI::DXGI_FORMAT RTFormats1;
            DirectX::DXGI::DXGI_FORMAT RTFormats2;
            DirectX::DXGI::DXGI_FORMAT RTFormats3;
            DirectX::DXGI::DXGI_FORMAT RTFormats4;
            DirectX::DXGI::DXGI_FORMAT RTFormats5;
            DirectX::DXGI::DXGI_FORMAT RTFormats6;
            DirectX::DXGI::DXGI_FORMAT RTFormats7;
#pragma endregion
        public:
            property UnmanagedArray_DXGI_FORMAT^ RTFormats
            {
                UnmanagedArray_DXGI_FORMAT^ get()
                {
                    pin_ptr< DirectX::DXGI::DXGI_FORMAT> loc = &RTFormats0;
                    return gcnew UnmanagedArray_DXGI_FORMAT(loc, 8);
                }
            }
            unsigned int NumRenderTargets;
        };
    }
}