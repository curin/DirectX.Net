#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        /// <summary>
        /// Describes a mapped rectangle that is used to access a surface.
        /// </summary>
        public value struct DXGI_MAPPED_RECT
        {
            /// <summary>
            /// A value that describes the width, in bytes, of the surface.
            /// </summary>
            int Pitch;
            /// <summary>
            /// A pointer to the image buffer of the surface
            /// Type: unsigned char
            /// </summary>
            IntPtr pBits;
        };
    }
}