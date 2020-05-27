#pragma once

#include <windef.h>

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace DXGI
    {
        [StructLayout(LayoutKind::Sequential)]
        public value struct DXGI_PRESENT_PARAMETERS
        {
            unsigned int DirtyRectsCount;
            IntPtr pDirtyRects;
            IntPtr pScrollRect;
            IntPtr pScrollOffset;

            DXGI_PRESENT_PARAMETERS(unsigned int dirtyRectsCount, IntPtr dirtyRectsLocation, IntPtr scrollRectLocation, IntPtr scrollOffsetLocation)
            {
                DirtyRectsCount = dirtyRectsCount;
                pDirtyRects = dirtyRectsLocation;
                pScrollRect = scrollRectLocation;
                pScrollOffset = scrollOffsetLocation;
            }

            array<RECT>^ DirtyRects_get()
            {
                array<RECT>^ rect = gcnew array<RECT>(DirtyRectsCount);
                RECT* dirty = (RECT*)pDirtyRects.ToPointer();
                for (unsigned int i = 0; i < DirtyRectsCount; i++)
                    rect[i] = dirty[i];
                return rect;
            }

            void DirtyRects_set(array<RECT>^ value)
            {
                DirtyRectsCount = value->Length;
                RECT* dirty = (RECT*)new ::RECT[DirtyRectsCount];
                for (unsigned int i = 0; i < DirtyRectsCount; i++)
                    dirty[i] = value[i];
                pDirtyRects = IntPtr(dirty);
            }

            void DirtyRects_set(array<RECT>^ value, IntPtr location)
            {
                DirtyRectsCount = value->Length;
                pDirtyRects = location;
                RECT* dirty = (RECT*)location.ToPointer();
                for (unsigned int i = 0; i < DirtyRectsCount; i++)
                    dirty[i] = value[i];
                pDirtyRects = IntPtr(dirty);
            }

            void DirtyRects_new(int length)
            {
                DirtyRectsCount = length;
                RECT* dirty = (RECT*)new ::RECT[DirtyRectsCount];
                pDirtyRects = IntPtr(dirty);
            }

            void DirtyRects_new(int length, IntPtr location)
            {
                DirtyRectsCount = length;
                pDirtyRects = location;
            }

            void DirtyRects_delete()
            {
                delete pDirtyRects.ToPointer();
            }

            RECT DirtyRects_get(unsigned int index)
            {
                if (index >= DirtyRectsCount || index < 0)
                    throw gcnew ArgumentOutOfRangeException();
                RECT* dirty = (RECT*)pDirtyRects.ToPointer();
                return dirty[index];
            }

            void DirtyRects_set(unsigned int index, RECT% value)
            {
                if (index >= DirtyRectsCount || index < 0)
                    throw gcnew ArgumentOutOfRangeException();
                RECT* dirty = (RECT*)new ::RECT[DirtyRectsCount];
                dirty[index] = value;
            }

            property RECT ScrollRect
            {
                RECT get() { return *(RECT*)pScrollRect.ToPointer(); }
                void set(RECT value) { *(RECT*)pScrollRect.ToPointer() = value; }
            }

            void ScrollRect_delete()
            {
                delete pScrollRect.ToPointer();
            }

            void ScrollRect_new()
            {
                pScrollRect = IntPtr(new ::RECT());
            }

            property POINT ScrollOffset
            {
                POINT get() { return *(POINT*)pScrollOffset.ToPointer(); }
                void set(POINT value) { *(POINT*)pScrollOffset.ToPointer() = value; }
            }

            void ScrollOffset_delete()
            {
                delete pScrollOffset.ToPointer();
            }

            void ScrollOffset_new()
            {
                pScrollOffset = IntPtr(new ::POINT());
            }
        };
    }
}