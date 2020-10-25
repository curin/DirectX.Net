#pragma once
#include "DXGI_RGB.h"

using namespace System;

namespace DirectX
{
    namespace DXGI
    {
        template<typename T>
        public ref class DXGIUnmanagedArray
        {
            T* _array;
            size_t _length;

        public:
            DXGIUnmanagedArray(T* start, size_t length) { _array = start; _length = length; }
            DXGIUnmanagedArray(IntPtr start, size_t length) { _array = (T*)start.ToPointer(); _length = length; }

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

        public ref class UnmanagedArray_DXGI_RGB : DXGIUnmanagedArray<DXGI_RGB>
        {
        public:
            UnmanagedArray_DXGI_RGB(DXGI_RGB* start, size_t length) : DXGIUnmanagedArray(start, length) {}
            UnmanagedArray_DXGI_RGB(IntPtr start, size_t length) : DXGIUnmanagedArray(start, length) {}
        };

        public ref class UnmanagedArray_DXGI_FORMAT : DXGIUnmanagedArray<DXGI_FORMAT>
        {
        public:
            UnmanagedArray_DXGI_FORMAT(DXGI_FORMAT* start, size_t length) : DXGIUnmanagedArray(start, length) {}
            UnmanagedArray_DXGI_FORMAT(IntPtr start, size_t length) : DXGIUnmanagedArray(start, length) {}
        };
    }
}

