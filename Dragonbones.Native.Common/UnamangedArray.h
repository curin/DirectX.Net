#pragma once


using namespace System;

namespace Dragonbones
{
    namespace Native
    {
        namespace Common
        {
            template<typename T>
            public ref class UnamangedArray
            {
                T* _array;
                size_t _length;

            public:
                UnamangedArray(T* start, size_t length);
                UnamangedArray(IntPtr start, size_t length);

                T& operator[](size_t index);

                property IntPtr Array { IntPtr get() { return IntPtr(_array); } }
                property size_t Length { size_t get() { return _length; } }
            };
        }
    }
}