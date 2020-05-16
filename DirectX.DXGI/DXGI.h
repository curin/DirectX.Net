#pragma once

#undef DXGI_CPU_ACCESS_NONE
#undef DXGI_CPU_ACCESS_DYNAMIC
#undef DXGI_CPU_ACCESS_READ_WRITE
#undef DXGI_CPU_ACCESS_SCRATCH
#undef DXGI_CPU_ACCESS_FIELD
#undef DXGI_USAGE_SHADER_INPUT
#undef DXGI_USAGE_RENDER_TARGET_OUTPUT
#undef DXGI_USAGE_BACK_BUFFER
#undef DXGI_USAGE_SHARED
#undef DXGI_USAGE_READ_ONLY
#undef DXGI_USAGE_DISCARD_ON_PRESENT
#undef DXGI_USAGE_UNORDERED_ACCESS
#undef	DXGI_RESOURCE_PRIORITY_MINIMUM
#undef	DXGI_RESOURCE_PRIORITY_LOW
#undef	DXGI_RESOURCE_PRIORITY_NORMAL
#undef	DXGI_RESOURCE_PRIORITY_HIGH
#undef	DXGI_RESOURCE_PRIORITY_MAXIMUM
#undef	DXGI_MAP_READ
#undef	DXGI_MAP_WRITE
#undef	DXGI_MAP_DISCARD
#undef	DXGI_ENUM_MODES_INTERLACED
#undef	DXGI_ENUM_MODES_SCALING
#undef DXGI_MAX_SWAP_CHAIN_BUFFERS
#undef DXGI_PRESENT_TEST
#undef DXGI_PRESENT_DO_NOT_SEQUENCE
#undef DXGI_PRESENT_RESTART  
#undef DXGI_PRESENT_DO_NOT_WAIT 
#undef DXGI_PRESENT_STEREO_PREFER_RIGHT 
#undef DXGI_PRESENT_STEREO_TEMPORARY_MONO
#undef DXGI_PRESENT_RESTRICT_TO_OUTPUT
#undef DXGI_PRESENT_USE_DURATION 
#undef DXGI_PRESENT_ALLOW_TEARING
#undef DXGI_STANDARD_MULTISAMPLE_QUALITY_PATTERN
#undef DXGI_CENTER_MULTISAMPLE_QUALITY_PATTERN
#undef DXGI_FORMAT_DEFINED

namespace DirectX
{
    namespace DXGI
    {
        public ref class DXGI
        {
            property unsigned int DXGI_FORMAT_DEFINED { unsigned int get() { return  1; } }
            property unsigned int DXGI_STANDARD_MULTISAMPLE_QUALITY_PATTERN { unsigned int get() { return  0xffffffff; } }
            property unsigned int DXGI_CENTER_MULTISAMPLE_QUALITY_PATTERN { unsigned int get() { return  0xfffffffe; } }
            property unsigned int DXGI_CPU_ACCESS_NONE { unsigned int get() { return 0; } }
            property unsigned int DXGI_CPU_ACCESS_DYNAMIC { unsigned int get() { return 1; } }
            property unsigned int DXGI_CPU_ACCESS_READ_WRITE { unsigned int get() { return 2; } }
            property unsigned int DXGI_CPU_ACCESS_SCRATCH { unsigned int get() { return 3; } }
            property unsigned int DXGI_CPU_ACCESS_FIELD { unsigned int get() { return 15; } }
            property unsigned int DXGI_USAGE_SHADER_INPUT { unsigned int get() { return 0x00000010UL; } }
            property unsigned int DXGI_USAGE_RENDER_TARGET_OUTPUT { unsigned int get() { return 0x00000020UL; } }
            property unsigned int DXGI_USAGE_BACK_BUFFER { unsigned int get() { return 0x00000040UL; } }
            property unsigned int DXGI_USAGE_SHARED { unsigned int get() { return 0x00000080UL; } }
            property unsigned int DXGI_USAGE_READ_ONLY { unsigned int get() { return 0x00000100UL; } }
            property unsigned int DXGI_USAGE_DISCARD_ON_PRESENT { unsigned int get() { return 0x00000200UL; } }
            property unsigned int DXGI_USAGE_UNORDERED_ACCESS { unsigned int get() { return 0x00000400UL; } }
            property unsigned int DXGI_RESOURCE_PRIORITY_MINIMUM{ unsigned int get() { return 0x28000000; } }
            property unsigned int DXGI_RESOURCE_PRIORITY_LOW{ unsigned int get() { return 0x50000000; } }
            property unsigned int DXGI_RESOURCE_PRIORITY_NORMAL { unsigned int get() { return 0x78000000; } }
            property unsigned int DXGI_RESOURCE_PRIORITY_HIGH { unsigned int get() { return  0xa0000000; } }
            property unsigned int DXGI_RESOURCE_PRIORITY_MAXIMUM { unsigned int get() { return  0xc8000000; } }
            property unsigned long DXGI_MAP_READ { unsigned long get() { return  1UL; } }
            property unsigned long DXGI_MAP_WRITE { unsigned long get() { return  2UL; } }
            property unsigned long DXGI_MAP_DISCARD { unsigned long get() { return  4UL; } }
            property unsigned long DXGI_ENUM_MODES_INTERLACED { unsigned long get() { return  1UL; } }
            property unsigned long DXGI_ENUM_MODES_SCALING { unsigned long get() { return  2UL; } }
            property unsigned int DXGI_MAX_SWAP_CHAIN_BUFFERS { unsigned int get() { return  16; } }
            property unsigned long DXGI_PRESENT_TEST { unsigned long get() { return  0x00000001UL; } }
            property unsigned long DXGI_PRESENT_DO_NOT_SEQUENCE { unsigned long get() { return  0x00000002UL; } }
            property unsigned long DXGI_PRESENT_RESTART { unsigned long get() { return  0x00000004UL; } }
            property unsigned long DXGI_PRESENT_DO_NOT_WAIT { unsigned long get() { return  0x00000008UL; } }
            property unsigned long DXGI_PRESENT_STEREO_PREFER_RIGHT { unsigned long get() { return  0x00000010UL; } }
            property unsigned long DXGI_PRESENT_STEREO_TEMPORARY_MONO { unsigned long get() { return  0x00000020UL; } }
            property unsigned long DXGI_PRESENT_RESTRICT_TO_OUTPUT { unsigned long get() { return  0x00000040UL; } }
            property unsigned long DXGI_PRESENT_USE_DURATION { unsigned long get() { return  0x00000100UL; } }
            property unsigned long DXGI_PRESENT_ALLOW_TEARING { unsigned long get() { return  0x00000200UL; } }
        };
    }
}