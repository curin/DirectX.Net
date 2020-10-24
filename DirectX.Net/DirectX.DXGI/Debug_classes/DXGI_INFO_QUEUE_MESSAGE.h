#pragma once

#include "DXGI_INFO_QUEUE_MESSAGE_CATEGORY.h"
#include "DXGI_INFO_QUEUE_MESSAGE_SEVERITY.h"
#include "../IDXGIObject.h"
#include "../IUnmanagedReference.h"

using namespace System;

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public ref class DXGI_INFO_QUEUE_MESSAGE : IUnmanagedReference<::DXGI_INFO_QUEUE_MESSAGE>
            {
            public:
                DXGI_INFO_QUEUE_MESSAGE() { _value = new ::DXGI_INFO_QUEUE_MESSAGE(); }
                DXGI_INFO_QUEUE_MESSAGE(int Size) { _value = (::DXGI_INFO_QUEUE_MESSAGE*)malloc(Size);}
                DXGI_INFO_QUEUE_MESSAGE(::DXGI_INFO_QUEUE_MESSAGE* value) { _value = value; }
                DXGI_INFO_QUEUE_MESSAGE(IntPtr location, ::DXGI_INFO_QUEUE_MESSAGE* value) 
                { 
                    _value = (::DXGI_INFO_QUEUE_MESSAGE*)location.ToPointer(); 
                    IUnmanagedReference_Location_Constructor(_value, value);
                }

                property Guid Producer { Guid get() { return FromGUID(_value->Producer); } void set(Guid value) { _value->Producer = ToGUID(value); }}
                UnmanagedReferenceCastedProperty(DXGI_INFO_QUEUE_MESSAGE_CATEGORY, ::DXGI_INFO_QUEUE_MESSAGE_CATEGORY, Category)
                UnmanagedReferenceCastedProperty(DXGI_INFO_QUEUE_MESSAGE_SEVERITY, ::DXGI_INFO_QUEUE_MESSAGE_SEVERITY, Severity)
                UnmanagedReferenceProperty(int, ID)
                property String^ pDescription { String^ get() { return Marshal::PtrToStringAnsi(static_cast<IntPtr>((void*)_value->pDescription)); } }
                UnmanagedReferenceProperty(size_t, DescriptionByteLength)

                UnmanagedOperator(::DXGI_INFO_QUEUE_MESSAGE)
            };
        }
    }
}