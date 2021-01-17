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
            protected:
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
                        if (value->Length > Length)
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

            template <typename T>
            public ref class UnmanagedDoubleIndexArray : public UnamangedArray<T>
            {
            protected:
                size_t _length0;
                size_t _length1;
            public:
                UnmanagedDoubleIndexArray(T* start, size_t length0, size_t length1) : UnamangedArray(start, length0* length1) { _length0 = length0; _length1 = length1; }
                UnmanagedDoubleIndexArray(IntPtr start, size_t length0, size_t length1) : UnamangedArray(start, length0* length1) { _length0 = length0; _length1 = length1; }

                property T default[size_t, size_t]
                {
                    T get(size_t index0, size_t index1)
                    {
                        if (index0 >= _length0)
                            throw gcnew ArgumentOutOfRangeException();
                        if (index1 >= _length1)
                            throw gcnew ArgumentOutOfRangeException();
                        return _array[index0 * _length1 + index1];
                    }
                    void set(size_t index0, size_t index1, T value)
                    {
                        if (index0 >= _length0)
                            throw gcnew ArgumentOutOfRangeException();
                        if (index1 >= _length1)
                            throw gcnew ArgumentOutOfRangeException();
                        _array[index0 * _length1 + index1] = value;
                    }
                }

                property size_t Length0 { size_t get() { return _length0; } }
                property size_t Length1 { size_t get() { return _length1; } }
            };

            public ref class UnmanagedDIArray_Byte : public UnmanagedDoubleIndexArray<unsigned char>
            {
            public:
                UnmanagedDIArray_Byte(unsigned char* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_Byte(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_SByte : public UnmanagedDoubleIndexArray<char>
            {
            public:
                UnmanagedDIArray_SByte(char* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_SByte(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_UInt16 : public UnmanagedDoubleIndexArray<unsigned short>
            {
            public:
                UnmanagedDIArray_UInt16(unsigned short* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_UInt16(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_Int16 : public UnmanagedDoubleIndexArray<short>
            {
            public:
                UnmanagedDIArray_Int16(short* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_Int16(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_UInt32 : public UnmanagedDoubleIndexArray<unsigned long>
            {
            public:
                UnmanagedDIArray_UInt32(unsigned long* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_UInt32(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_Int32 : public UnmanagedDoubleIndexArray<long>
            {
            public:
                UnmanagedDIArray_Int32(long* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_Int32(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_UInt64 : public UnmanagedDoubleIndexArray<unsigned long long>
            {
            public:
                UnmanagedDIArray_UInt64(unsigned long long* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_UInt64(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_Int64 : public UnmanagedDoubleIndexArray<long long>
            {
            public:
                UnmanagedDIArray_Int64(long long* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_Int64(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_WChar : public UnmanagedDoubleIndexArray<wchar_t>
            {
            public:
                UnmanagedDIArray_WChar(wchar_t* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_WChar(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}

                property String^ AsString
                {
                    String^ get()
                    {
                        return gcnew String((wchar_t*)this->Array.ToPointer());
                    }
                    void set(String^ value)
                    {
                        if (value->Length > Length)
                            throw gcnew ArgumentOutOfRangeException();
                        for (int i = 0; i < value->Length; i++)
                            this->default[i] = value[i];
                        for (int i = value->Length; i < 128; i++)
                            this->default[i] = '\0';
                    }
                }

                String^ GetAsString(size_t index)
                {
                    return gcnew String(((wchar_t*)this->Array.ToPointer() + (index * Length1)));
                }

                void SetAsString(size_t index, String^ value)
                {
                    if (value->Length > Length1)
                        throw gcnew ArgumentOutOfRangeException();
                    for (int i = 0; i < value->Length; i++)
                        this->default[index, i] = value[i];
                    for (int i = value->Length; i < Length1; i++)
                        this->default[index, i] = '\0';
                }
            };

            public ref class UnmanagedDIArray_Float : public UnmanagedDoubleIndexArray<float>
            {
            public:
                UnmanagedDIArray_Float(float* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_Float(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };

            public ref class UnmanagedDIArray_Double : public UnmanagedDoubleIndexArray<double>
            {
            public:
                UnmanagedDIArray_Double(double* start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
                UnmanagedDIArray_Double(IntPtr start, size_t length0, size_t length1) : UnmanagedDoubleIndexArray(start, length0, length1) {}
            };
        }
    }
}