#pragma once

#include <dxgi1_4.h>
#include "IDXGIAdapter2.h"
#include "DXGI_MEMORY_SEGMENT_GROUP.h"
#include "DXGI_QUERY_VIDEO_MEMORY_INFO.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIAdapter3 : IDXGIAdapter2
        {
            ::IDXGIAdapter3* _ref;
        public:
            IDXGIAdapter3(IntPtr pointer) : IDXGIAdapter2(pointer) { _ref = (::IDXGIAdapter3*)pointer.ToPointer(); }
            IDXGIAdapter3(void* pointer) : IDXGIAdapter2(pointer) { _ref = (::IDXGIAdapter3*)pointer; }

            long RegisterHardwareContentProtectionTeardownStatusEvent(IntPtr hEvent, [Out] unsigned long% pdwCookie)
            {
                pin_ptr<unsigned long> cookie = &pdwCookie;
                return _ref->RegisterHardwareContentProtectionTeardownStatusEvent(hEvent.ToPointer(), cookie);
            }

            void UnregisterHardwareContentProtectionTeardownStatus(unsigned long dwCookie)
            {
                _ref->UnregisterHardwareContentProtectionTeardownStatus(dwCookie);
            }

            long QueryVideoMemoryInfo(unsigned int NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, [Out] DXGI_QUERY_VIDEO_MEMORY_INFO% pVideoMemoryInfo)
            {
                pin_ptr<DXGI_QUERY_VIDEO_MEMORY_INFO> memInfo = &pVideoMemoryInfo;
                return _ref->QueryVideoMemoryInfo(NodeIndex, (::DXGI_MEMORY_SEGMENT_GROUP)MemorySegmentGroup, (::DXGI_QUERY_VIDEO_MEMORY_INFO*)memInfo);
            }

            long SetVideoMemoryReservation(unsigned int NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, unsigned long long Reservation)
            {
                return _ref->SetVideoMemoryReservation(NodeIndex, (::DXGI_MEMORY_SEGMENT_GROUP)MemorySegmentGroup, Reservation);
            }

            long RegisterVideoMemoryBudgetChangeNotificationEvent(IntPtr hEvent, [Out] unsigned long% pdwCookie)
            {
                pin_ptr<unsigned long> cookie = &pdwCookie;
                return _ref->RegisterVideoMemoryBudgetChangeNotificationEvent(hEvent.ToPointer(), cookie);
            }

            void UnregisterVideoMemoryBudgetChangeNotification(unsigned long dwCookie)
            {
                _ref->UnregisterVideoMemoryBudgetChangeNotification(dwCookie);
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIAdapter3>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIAdapter3);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIAdapter3* () { return (_ref); }
        };
    }
}