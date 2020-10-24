#pragma once

#include <d3d12.h>

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
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

        public ref class ID3D12Object : public IUnknown
        {
            ::ID3D12Object* _ref;
        public:
            ID3D12Object(IntPtr pointer) : IUnknown(pointer) { _ref = (::ID3D12Object*)pointer.ToPointer(); }
            ID3D12Object(void* pointer) : IUnknown(pointer) { _ref = (::ID3D12Object*)pointer; }

            long SetPrivateData(Guid Name, unsigned int DataSize, IntPtr pData)
            {
                pin_ptr<IntPtr> pDat = &pData;
                return (_ref)->SetPrivateData(ToGUID(Name), DataSize, pDat);
            }

            long SetPrivateDataInterface(Guid Name, IUnknown^ pUnknown)
            {
                void* ppUn = nullptr;
                if (pUnknown != nullptr)
                    ppUn = pUnknown->Pointer.ToPointer();
                return (_ref)->SetPrivateDataInterface(ToGUID(Name), (::IUnknown*)ppUn);
            }

            long GetPrivateData(Guid Name, unsigned int% pDataSize, [Out] IntPtr% pData)
            {
                pin_ptr<IntPtr> pDat = &pData;
                pin_ptr<unsigned int> pSize = &pDataSize;
                return (_ref)->GetPrivateData(ToGUID(Name), pSize, pDat);
            }

            long SetName(String^ Name)
            {
                return _ref->SetName((LPCWSTR)Marshal::StringToBSTR(Name).ToPointer());
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Object>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Object);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Object* () { return (_ref); }
        };
    }
}