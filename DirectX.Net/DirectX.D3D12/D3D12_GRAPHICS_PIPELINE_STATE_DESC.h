#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

#include "ID3D12RootSignature.h"
#include "D3D12_SHADER_BYTECODE.h"
#include "D3D12_STREAM_OUTPUT_DESC.h"
#include "D3D12_BLEND_DESC.h"
#include "D3D12_RASTERIZER_DESC.h"
#include "D3D12_DEPTH_STENCIL_DESC.h"
#include "D3D12_INPUT_LAYOUT_DESC.h"
#include "D3D12_INDEX_BUFFER_STRIP_CUT_VALUE.h"
#include "D3D12_PRIMITIVE_TOPOLOGY_TYPE.h"
#include "D3D12_CACHED_PIPELINE_STATE.h"
#include "D3D12_PIPELINE_STATE_FLAGS.h"

namespace DirectX
{
    namespace D3D12
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct D3D12_GRAPHICS_PIPELINE_STATE_DESC
        {
            IntPtr pRootSignature;
            D3D12_SHADER_BYTECODE VS;
            D3D12_SHADER_BYTECODE PS;
            D3D12_SHADER_BYTECODE DS;
            D3D12_SHADER_BYTECODE HS;
            D3D12_SHADER_BYTECODE GS;
            D3D12_STREAM_OUTPUT_DESC StreamOutput;
            D3D12_BLEND_DESC BlendState;
            unsigned int SampleMask;
            D3D12_RASTERIZER_DESC RasterizerState;
            D3D12_DEPTH_STENCIL_DESC DepthStencilState;
            D3D12_INPUT_LAYOUT_DESC InputLayout;
            D3D12_INDEX_BUFFER_STRIP_CUT_VALUE IBStripCutValue;
            D3D12_PRIMITIVE_TOPOLOGY_TYPE PrimitiveTopologyType;
            unsigned int NumRenderTargets;
        private:
#pragma region Hidden
            DirectX::DXGI::DXGI_FORMAT RTVFormats0;
            DirectX::DXGI::DXGI_FORMAT RTVFormats1;
            DirectX::DXGI::DXGI_FORMAT RTVFormats2;
            DirectX::DXGI::DXGI_FORMAT RTVFormats3;
            DirectX::DXGI::DXGI_FORMAT RTVFormats4;
            DirectX::DXGI::DXGI_FORMAT RTVFormats5;
            DirectX::DXGI::DXGI_FORMAT RTVFormats6;
            DirectX::DXGI::DXGI_FORMAT RTVFormats7;
#pragma endregion
        public:
            property UnmanagedArray_DXGI_FORMAT^ RTVFormats
            {
                UnmanagedArray_DXGI_FORMAT^ get()
                {
                    pin_ptr< DirectX::DXGI::DXGI_FORMAT> loc = &RTVFormats0;
                    return gcnew UnmanagedArray_DXGI_FORMAT(loc, 8);
                }
            }
            DirectX::DXGI::DXGI_FORMAT DSVFormat;
            DirectX::DXGI::DXGI_SAMPLE_DESC SampleDesc;
            unsigned int NodeMask;
            D3D12_CACHED_PIPELINE_STATE CachedPSO;
            D3D12_PIPELINE_STATE_FLAGS Flags;

            property ID3D12RootSignature^ RootSignature
            {
                ID3D12RootSignature^ get()
                {
                    return gcnew ID3D12RootSignature(pRootSignature);
                }
                void set(ID3D12RootSignature^ value)
                {
                    pRootSignature = value->Pointer;
                }
            }
        };
    }
}