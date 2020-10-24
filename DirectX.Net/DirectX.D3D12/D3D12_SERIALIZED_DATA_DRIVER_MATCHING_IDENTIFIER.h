#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER
        {
            Guid DriverOpaqueGUID;
        private:
            unsigned char Value0;
            unsigned char Value1;
            unsigned char Value2;
            unsigned char Value3;
            unsigned char Value4;
            unsigned char Value5;
            unsigned char Value6;
            unsigned char Value7;
            unsigned char Value8;
            unsigned char Value9;
            unsigned char Value10;
            unsigned char Value11;
            unsigned char Value12;
            unsigned char Value13;
            unsigned char Value14;
            unsigned char Value15;
        public:
            property array<unsigned char>^ DriverOpaqueVersioningData_Get
            {
                array<unsigned char>^ get()
                {

                }
            }
        };
    }
}