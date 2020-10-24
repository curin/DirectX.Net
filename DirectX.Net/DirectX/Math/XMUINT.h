#pragma once

using namespace System::Runtime::InteropServices;

namespace DirectX
{
	namespace Math
	{
		[StructLayout(LayoutKind::Sequential)]
		public value struct XMUINT2
		{
			unsigned int x;
			unsigned int y;

			XMUINT2(unsigned int _x, unsigned int _y) { x = _x; y = _y; }
			XMUINT2(array<unsigned int>^ pArray) { x = pArray[0]; y = pArray[1]; }
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMUINT3
		{
			unsigned int x;
			unsigned int y;
			unsigned int z;

			XMUINT3(unsigned int _x, unsigned int _y, unsigned int _z) { x = _x; y = _y; z = _z; }
			XMUINT3(array<unsigned int>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; }
		};

		[StructLayout(LayoutKind::Sequential)]
		public value struct XMUINT4
		{
			unsigned int x;
			unsigned int y;
			unsigned int z;
			unsigned int w;

			XMUINT4(unsigned int _x, unsigned int _y, unsigned int _z, unsigned int _w) { x = _x; y = _y; z = _z; w = _w; }
			XMUINT4(array<unsigned int>^ pArray) { x = pArray[0]; y = pArray[1]; z = pArray[2]; w = pArray[3]; }
		};
	}
}