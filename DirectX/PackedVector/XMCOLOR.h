#pragma once
#include <DirectXPackedVector.h>
typedef DirectX::PackedVector::XMCOLOR UMCOLOR;


namespace DirectX
{
    namespace PackedVectors
    {
        public ref class XMCOLOR
        {
		public:
            UMCOLOR* _color;

            XMCOLOR()
            {
                _color = new UMCOLOR();
            }

            XMCOLOR(UMCOLOR* color)
            {
                _color = color;
            }

            XMCOLOR(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
            {
                _color = new UMCOLOR(r, g, b, a);
            }

            XMCOLOR(unsigned int c)
            {
                _color = new UMCOLOR(c);
            }

			XMCOLOR(array<float>^ pArray)
			{
				pin_ptr<float> arr = &pArray[0];
				_color = new UMCOLOR(arr);
			}

			~XMCOLOR()
			{
				delete _color;
			}

            XMCOLOR^ operator= (const uint32_t Color) { _color->c = Color; return this; }
            property unsigned char r { unsigned char get() { return _color->r; } void set(unsigned char value) { _color->r = value; }}
            property unsigned char g { unsigned char get() { return _color->g; } void set(unsigned char value) { _color->g = value; }}
            property unsigned char b { unsigned char get() { return _color->b; } void set(unsigned char value) { _color->b = value; }}
            property unsigned char a { unsigned char get() { return _color->a; } void set(unsigned char value) { _color->a = value; }}

            property unsigned int c { unsigned int get() { return _color->c; } void set(unsigned int value) { _color->c = value; }}
			operator unsigned int () { return _color->c; }
        };
		typedef XMCOLOR ^MXMCOLOR;
    }
} 

