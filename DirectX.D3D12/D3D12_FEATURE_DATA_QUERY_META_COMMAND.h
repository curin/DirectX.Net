#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace D3D12
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct D3D12_FEATURE_DATA_QUERY_META_COMMAND
		{
			Guid CommandId;
			unsigned int NodeMask;
			IntPtr pQueryInputData;
			size_t QueryInputDataSizeInBytes;
			IntPtr pQueryOutputData;
			size_t QueryOutputDataSizeInBytes;
		};
	}
}