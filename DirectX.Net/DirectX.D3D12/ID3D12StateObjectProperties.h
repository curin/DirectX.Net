#pragma once


#include "ID3D12Object.h"

#include "vcclr.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12StateObjectProperties : public IUnknown
        {
            ::ID3D12StateObjectProperties* _ref;
        public:
            ID3D12StateObjectProperties(IntPtr pointer) : IUnknown(pointer) { _ref = (::ID3D12StateObjectProperties*)pointer.ToPointer(); }
            ID3D12StateObjectProperties(void* pointer) : IUnknown(pointer) { _ref = (::ID3D12StateObjectProperties*)pointer; }

            IntPtr GetShaderIdentifier(String^ pExportName)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(pExportName);

                return IntPtr(_ref->GetShaderIdentifier(wch));
            }

            unsigned long long GetShaderStackSize(String^ pExportName)
            {
                pin_ptr<const wchar_t> wch = PtrToStringChars(pExportName);

                return _ref->GetShaderStackSize(wch);
            }

            unsigned long long GetPipelineStackSize()
            {
                return _ref->GetPipelineStackSize();
            }

            void SetPipelineStackSize(unsigned long long PipelineStackSizeInBytes)
            {
                _ref->SetPipelineStackSize(PipelineStackSizeInBytes);
            }

            virtual GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12StateObjectProperties>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12StateObjectProperties);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12StateObjectProperties* () { return (_ref); }
        };
    }
}