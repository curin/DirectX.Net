#pragma once
#include <dxgi1_6.h>
#include "IDXGIFactory5.h"
#include "IDXGIAdapter.h"
#include "IDXGIAdapter1.h"
#include "IDXGIAdapter2.h"
#include "IDXGIAdapter3.h"
#include "IDXGIAdapter4.h"
#include "DXGI_GPU_PREFERENCE.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIFactory6 : IDXGIFactory5
        {
            ::IDXGIFactory6* _ref;
        public:
            IDXGIFactory6(IntPtr pointer) : IDXGIFactory5(pointer) { _ref = (::IDXGIFactory6*)pointer.ToPointer(); }
            IDXGIFactory6(void* pointer) : IDXGIFactory5(pointer) { _ref = (::IDXGIFactory6*)pointer; }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, Guid riid, [Out] IntPtr% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, ToGUID(riid), ppOut);
                ppvAdapter = IntPtr(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, Guid riid, [Out] IDXGIAdapter^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, Guid riid, [Out] IDXGIAdapter1^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter1(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, Guid riid, [Out] IDXGIAdapter2^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter2(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, Guid riid, [Out] IDXGIAdapter3^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter3(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, Guid riid, [Out] IDXGIAdapter4^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter4(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, [Out] IDXGIAdapter^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, IDXGIAdapter::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, [Out] IDXGIAdapter1^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, IDXGIAdapter1::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter1(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, [Out] IDXGIAdapter2^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, IDXGIAdapter2::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter2(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, [Out] IDXGIAdapter3^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, IDXGIAdapter3::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter3(*ppOut);
                return ret;
            }

            long EnumAdapterByGpuPreference(unsigned int Adapter, DXGI_GPU_PREFERENCE GpuPreference, [Out] IDXGIAdapter4^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumAdapterByGpuPreference(Adapter, (::DXGI_GPU_PREFERENCE)GpuPreference, IDXGIAdapter4::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter4(*ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIFactory6>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory6);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory6* () { return (_ref); }
        };
    }
}