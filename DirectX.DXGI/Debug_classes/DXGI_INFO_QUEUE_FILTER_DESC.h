#pragma once

#include "DXGI_INFO_QUEUE_MESSAGE_CATEGORY.h"
#include "DXGI_INFO_QUEUE_MESSAGE_SEVERITY.h"
#include "../IUnmanagedReference.h"

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public ref class DXGI_INFO_QUEUE_FILTER_DESC : IUnmanagedReference<::DXGI_INFO_QUEUE_FILTER_DESC>
            {
            public:
                DXGI_INFO_QUEUE_FILTER_DESC() { _value = new ::DXGI_INFO_QUEUE_FILTER_DESC(); }
                DXGI_INFO_QUEUE_FILTER_DESC(::DXGI_INFO_QUEUE_FILTER_DESC* value) { _value = value; }
                DXGI_INFO_QUEUE_FILTER_DESC(IntPtr location, ::DXGI_INFO_QUEUE_FILTER_DESC* value)
                {
                    _value = (::DXGI_INFO_QUEUE_FILTER_DESC*)location.ToPointer();
                    IUnmanagedReference_Location_Constructor(_value, value);
                }

                UnmanagedReferenceProperty(unsigned int, NumCategories)
                DXGI_INFO_QUEUE_MESSAGE_CATEGORY pCategoryList_get(int index) { return (DXGI_INFO_QUEUE_MESSAGE_CATEGORY)_value->pCategoryList[index]; }
                array<DXGI_INFO_QUEUE_MESSAGE_CATEGORY>^ pCategoryList_copy()
                {
                    array<DXGI_INFO_QUEUE_MESSAGE_CATEGORY>^ ret = gcnew array<DXGI_INFO_QUEUE_MESSAGE_CATEGORY>(NumCategories);
                    for (int i = 0; i < NumCategories; i++)
                        ret[i] = (DXGI_INFO_QUEUE_MESSAGE_CATEGORY)_value->pCategoryList[i];
                    return ret;
                }
                void pCategoryList_set(int index, DXGI_INFO_QUEUE_MESSAGE_CATEGORY value) { _value->pCategoryList[index] = (::DXGI_INFO_QUEUE_MESSAGE_CATEGORY)value; }
                void pCategoryList_set(int index, array<DXGI_INFO_QUEUE_MESSAGE_CATEGORY>^ values) 
                { 
                    pin_ptr<DXGI_INFO_QUEUE_MESSAGE_CATEGORY> pV = &values[0];
                    ::DXGI_INFO_QUEUE_MESSAGE_CATEGORY* pVals = (::DXGI_INFO_QUEUE_MESSAGE_CATEGORY*)pV;
                    _value->pCategoryList = pVals; 
                }

                UnmanagedReferenceProperty(unsigned int, NumSeverities)
                DXGI_INFO_QUEUE_MESSAGE_SEVERITY pSeverityList_get(int index) { return (DXGI_INFO_QUEUE_MESSAGE_SEVERITY)_value->pSeverityList[index]; }
                array<DXGI_INFO_QUEUE_MESSAGE_SEVERITY>^ pSeverityList_copy()
                {
                    array<DXGI_INFO_QUEUE_MESSAGE_SEVERITY>^ ret = gcnew array<DXGI_INFO_QUEUE_MESSAGE_SEVERITY>(NumSeverities);
                    for (int i = 0; i < NumSeverities; i++)
                        ret[i] = (DXGI_INFO_QUEUE_MESSAGE_SEVERITY)_value->pSeverityList[i];
                    return ret;
                }
                void pSeverityList_set(int index, DXGI_INFO_QUEUE_MESSAGE_SEVERITY value) { _value->pSeverityList[index] = (::DXGI_INFO_QUEUE_MESSAGE_SEVERITY)value; }
                void pSeverityList_set(int index, array<DXGI_INFO_QUEUE_MESSAGE_SEVERITY>^ values)
                {
                    pin_ptr<DXGI_INFO_QUEUE_MESSAGE_SEVERITY> pV = &values[0];
                    ::DXGI_INFO_QUEUE_MESSAGE_SEVERITY* pVals = (::DXGI_INFO_QUEUE_MESSAGE_SEVERITY*)pV;
                    _value->pSeverityList = pVals;
                }

                UnmanagedReferenceProperty(unsigned int, NumIDs)
                int pIDList_get(int index) { return _value->pIDList[index]; }
                array<int>^ pIDList_copy()
                {
                    array<int>^ ret = gcnew array<int>(NumIDs);
                    for (int i = 0; i < NumIDs; i++)
                        ret[i] = _value->pIDList[i];
                    return ret;
                }
                void pIDList_set(int index, int value) { _value->pIDList[index] = value; }
                void pIDList_set(int index, array<int>^ values)
                {
                    pin_ptr<int> pV = &values[0];
                    _value->pIDList = pV;
                }

                UnmanagedOperator(::DXGI_INFO_QUEUE_FILTER_DESC)
            };
        }
    }
}