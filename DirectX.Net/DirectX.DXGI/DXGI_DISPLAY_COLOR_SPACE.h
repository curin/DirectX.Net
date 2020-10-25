#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_DISPLAY_COLOR_SPACE
        {
        private:
            float PrimaryCoordinates0;
            float PrimaryCoordinates1;
            float PrimaryCoordinates2;
            float PrimaryCoordinates3;
            float PrimaryCoordinates4;
            float PrimaryCoordinates5;
            float PrimaryCoordinates6;
            float PrimaryCoordinates7;
            float PrimaryCoordinates8;
            float PrimaryCoordinates9;
            float PrimaryCoordinates10;
            float PrimaryCoordinates11;
            float PrimaryCoordinates12;
            float PrimaryCoordinates13;
            float PrimaryCoordinates14;
            float PrimaryCoordinates15;

            float WhitePoints0;
            float WhitePoints1;
            float WhitePoints2;
            float WhitePoints3;
            float WhitePoints4;
            float WhitePoints5;
            float WhitePoints6;
            float WhitePoints7;
            float WhitePoints8;
            float WhitePoints9;
            float WhitePoints10;
            float WhitePoints11;
            float WhitePoints12;
            float WhitePoints13;
            float WhitePoints14;
            float WhitePoints15;
            float WhitePoints16;
            float WhitePoints17;
            float WhitePoints18;
            float WhitePoints19;
            float WhitePoints20;
            float WhitePoints21;
            float WhitePoints22;
            float WhitePoints23;
            float WhitePoints24;
            float WhitePoints25;
            float WhitePoints26;
            float WhitePoints27;
            float WhitePoints28;
            float WhitePoints29;
            float WhitePoints30;
            float WhitePoints31;
        public:
            property UnmanagedArray_Float^ PrimaryCoordinates
            {
                UnmanagedArray_Float^ get()
                {
                    pin_ptr<float> loc = &PrimaryCoordinates0;
                    return gcnew UnmanagedArray_Float(loc, 16);
                }
            }
            property UnmanagedArray_Float^ WhitePoints
            {
                UnmanagedArray_Float^ get()
                {
                    pin_ptr<float> loc = &WhitePoints0;
                    return gcnew UnmanagedArray_Float(loc, 32);
                }
            }
        };
    }
}