#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace Math
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct XMINT2
		{
			int x;
			int y;

			XMINT2(int _x, int _y) { x = _x; y = _y; }
			XMINT2(array<int>^ pArray) { x = pArray[0]; y = pArray[1]; }
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMINT3
		{
			int x;
			int y;
			int z;

			XMINT3(int _x, int _y, int _z) { x = _x; y = _y; z = _z; }
			XMINT3(array<int>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; }
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMINT4
		{
			int x;
			int y;
			int z;
			int w;

			XMINT4(int _x, int _y, int _z, int _w) { x = _x; y = _y; z = _z; w = _w; }
			XMINT4(array<int>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; w = pArray[3]; }
		};
	}
}