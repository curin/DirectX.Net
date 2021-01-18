#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Dragonbones::Native::Common;

#include "D3D12_AUTO_BREADCRUMB_OP.h"
#include "ID3D12GraphicsCommandList.h"
#include "ID3D12CommandQueue.h"
#include "D3D12_DRED_BREADCRUMB_CONTEXT.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_AUTO_BREADCRUMB_NODE1
        {
            IntPtr pCommandListDebugNameA; //char*
            IntPtr pCommandListDebugNameW; //wchar_t*
            IntPtr pCommandQueueDebugNameA; //char*
            IntPtr pCommandQueueDebugNameW; //wchar_t*
            IntPtr pCommandList; //ID3D12GraphicsCommandList*
            IntPtr pCommandQueue; //ID3D12CommandQueue*
            unsigned int BreadcrumbCount;
            UIntPtr pLastBreadcrumbValue;
            IntPtr pCommandHistory; //const D3D12_AUTO_BREADCRUMB_OP*
            IntPtr pNext; //const D3D12_AUTO_BREADCRUMB_NODE1*
            unsigned int BreadcrumbContextsCount;
            IntPtr pBreadcrumbContexts;//D3D12_DRED_BREADCRUMB_CONTEXT*

            property UnmanagedConstantString^ CommandListDebugNameA
            {
                UnmanagedConstantString^ get()
                {
                    return gcnew UnmanagedConstantString((char*)pCommandListDebugNameA.ToPointer());
                }
                void set(UnmanagedConstantString^ value)
                {
                    pCommandListDebugNameA = value->Pointer;
                }
            }

            property UnmanagedConstantWString^ CommandListDebugNameW
            {
                UnmanagedConstantWString^ get()
                {
                    return gcnew UnmanagedConstantWString((wchar_t*)pCommandListDebugNameW.ToPointer());
                }
                void set(UnmanagedConstantWString^ value)
                {
                    pCommandListDebugNameW = value->Pointer;
                }
            }

            property UnmanagedConstantString^ CommandQueueDebugNameA
            {
                UnmanagedConstantString^ get()
                {
                    return gcnew UnmanagedConstantString((char*)pCommandQueueDebugNameA.ToPointer());
                }
                void set(UnmanagedConstantString^ value)
                {
                    pCommandQueueDebugNameA = value->Pointer;
                }
            }

            property UnmanagedConstantWString^ CommandQueueDebugNameW
            {
                UnmanagedConstantWString^ get()
                {
                    return gcnew UnmanagedConstantWString((wchar_t*)pCommandQueueDebugNameW.ToPointer());
                }
                void set(UnmanagedConstantWString^ value)
                {
                    pCommandQueueDebugNameW = value->Pointer;
                }
            }

            property ID3D12GraphicsCommandList^ CommandList
            {
                ID3D12GraphicsCommandList^ get()
                {
                    return gcnew ID3D12GraphicsCommandList(pCommandList);
                }
                void set(ID3D12GraphicsCommandList^ value)
                {
                    pCommandList = value->Pointer;
                }
            }

            property ID3D12CommandQueue^ CommandQueue
            {
                ID3D12CommandQueue^ get()
                {
                    return gcnew ID3D12CommandQueue(pCommandQueue);
                }
                void set(ID3D12CommandQueue^ value)
                {
                    pCommandQueue = value->Pointer;
                }
            }

            property array<D3D12_AUTO_BREADCRUMB_OP>^ CommandHistory
            {
                array<D3D12_AUTO_BREADCRUMB_OP>^ get()
                {
                    array<D3D12_AUTO_BREADCRUMB_OP>^ ret = gcnew array<D3D12_AUTO_BREADCRUMB_OP>(BreadcrumbCount);
                    D3D12_AUTO_BREADCRUMB_OP* pEntries = (D3D12_AUTO_BREADCRUMB_OP*)pCommandHistory.ToPointer();
                    for (unsigned int i = 0; i < BreadcrumbCount; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_AUTO_BREADCRUMB_OP>^ value)
                {
                    if (value->Length > BreadcrumbCount)
                    {
                        BreadcrumbCount = value->Length;
                    }

                    D3D12_AUTO_BREADCRUMB_OP* pEntries = (D3D12_AUTO_BREADCRUMB_OP*)pCommandHistory.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void CommandHistory_new(size_t numElements)
            {
                pCommandHistory = IntPtr(new ::D3D12_AUTO_BREADCRUMB_OP[numElements]);
                BreadcrumbCount = numElements;
            }

            void CommandHistory_delete()
            {
                delete pCommandHistory.ToPointer();
            }

            D3D12_AUTO_BREADCRUMB_OP CommandHistory_get(size_t index)
            {
                D3D12_AUTO_BREADCRUMB_OP* pEntries = (D3D12_AUTO_BREADCRUMB_OP*)pCommandHistory.ToPointer();
                return pEntries[index];
            }

            void CommandHistory_set(size_t index, D3D12_AUTO_BREADCRUMB_OP value)
            {
                D3D12_AUTO_BREADCRUMB_OP* pEntries = (D3D12_AUTO_BREADCRUMB_OP*)pCommandHistory.ToPointer();
                pEntries[index] = value;
            }

            property D3D12_AUTO_BREADCRUMB_NODE1 Next
            {
                D3D12_AUTO_BREADCRUMB_NODE1 get()
                {
                    return *(D3D12_AUTO_BREADCRUMB_NODE1*)pNext.ToPointer();
                }
                void set(D3D12_AUTO_BREADCRUMB_NODE1 value)
                {
                    (*(D3D12_AUTO_BREADCRUMB_NODE1*)pNext.ToPointer()) = value;
                }
            }

            property unsigned int LastBreadcrumbValue
            {
                unsigned int get()
                {
                    return *(unsigned int*)pLastBreadcrumbValue.ToPointer();
                }
                void set(unsigned int value)
                {
                    *(unsigned int*)pLastBreadcrumbValue.ToPointer() = value;
                }
            }

            property array<D3D12_DRED_BREADCRUMB_CONTEXT>^ BreadcrumbContexts
            {
                array<D3D12_DRED_BREADCRUMB_CONTEXT>^ get()
                {
                    array<D3D12_DRED_BREADCRUMB_CONTEXT>^ ret = gcnew array<D3D12_DRED_BREADCRUMB_CONTEXT>(BreadcrumbContextsCount);
                    D3D12_DRED_BREADCRUMB_CONTEXT* pEntries = (D3D12_DRED_BREADCRUMB_CONTEXT*)pBreadcrumbContexts.ToPointer();
                    for (unsigned int i = 0; i < BreadcrumbContextsCount; i++)
                        ret[i] = pEntries[i];
                    return ret;
                }

                void set(array<D3D12_DRED_BREADCRUMB_CONTEXT>^ value)
                {
                    if (value->Length > BreadcrumbContextsCount)
                    {
                        BreadcrumbContextsCount = value->Length;
                    }

                    D3D12_DRED_BREADCRUMB_CONTEXT* pEntries = (D3D12_DRED_BREADCRUMB_CONTEXT*)pBreadcrumbContexts.ToPointer();
                    for (int i = 0; i < value->Length; i++)
                        pEntries[i] = value[i];
                }
            }

            void BreadcrumbContexts_new(size_t numElements)
            {
                pBreadcrumbContexts = IntPtr(new ::D3D12_DRED_BREADCRUMB_CONTEXT[numElements]);
                BreadcrumbContextsCount = numElements;
            }

            void BreadcrumbContexts_delete()
            {
                delete pBreadcrumbContexts.ToPointer();
            }

            D3D12_DRED_BREADCRUMB_CONTEXT BreadcrumbContexts_get(size_t index)
            {
                D3D12_DRED_BREADCRUMB_CONTEXT* pEntries = (D3D12_DRED_BREADCRUMB_CONTEXT*)pBreadcrumbContexts.ToPointer();
                return pEntries[index];
            }

            void BreadcrumbContexts_set(size_t index, D3D12_DRED_BREADCRUMB_CONTEXT value)
            {
                D3D12_DRED_BREADCRUMB_CONTEXT* pEntries = (D3D12_DRED_BREADCRUMB_CONTEXT*)pBreadcrumbContexts.ToPointer();
                pEntries[index] = value;
            }
        };
    }
}