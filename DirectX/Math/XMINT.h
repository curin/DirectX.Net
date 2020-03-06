#pragma once
#include <DirectXMath.h>

namespace DirectX
{
	namespace Math
	{
		public ref class XMINT2
		{
		public:
			DirectX::XMINT2* _val;

			property int x
			{
				int get()
				{
					return _val->x;
				}
				void set(int value)
				{
					_val->x = value;
				}
			}

			property int y
			{
				int get()
				{
					return _val->y;
				}
				void set(int value)
				{
					_val->y = value;
				}
			}

            XMINT2(DirectX::XMINT2* val)
            {
                _val = val;
            }

			XMINT2()
			{
				_val = new DirectX::XMINT2();
			}

			XMINT2(int x, int y)
			{
				_val = new DirectX::XMINT2(x, y);
			}

			XMINT2(const XMINT2^ val)
			{
				_val = new DirectX::XMINT2(*val->_val);
			}

			XMINT2^ operator=(XMINT2^ val)
			{
				return gcnew XMINT2(val);
			}

			explicit XMINT2(array<int>^ pArray)
			{
				cli::pin_ptr<int> arr = &pArray[0];
				_val = new DirectX::XMINT2(arr);
			}

			~XMINT2()
			{
				delete _val;
			}
		};

		public ref class XMINT3
		{
		public:
			DirectX::XMINT3* _val;

			property int x
			{
				int get()
				{
					return _val->x;
				}
				void set(int value)
				{
					_val->x = value;
				}
			}

			property int y
			{
				int get()
				{
					return _val->y;
				}
				void set(int value)
				{
					_val->y = value;
				}
			}

			property int z
			{
				int get()
				{
					return _val->z;
				}
				void set(int value)
				{
					_val->z = value;
				}
			}

            XMINT3(DirectX::XMINT3* val)
            {
                _val = val;
            }

			XMINT3()
			{
				_val = new DirectX::XMINT3();
			}

			XMINT3(int x, int y, int z)
			{
				_val = new DirectX::XMINT3(x, y, z);
			}

			XMINT3(const XMINT3^ val)
			{
				_val = new DirectX::XMINT3(*val->_val);
			}

			XMINT3^ operator=(XMINT3^ val)
			{
				return gcnew XMINT3(val);
			}

			explicit XMINT3(array<int>^ pArray)
			{
				cli::pin_ptr<int> arr = &pArray[0];
				_val = new DirectX::XMINT3(arr);
			}

			~XMINT3()
			{
				delete _val;
			}
		};


		public ref class XMINT4
		{
		public:
			DirectX::XMINT4* _val;

			property int x
			{
				int get()
				{
					return _val->x;
				}
				void set(int value)
				{
					_val->x = value;
				}
			}

			property int y
			{
				int get()
				{
					return _val->y;
				}
				void set(int value)
				{
					_val->y = value;
				}
			}

			property int z
			{
				int get()
				{
					return _val->z;
				}
				void set(int value)
				{
					_val->z = value;
				}
			}

			property int w
			{
				int get()
				{
					return _val->w;
				}
				void set(int value)
				{
					_val->w = value;
				}
			}

            XMINT4(DirectX::XMINT4* val)
            {
                _val = val;
            }

			XMINT4()
			{
				_val = new DirectX::XMINT4();
			}

			XMINT4(int x, int y, int z, int w)
			{
				_val = new DirectX::XMINT4(x, y, z, w);
			}

			XMINT4(const XMINT4^ val)
			{
				_val = new DirectX::XMINT4(*val->_val);
			}

			XMINT4^ operator=(XMINT4^ val)
			{
				return gcnew XMINT4(val);
			}

			explicit XMINT4(array<int>^ pArray)
			{
				cli::pin_ptr<int> arr = &pArray[0];
				_val = new DirectX::XMINT4(arr);
			}

			~XMINT4()
			{
				delete _val;
			}
		};
	}
}