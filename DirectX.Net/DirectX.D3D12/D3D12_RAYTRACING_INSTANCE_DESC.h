#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_RAYTRACING_INSTANCE_DESC
        {
        private:
#pragma region Hidden
            float Transform0;
            float Transform1;
            float Transform2;
            float Transform3;
            float Transform4;
            float Transform5;
            float Transform6;
            float Transform7;
            float Transform8;
            float Transform9;
            float Transform10;
            float Transform11;
#pragma endregion

            unsigned int InstanceIDMask;
            unsigned int InstanceContAndFlags;
        public:
            unsigned long long AccelerationStructure;

            property UnmanagedDIArray_Float^ Transform//[3][4]
            {
                UnmanagedDIArray_Float^ get()
                {
                    pin_ptr<float> loc = &Transform0;
                    return gcnew UnmanagedDIArray_Float(loc, 3, 4);
                }
            }

            property unsigned int InstanceID// : 24;
            {
                unsigned int get()
                {
                    return InstanceIDMask & 0x00FFFFFF;
                }
                void set(unsigned int value)
                {
                    InstanceIDMask = (value & 0x00FFFFFF) | (InstanceIDMask & 0xFF000000);
                }
            }

            property unsigned int InstanceMask// : 8;
            {
                unsigned int get()
                {
                    return (InstanceIDMask & 0xFF000000) >> 24;
                }
                void set(unsigned int value)
                {
                    value <<= 24;
                    InstanceIDMask = (InstanceIDMask & 0x00FFFFFF) | (value & 0xFF000000);
                }
            }

            property unsigned int InstanceContributionToHitGroupIndex// : 24;
            {
                unsigned int get()
                {
                    return InstanceContAndFlags & 0x00FFFFFF;
                }
                void set(unsigned int value)
                {
                    InstanceContAndFlags = (value & 0x00FFFFFF) | (InstanceContAndFlags & 0xFF000000);
                }
            }

            property unsigned int Flags// : 8;
            {
                unsigned int get()
                {
                    return (InstanceContAndFlags & 0xFF000000) >> 24;
                }
                void set(unsigned int value)
                {
                    value <<= 24;
                    InstanceContAndFlags = (InstanceContAndFlags & 0x00FFFFFF) | (value & 0xFF000000);
                }
            }
        };
    }
}