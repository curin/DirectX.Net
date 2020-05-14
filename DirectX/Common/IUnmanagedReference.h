#pragma once

using namespace System;

namespace DirectX
{
#define UnmanagedReferenceProperty(type, member) property type member { type get() { return _value->member ; } void set(type value) { _value->member = value; }}
#define UnmanagedOperator(type) explicit operator type*() { return _value; }
    template <typename TNative>
    public ref class IUnmanagedReference abstract
    {
    protected :
        TNative* _value;
    public:

        property IntPtr Pointer
        {
            IntPtr get()
            {
                return IntPtr(_value);
            }
        }

        ~IUnmanagedReference()
        {
            delete _value;
        }
    };
}