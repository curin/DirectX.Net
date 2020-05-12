#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_SAMPLE_DESC
        {
            unsigned int Count;
            unsigned int Quality;

            DXGI_SAMPLE_DESC(unsigned int count, unsigned int quality)
            {
                Count = count;
                Quality = quality;
            }
        };
    }
}