#pragma once

#include "D3D12_RENDER_TARGET_BLEND_DESC.h"

using namespace System;

namespace DirectX
{
    namespace D3D12
    {
        template<typename T>
        public ref class UnamangedArray
        {
            T* _array;
            size_t _length;

        public:
            UnamangedArray(T* start, size_t length) { _array = start; _length = length; }
            UnamangedArray(IntPtr start, size_t length) { _array = (T*)start.ToPointer(); _length = length; }

            property T default[size_t]
            {
                T get(size_t index)
                {
                    if (index >= _length)
                        throw gcnew ArgumentOutOfRangeException();
                    return _array[index];
                }
                void set(size_t index, T value)
                {
                    if (index >= _length)
                        throw gcnew ArgumentOutOfRangeException();
                    _array[index] = value;
                }
            }

            property IntPtr Array { IntPtr get() { return IntPtr(_array); } }
            property size_t Length { size_t get() { return _length; } }
        };

        public ref class UnmanagedArray_D3D12_RENDER_TARGET_BLEND_DESC : public UnamangedArray<D3D12_RENDER_TARGET_BLEND_DESC>
        {
        public:
            UnmanagedArray_D3D12_RENDER_TARGET_BLEND_DESC(D3D12_RENDER_TARGET_BLEND_DESC* start, size_t length) : UnamangedArray(start, length) {}
            UnmanagedArray_D3D12_RENDER_TARGET_BLEND_DESC(IntPtr start, size_t length) : UnamangedArray(start, length) {}
        };
    }
}

