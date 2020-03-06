#pragma once

#include <d3dcommon.h>

using namespace System::Runtime::InteropServices;
namespace DirectX
{
    public ref class D3D_SHADER_MACRO
    {
    public:
        LPD3D_SHADER_MACRO _macro;

        D3D_SHADER_MACRO()
        {
            _macro = new ::_D3D_SHADER_MACRO();
        }

        D3D_SHADER_MACRO(LPD3D_SHADER_MACRO macro)
        {
            _macro = macro;
        }

        ~D3D_SHADER_MACRO()
        {
            delete _macro;
        }

        property System::String^ Name { System::String^ get() { return gcnew System::String(_macro->Name); } void set(System::String^ value) { _macro->Name = (char*)Marshal::StringToHGlobalAnsi(value).ToPointer(); }}
        property System::String^ Definition { System::String^ get() { return gcnew System::String(_macro->Definition); } void set(System::String^ value) { _macro->Definition = (char*)(void*)Marshal::StringToHGlobalAnsi(value); }}
    };
}