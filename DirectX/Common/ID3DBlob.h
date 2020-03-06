#pragma once
#include <d3dcommon.h>

#include "IUnknown.h"

namespace DirectX
{
    public ref class ID3DBlob : IUnknown
	{
    public:

		LPD3DBLOB _blob;
        IntPtr GetBufferPointer()
        {
            return IntPtr(_blob->GetBufferPointer());
        }

        unsigned long long GetBufferSize()
        {
            return _blob->GetBufferSize();
        }

        GUID getGUID() override
        {
            return DirectX::GetGUID<::ID3DBlob>(_blob);
        }

        property ::IUnknown* Unknown
        {
            ::IUnknown* get() override
            {
                return _blob;
            }

            void set(::IUnknown* value) override
            {
                _blob = (LPD3DBLOB)value;
            }
        }
	};

    
}