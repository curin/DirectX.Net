#pragma once

#include "D3D12_WRITEBUFFERIMMEDIATE_MODE.h"
#include "D3D12_WRITEBUFFERIMMEDIATE_PARAMETER.h"
#include "ID3D12GraphicsCommandList1.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12GraphicsCommandList2 : public ID3D12GraphicsCommandList1
        {
            ::ID3D12GraphicsCommandList2* _ref;
        public:
            ID3D12GraphicsCommandList2(IntPtr pointer) : ID3D12GraphicsCommandList1(pointer) { _ref = (::ID3D12GraphicsCommandList2*)pointer.ToPointer(); }
            ID3D12GraphicsCommandList2(void* pointer) : ID3D12GraphicsCommandList1(pointer) { _ref = (::ID3D12GraphicsCommandList2*)pointer; }

            void WriteBufferImmediate(unsigned int Count, array<D3D12_WRITEBUFFERIMMEDIATE_PARAMETER>^ pParams, array<D3D12_WRITEBUFFERIMMEDIATE_MODE>^ pModes)
            {
                pin_ptr<D3D12_WRITEBUFFERIMMEDIATE_MODE> modes = &pModes[0];
                pin_ptr<D3D12_WRITEBUFFERIMMEDIATE_PARAMETER> params = &pParams[0];

                _ref->WriteBufferImmediate(Count, (::D3D12_WRITEBUFFERIMMEDIATE_PARAMETER*)params, (::D3D12_WRITEBUFFERIMMEDIATE_MODE*)modes);
            }

            void WriteBufferImmediate(array<D3D12_WRITEBUFFERIMMEDIATE_PARAMETER>^ pParams, array<D3D12_WRITEBUFFERIMMEDIATE_MODE>^ pModes)
            {
                pin_ptr<D3D12_WRITEBUFFERIMMEDIATE_MODE> modes = &pModes[0];
                pin_ptr<D3D12_WRITEBUFFERIMMEDIATE_PARAMETER> params = &pParams[0];

                _ref->WriteBufferImmediate(pParams->Length, (::D3D12_WRITEBUFFERIMMEDIATE_PARAMETER*)params, (::D3D12_WRITEBUFFERIMMEDIATE_MODE*)modes);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12GraphicsCommandList2>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12GraphicsCommandList2);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12GraphicsCommandList2* () { return (_ref); }
        };
    }
}