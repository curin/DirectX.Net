#pragma once

#include <d3dcommon.h>
#include "D3D_INCLUDE_TYPE.h"

using namespace System::Runtime::InteropServices;
namespace DirectX
{
    public ref class ID3DInclude
    {
    public:
        ::ID3DInclude* _include;

        ID3DInclude(::ID3DInclude* include)
        {
            _include = include;
        }

        long Open(D3D_INCLUDE_TYPE IncludeType, System::String^ pFileName, System::IntPtr% pData, [Out] System::IntPtr% ppData, unsigned int% pBytes)
        {
            pin_ptr<unsigned int> bytes = &pBytes;
            LPCVOID* out;
            void* o;
            long ret =  _include->Open((::D3D_INCLUDE_TYPE)IncludeType, (char*)Marshal::StringToHGlobalAnsi(pFileName).ToPointer(), o, out, bytes);
            ppData = System::IntPtr((void*)*out);
            pData = System::IntPtr(o);
            return ret;
        }

        long Close(System::IntPtr pData)
        {
            return _include->Close(pData.ToPointer());
        }
    };
}