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
#undef	DXGI_ENUM_MODES_STEREO
#undef	DXGI_ENUM_MODES_DISABLED_STEREO
#undef	DXGI_SHARED_RESOURCE_READ
#undef	DXGI_SHARED_RESOURCE_WRITE

namespace DirectX
{
    namespace DXGI
    {
        public ref class DXGI
        {
        public:
            static const unsigned int DXGI_FORMAT_DEFINED = 1; 
            static const unsigned int DXGI_STANDARD_MULTISAMPLE_QUALITY_PATTERN = 0xffffffff; 
            static const unsigned int DXGI_CENTER_MULTISAMPLE_QUALITY_PATTERN = 0xfffffffe; 
            static const unsigned int DXGI_CPU_ACCESS_NONE = 0; 
            static const unsigned int DXGI_CPU_ACCESS_DYNAMIC = 1; 
            static const unsigned int DXGI_CPU_ACCESS_READ_WRITE = 2; 
            static const unsigned int DXGI_CPU_ACCESS_SCRATCH = 3; 
            static const unsigned int DXGI_CPU_ACCESS_FIELD = 15; 
            static const unsigned int DXGI_USAGE_SHADER_INPUT = 0x00000010UL; 
            static const unsigned int DXGI_USAGE_RENDER_TARGET_OUTPUT = 0x00000020UL; 
            static const unsigned int DXGI_USAGE_BACK_BUFFER = 0x00000040UL; 
            static const unsigned int DXGI_USAGE_SHARED = 0x00000080UL; 
            static const unsigned int DXGI_USAGE_READ_ONLY = 0x00000100UL; 
            static const unsigned int DXGI_USAGE_DISCARD_ON_PRESENT = 0x00000200UL; 
            static const unsigned int DXGI_USAGE_UNORDERED_ACCESS = 0x00000400UL; 
            static const unsigned int DXGI_RESOURCE_PRIORITY_MINIMUM = 0x28000000; 
            static const unsigned int DXGI_RESOURCE_PRIORITY_LOW = 0x50000000; 
            static const unsigned int DXGI_RESOURCE_PRIORITY_NORMAL = 0x78000000; 
            static const unsigned int DXGI_RESOURCE_PRIORITY_HIGH = 0xa0000000; 
            static const unsigned int DXGI_RESOURCE_PRIORITY_MAXIMUM = 0xc8000000; 
            static const unsigned long DXGI_MAP_READ = 1UL; 
            static const unsigned long DXGI_MAP_WRITE = 2UL; 
            static const unsigned long DXGI_MAP_DISCARD = 4UL; 
            static const unsigned long DXGI_ENUM_MODES_INTERLACED = 1UL; 
            static const unsigned long DXGI_ENUM_MODES_SCALING = 2UL; 
            static const unsigned int DXGI_MAX_SWAP_CHAIN_BUFFERS = 16; 
            static const unsigned long DXGI_PRESENT_TEST = 0x00000001UL; 
            static const unsigned long DXGI_PRESENT_DO_NOT_SEQUENCE = 0x00000002UL; 
            static const unsigned long DXGI_PRESENT_RESTART = 0x00000004UL; 
            static const unsigned long DXGI_PRESENT_DO_NOT_WAIT = 0x00000008UL; 
            static const unsigned long DXGI_PRESENT_STEREO_PREFER_RIGHT = 0x00000010UL; 
            static const unsigned long DXGI_PRESENT_STEREO_TEMPORARY_MONO = 0x00000020UL; 
            static const unsigned long DXGI_PRESENT_RESTRICT_TO_OUTPUT = 0x00000040UL; 
            static const unsigned long DXGI_PRESENT_USE_DURATION = 0x00000100UL; 
            static const unsigned long DXGI_PRESENT_ALLOW_TEARING = 0x00000200UL;
            static const unsigned long DXGI_ENUM_MODES_STEREO = 4UL;
            static const unsigned long DXGI_ENUM_MODES_DISABLED_STEREO = 8UL;
            static const long DXGI_SHARED_RESOURCE_READ = 0x80000000L;
            static const int DXGI_SHARED_RESOURCE_WRITE = 1;

            [DllImport("DXGI.dll")]
            static long CreateDXGIFactory(GUID riid, void** ppFactory);
            [DllImport("DXGI.dll")]
            static long CreateDXGIFactory1(GUID riid, void** ppFactory);

            static long CreateDXGIFactory(Guid riid, [Out]IntPtr% ppFactory)
            {
                void** ppOut;
                long ret = CreateDXGIFactory(ToGUID(riid), ppOut);
                ppFactory = IntPtr(*ppOut);
                return ret;
            }

            static long CreateDXGIFactory([Out]IDXGIFactory^ ppFactory)
            {
                void** ppOut;
                long ret = CreateDXGIFactory(IDXGIFactory::GetGUID(), ppOut);
                ppFactory = gcnew IDXGIFactory(ppOut);
                return ret;
            }

            static long CreateDXGIFactory(Guid riid, [Out]IDXGIFactory^ ppFactory)
            {
                void** ppOut;
                long ret = CreateDXGIFactory(ToGUID(riid), ppOut);
                ppFactory = gcnew IDXGIFactory(ppOut);
                return ret;
            }

            static long CreateDXGIFactory1(Guid riid, [Out]IntPtr% ppFactory)
            {
                void** ppOut;
                long ret = CreateDXGIFactory1(ToGUID(riid), ppOut);
                ppFactory = IntPtr(*ppOut);
                return ret;
            }
        };
    }
}