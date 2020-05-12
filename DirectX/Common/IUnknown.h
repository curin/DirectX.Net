#pragma once

#include <Unknwnbase.h>

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

    long QueryUnknown(::IUnknown* unknown, GUID riid, void* out) { return unknown->QueryInterface(riid, &out); }

    public ref class IUnknown abstract
    {
    protected:
        IUnknown() { }
    public:
        IUnknown(IntPtr^ ptr) { Unknown = (::IUnknown*)ptr->ToPointer(); }

        virtual Guid getGuid()
        {
            return DirectX::FromGUID(getGUID());
        }
        virtual GUID getGUID() abstract;
        property ::IUnknown* Unknown { virtual ::IUnknown* get() abstract; virtual void set(::IUnknown* value) abstract; }
        property IntPtr^ Pointer { IntPtr^ get() { return gcnew IntPtr(Unknown); } }
        long QueryInterface(Guid riid, [Out] IntPtr^% out)
        {
            void** o;
            long ret = Unknown->QueryInterface(ToGUID(riid), o);
            out = gcnew IntPtr(*o);
            return ret;
        }

        ~IUnknown() 
        {
            Release();
            delete Unknown; 
        }

        unsigned long AddRef() { return Unknown->AddRef(); }
        unsigned long Release() { return Unknown->Release(); }

        generic<typename type>
            where type : IUnknown
            long QueryInterface([Out] type% out)
            {
                void* o = (void*)out->Unknown;
                return QueryUnknown(Unknown, getGUID(), o);
            }
    };
}