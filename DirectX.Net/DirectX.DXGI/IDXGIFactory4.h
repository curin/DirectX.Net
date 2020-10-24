#pragma once
#include <dxgi1_4.h>
#include "IDXGIFactory3.h"
#include "IDXGIAdapter.h"
#include "IDXGIAdapter1.h"
#include "IDXGIAdapter2.h"
#include "IDXGIAdapter3.h"
#include "IDXGIAdapter4.h"

namespace DirectX
{
    namespace DXGI
    {
        long IDXGIFactory4_EnumAdapterByLuid(::IDXGIFactory4* _ref, ::LUID* AdapterLuid, GUID riid, void** ppvAdapter) { return _ref->EnumAdapterByLuid(*AdapterLuid, riid, ppvAdapter); }
        public ref class IDXGIFactory4 : IDXGIFactory3
        {
            ::IDXGIFactory4* _ref;
        public:
            IDXGIFactory4(IntPtr pointer) : IDXGIFactory3(pointer) { _ref = (::IDXGIFactory4*)pointer.ToPointer(); }
            IDXGIFactory4(void* pointer) : IDXGIFactory3(pointer) { _ref = (::IDXGIFactory4*)pointer; }

            long EnumAdapterByLuid(LUID AdapterLuid, Guid riid, [Out] IntPtr% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, ToGUID(riid), ppOut);
                ppvAdapter = IntPtr(*ppOut);
                return ret;
            }

            long EnumWarpAdapter(Guid riid, [Out] IntPtr% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(ToGUID(riid), ppOut);
                ppvAdapter = IntPtr(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, Guid riid, [Out] IDXGIAdapter^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            long EnumWarpAdapter(Guid riid, [Out] IDXGIAdapter^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, [Out] IDXGIAdapter^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, IDXGIAdapter::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            long EnumWarpAdapter([Out] IDXGIAdapter^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(IDXGIAdapter::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, Guid riid, [Out] IDXGIAdapter1^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter1(*ppOut);
                return ret;
            }

            long EnumWarpAdapter(Guid riid, [Out] IDXGIAdapter1^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter1(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, [Out] IDXGIAdapter1^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, IDXGIAdapter1::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter1(*ppOut);
                return ret;
            }

            long EnumWarpAdapter([Out] IDXGIAdapter1^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(IDXGIAdapter1::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter1(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, Guid riid, [Out] IDXGIAdapter2^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter2(*ppOut);
                return ret;
            }

            long EnumWarpAdapter(Guid riid, [Out] IDXGIAdapter2^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter2(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, [Out] IDXGIAdapter2^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, IDXGIAdapter2::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter2(*ppOut);
                return ret;
            }

            long EnumWarpAdapter([Out] IDXGIAdapter2^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(IDXGIAdapter2::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter2(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, Guid riid, [Out] IDXGIAdapter3^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter3(*ppOut);
                return ret;
            }

            long EnumWarpAdapter(Guid riid, [Out] IDXGIAdapter3^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter3(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, [Out] IDXGIAdapter3^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, IDXGIAdapter3::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter3(*ppOut);
                return ret;
            }

            long EnumWarpAdapter([Out] IDXGIAdapter3^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(IDXGIAdapter3::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter3(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, Guid riid, [Out] IDXGIAdapter4^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter4(*ppOut);
                return ret;
            }

            long EnumWarpAdapter(Guid riid, [Out] IDXGIAdapter4^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(ToGUID(riid), ppOut);
                ppvAdapter = gcnew IDXGIAdapter4(*ppOut);
                return ret;
            }

            long EnumAdapterByLuid(LUID AdapterLuid, [Out] IDXGIAdapter4^% ppvAdapter)
            {
                void** ppOut;
                pin_ptr<LUID> adapter = &AdapterLuid;
                long ret = IDXGIFactory4_EnumAdapterByLuid(_ref, (::LUID*)adapter, IDXGIAdapter4::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter4(*ppOut);
                return ret;
            }

            long EnumWarpAdapter([Out] IDXGIAdapter4^% ppvAdapter)
            {
                void** ppOut;
                long ret = _ref->EnumWarpAdapter(IDXGIAdapter4::GetGUID(), ppOut);
                ppvAdapter = gcnew IDXGIAdapter4(*ppOut);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::DXGI::GetGUID<::IDXGIFactory4>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIFactory4);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIFactory4* () { return (_ref); }
        };
    }
}