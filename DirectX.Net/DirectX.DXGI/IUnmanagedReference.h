#pragma once

using namespace System;

namespace DirectX
{
    namespace DXGI
    {
#define UnmanagedReferenceCastedProperty(type, umType, member) property type member { type get() { return (type)_value->member ; } void set(type value) { _value->member = (umType)value; }}
#define UnmanagedReferenceProperty(type, member) property type member { type get() { return _value->member ; } void set(type value) { _value->member = value; }}
#define UnmanagedOperator(type) explicit operator type*() { return _value; }
        template<typename TNative>
        void IUnmanagedReference_Location_Constructor(TNative* location, TNative* value) { *location = *value; }
        template <typename TNative>
        public ref class IUnmanagedReference abstract
        {
        protected:
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
}