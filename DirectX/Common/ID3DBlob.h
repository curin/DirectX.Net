#pragma once
#include <d3dcommon.h>

#include "../Windows/IUnknown.h"

namespace DirectX
{
    public ref class ID3DBlob : IUnknown
	{
    public:
        ID3DBlob(IntPtr pointer) : IUnknown(pointer) { }
        ID3DBlob(void* pointer) : IUnknown(pointer) { }

        IntPtr GetBufferPointer()
        {
            return IntPtr(((LPD3DBLOB)_ref)->GetBufferPointer());
        }

        unsigned long long GetBufferSize()
        {
            return ((LPD3DBLOB)_ref)->GetBufferSize();
        }

        GUID getGUID() override
        {
            return DirectX::GetGUID<::ID3DBlob>(((LPD3DBLOB)_ref));
        }

        static GUID GetGUID()
        {
            return __uuidof(::ID3DBlob);
        }

        static Guid GetGuid()
        {
            return FromGUID(GetGUID());
        }

        explicit operator LPD3DBLOB() { return ((LPD3DBLOB)_ref); }
	};

    
}