#pragma once

#include <dxgi.h>

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    Guid FromGUID(_GUID guid) {
        return Guid(guid.Data1, guid.Data2, guid.Data3,
            guid.Data4[0], guid.Data4[1],
            guid.Data4[2], guid.Data4[3],
            guid.Data4[4], guid.Data4[5],
            guid.Data4[6], guid.Data4[7]);
    }

    _GUID ToGUID(Guid& guid) {
        array<Byte>^ guidData = guid.ToByteArray();
        pin_ptr<Byte> data = &(guidData[0]);

        return *(_GUID*)data;
    }

    template<class T>
    _GUID GetGUID(T* ptr)
    {
        return __uuidof(ptr);
    }

    namespace DXGI
    {
        public ref class IDXGIObject : public IUnknown
        {
            ::IDXGIObject* _ref;
        public:
            IDXGIObject(IntPtr pointer) : IUnknown(pointer) { _ref = (::IDXGIObject*)pointer.ToPointer(); }
            IDXGIObject(void* pointer) : IUnknown(pointer) { _ref = (::IDXGIObject*)pointer; }

            long SetPrivateData(Guid Name, unsigned int DataSize, IntPtr pData)
            {
                pin_ptr<IntPtr> pDat = &pData;
                return (_ref)->SetPrivateData(ToGUID(Name), DataSize, pDat);
            }

            long SetPrivateDataInterface(Guid Name, IUnknown^ pUnknown)
            {
                void* ppUn = pUnknown->Pointer.ToPointer();
                return (_ref)->SetPrivateDataInterface(ToGUID(Name), (::IUnknown*)ppUn);
            }

            long GetPrivateData(Guid Name, unsigned int% pDataSize, [Out] IntPtr% pData)
            {
                pin_ptr<IntPtr> pDat = &pData;
                pin_ptr<unsigned int> pSize = &pDataSize;
                return (_ref)->GetPrivateData(ToGUID(Name), pSize, pDat);
            }

            long GetParent(Guid riid,[Out] IntPtr% ppParent)
            {
                void** ppPar;
                long ret = (_ref)->GetParent(ToGUID(riid), ppPar);
                ppParent = IntPtr(*ppPar);
                return ret;
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIObject>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIObject);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIObject* () { return (_ref); }
        };
    }
}