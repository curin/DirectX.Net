#pragma once
#include <DirectXMath.h>

namespace DirectX
{
	namespace Math
	{
		public ref class XMUINT2
		{
		public:
			DirectX::XMUINT2* _val;

			property unsigned int x
			{
				unsigned int get()
				{
					return _val->x;
				}
				void set(unsigned int value)
				{
					_val->x = value;
				}
			}

			property unsigned int y
			{
				unsigned int get()
				{
					return _val->y;
				}
				void set(unsigned int value)
				{
					_val->y = value;
				}
			}

            XMUINT2(DirectX::XMUINT2* val)
            {
                _val = val;
            }

			XMUINT2()
			{
				_val = new DirectX::XMUINT2();
			}

			XMUINT2(unsigned int x, unsigned int y)
			{
				_val = new DirectX::XMUINT2(x, y);
			}

			XMUINT2(const XMUINT2^ val)
			{
				_val = new DirectX::XMUINT2(*val->_val);
			}

			XMUINT2^ operator=(XMUINT2^ val)
			{
				return gcnew XMUINT2(val);
			}

			explicit XMUINT2(array<unsigned int>^ pArray)
			{
				cli::pin_ptr<unsigned int> arr = &pArray[0];
				_val = new DirectX::XMUINT2(arr);
			}

			~XMUINT2()
			{
				delete _val;
			}
		};

		public ref class XMUINT3
		{
		public:
			DirectX::XMUINT3* _val;

			property unsigned int x
			{
				unsigned int get()
				{
					return _val->x;
				}
				void set(unsigned int value)
				{
					_val->x = value;
				}
			}

			property unsigned int y
			{
				unsigned int get()
				{
					return _val->y;
				}
				void set(unsigned int value)
				{
					_val->y = value;
				}
			}

			property unsigned int z
			{
				unsigned int get()
				{
					return _val->z;
				}
				void set(unsigned int value)
				{
					_val->z = value;
				}
			}

            XMUINT3(DirectX::XMUINT3* val)
            {
                _val = val;
            }

			XMUINT3()
			{
				_val = new DirectX::XMUINT3();
			}

			XMUINT3(unsigned int x, unsigned int y, unsigned int z)
			{
				_val = new DirectX::XMUINT3(x, y, z);
			}

			XMUINT3(const XMUINT3^ val)
			{
				_val = new DirectX::XMUINT3(*val->_val);
			}

			XMUINT3^ operator=(XMUINT3^ val)
			{
				return gcnew XMUINT3(val);
			}

			explicit XMUINT3(array<unsigned int>^ pArray)
			{
				cli::pin_ptr<unsigned int> arr = &pArray[0];
				_val = new DirectX::XMUINT3(arr);
			}

			~XMUINT3()
			{
				delete _val;
			}
		};


		public ref class XMUINT4
		{
		public:
			DirectX::XMUINT4* _val;

			property unsigned int x
			{
				unsigned int get()
				{
					return _val->x;
				}
				void set(unsigned int value)
				{
					_val->x = value;
				}
			}

			property unsigned int y
			{
				unsigned int get()
				{
					return _val->y;
				}
				void set(unsigned int value)
				{
					_val->y = value;
				}
			}

			property unsigned int z
			{
				unsigned int get()
				{
					return _val->z;
				}
				void set(unsigned int value)
				{
					_val->z = value;
				}
			}

			property unsigned int w
			{
				unsigned int get()
				{
					return _val->w;
				}
				void set(unsigned int value)
				{
					_val->w = value;
				}
			}

            XMUINT4(DirectX::XMUINT4* val)
            {
                _val = val;
            }

			XMUINT4()
			{
				_val = new DirectX::XMUINT4();
			}

			XMUINT4(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
			{
				_val = new DirectX::XMUINT4(x, y, z, w);
			}

			XMUINT4(const XMUINT4^ val)
			{
				_val = new DirectX::XMUINT4(*val->_val);
			}

			XMUINT4^ operator=(XMUINT4^ val)
			{
				return gcnew XMUINT4(val);
			}

			explicit XMUINT4(array<unsigned int>^ pArray)
			{
				cli::pin_ptr<unsigned int> arr = &pArray[0];
				_val = new DirectX::XMUINT4(arr);
			}

			~XMUINT4()
			{
				delete _val;
			}
		};
	}
}

