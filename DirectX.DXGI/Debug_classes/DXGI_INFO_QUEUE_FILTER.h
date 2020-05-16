#pragma once

#include "DXGI_INFO_QUEUE_FILTER_DESC.h"
#include "../IUnmanagedReference.h"

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public ref class DXGI_INFO_QUEUE_FILTER : IUnmanagedReference<::DXGI_INFO_QUEUE_FILTER>
            {
            public:
                DXGI_INFO_QUEUE_FILTER() 
                { 
                    _value = new ::DXGI_INFO_QUEUE_FILTER(); 
                    AllowList = gcnew DXGI_INFO_QUEUE_FILTER_DESC(&_value->AllowList);
                    DenyList = gcnew DXGI_INFO_QUEUE_FILTER_DESC(&_value->DenyList);
                }
                DXGI_INFO_QUEUE_FILTER(::DXGI_INFO_QUEUE_FILTER* value) 
                { 
                    _value = value;
                    AllowList = gcnew DXGI_INFO_QUEUE_FILTER_DESC(&_value->AllowList);
                    DenyList = gcnew DXGI_INFO_QUEUE_FILTER_DESC(&_value->DenyList);
                }
                DXGI_INFO_QUEUE_FILTER(IntPtr location, ::DXGI_INFO_QUEUE_FILTER* value)
                {
                    _value = (::DXGI_INFO_QUEUE_FILTER*)location.ToPointer();
                    IUnmanagedReference_Location_Constructor(_value, value);
                    AllowList = gcnew DXGI_INFO_QUEUE_FILTER_DESC(&_value->AllowList);
                    DenyList = gcnew DXGI_INFO_QUEUE_FILTER_DESC(&_value->DenyList);
                }

                DXGI_INFO_QUEUE_FILTER_DESC^ AllowList;
                DXGI_INFO_QUEUE_FILTER_DESC^ DenyList;

                UnmanagedOperator(::DXGI_INFO_QUEUE_FILTER)
            };
        }
    }
}