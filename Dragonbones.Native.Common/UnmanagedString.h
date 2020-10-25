#pragma once

#include <wchar.h>
#include <string.h>
using namespace System;
using namespace System::Runtime::InteropServices;

namespace Dragonbones
{
    namespace Native
    {
        namespace Common
        {
            [StructLayout(LayoutKind::Sequential)]
            public value class UnmanagedConstantWString
            {
                wchar_t const* _str;

            public:
                UnmanagedConstantWString(wchar_t* string)
                {
                    _str = string;
                }

                UnmanagedConstantWString(String^ string)
                {
                    wchar_t* str = new wchar_t[string->Length];
                    for (int i = 0; i < string->Length; i++)
                        str[i] = string->default[i];
                    _str = str;
                }

                void Delete()
                {
                    delete _str;
                }

                property size_t Length
                {
                    size_t get()
                    {
                        return wcslen(_str + 1);
                    }
                }

                property wchar_t default[size_t]
                {
                    wchar_t get(size_t index)
                    {
                        if (index > Length)
                            throw gcnew ArgumentOutOfRangeException();
                        return _str[index];
                    }
                }

                property IntPtr Pointer
                {
                    IntPtr get()
                    {
                        return IntPtr((void*)_str);
                    }
                }
            };

            [StructLayout(LayoutKind::Sequential)]
            public value class UnmanagedConstantString
            {
                char const* _str;

            public:
                UnmanagedConstantString(char* string)
                {
                    _str = string;
                }

                UnmanagedConstantString(String^ string)
                {
                    char* str = new char[string->Length];
                    for (int i = 0; i < string->Length; i++)
                        str[i] = (char)string->default[i];
                    _str = str;
                }

                void Delete()
                {
                    delete _str;
                }

                property size_t Length
                {
                    size_t get()
                    {
                        return strlen(_str + 1);
                    }
                }

                property char default[size_t]
                {
                    char get(size_t index)
                    {
                        if (index > Length)
                            throw gcnew ArgumentOutOfRangeException();
                        return _str[index];
                    }
                }
                    
                property IntPtr Pointer
                {
                    IntPtr get()
                    {
                        return IntPtr((void*)_str);
                    }
                }
            };
        }
    }
}
