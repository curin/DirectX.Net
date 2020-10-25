#include "pch.h"
#include "UnamangedArray.h"

template<typename T>
inline Dragonbones::Native::Common::UnamangedArray<T>::UnamangedArray(T* start, size_t length)
{
    _array = start;
    _length = length;
}

template<typename T>
inline Dragonbones::Native::Common::UnamangedArray<T>::UnamangedArray(IntPtr start, size_t length)
{
    _array = (T*)start.ToPointer();
    _length = length;
}
