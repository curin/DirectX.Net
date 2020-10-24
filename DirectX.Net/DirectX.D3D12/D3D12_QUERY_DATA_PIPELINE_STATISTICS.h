#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_QUERY_DATA_PIPELINE_STATISTICS
        {
            unsigned long long IAVertices;
            unsigned long long IAPrimitives;
            unsigned long long VSInvocations;
            unsigned long long GSInvocations;
            unsigned long long GSPrimitives;
            unsigned long long CInvocations;
            unsigned long long CPrimitives;
            unsigned long long PSInvocations;
            unsigned long long HSInvocations;
            unsigned long long DSInvocations;
            unsigned long long CSInvocations;
        };
    }
}