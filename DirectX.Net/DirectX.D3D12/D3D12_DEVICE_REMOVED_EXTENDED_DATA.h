#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

#include "D3D12_DRED_FLAGS.h"
#include "D3D12_AUTO_BREADCRUMB_NODE.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_DEVICE_REMOVED_EXTENDED_DATA
        {
            D3D12_DRED_FLAGS Flags;
            IntPtr pHeadAutoBreadcrumbNode;//D3D12_AUTO_BREADCRUMB_NODE*

            property D3D12_AUTO_BREADCRUMB_NODE HeadAutoBreadcrumbNode
            {
                D3D12_AUTO_BREADCRUMB_NODE get()
                {
                    return *(D3D12_AUTO_BREADCRUMB_NODE*)pHeadAutoBreadcrumbNode.ToPointer();
                }
                void set(D3D12_AUTO_BREADCRUMB_NODE value)
                {
                    (*(D3D12_AUTO_BREADCRUMB_NODE*)pHeadAutoBreadcrumbNode.ToPointer()) = value;
                }
            }
        };
    }
}