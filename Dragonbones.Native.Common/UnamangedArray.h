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

            public ref class UnmanagedArray_Byte : public UnamangedArray<unsigned char> 
            {
            public:
                UnmanagedArray_Byte(unsigned char* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_Byte(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_SByte : public UnamangedArray<char>
            {
            public:
                UnmanagedArray_SByte(char* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_SByte(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_UInt16 : public UnamangedArray<unsigned short>
            {
            public:
                UnmanagedArray_UInt16(unsigned short* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_UInt16(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_Int16 : public UnamangedArray<short>
            {
            public:
                UnmanagedArray_Int16(short* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_Int16(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_UInt32 : public UnamangedArray<unsigned long>
            {
            public:
                UnmanagedArray_UInt32(unsigned long* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_UInt32(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_Int32 : public UnamangedArray<long>
            {
            public:
                UnmanagedArray_Int32(long* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_Int32(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_UInt64 : public UnamangedArray<unsigned long long>
            {
            public:
                UnmanagedArray_UInt64(unsigned long long* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_UInt64(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_Int64 : public UnamangedArray<long long>
            {
            public:
                UnmanagedArray_Int64(long long* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_Int64(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_WChar : public UnamangedArray<wchar_t>
            {
            public:
                UnmanagedArray_WChar(wchar_t* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_WChar(IntPtr start, size_t length) : UnamangedArray(start, length) {}

                property String^ AsString
                {
                    String^ get()
                    {
                        return gcnew String((wchar_t*)Array.ToPointer());
                    }
                    void set(String^ value)
                    {
                        if (value->Length > 128)
                            throw gcnew ArgumentOutOfRangeException();
                        for (int i = 0; i < value->Length; i++)
                            this->default[i] = value[i];
                        for (int i = value->Length; i < 128; i++)
                            this->default[i] = '\0';
                    }
                }
            };

            public ref class UnmanagedArray_Float : public UnamangedArray<float>
            {
            public:
                UnmanagedArray_Float(float* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_Float(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };

            public ref class UnmanagedArray_Double: public UnamangedArray<double>
            {
            public:
                UnmanagedArray_Double(double* start, size_t length) : UnamangedArray(start, length) {}
                UnmanagedArray_Double(IntPtr start, size_t length) : UnamangedArray(start, length) {}
            };
        }
    }
}