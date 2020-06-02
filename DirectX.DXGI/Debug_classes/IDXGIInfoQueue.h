#pragma once

#include "DXGI_INFO_QUEUE_MESSAGE.h"
#include "DXGI_INFO_QUEUE_MESSAGE_CATEGORY.h"
#include "DXGI_INFO_QUEUE_MESSAGE_SEVERITY.h"
#include "DXGI_INFO_QUEUE_FILTER_DESC.h"
#include "DXGI_INFO_QUEUE_FILTER.h"
#include "../IDXGIObject.h"

namespace DirectX
{
    namespace DXGI
    {
        namespace Debug
        {
            public ref class IDXGIInfoQueue : IUnknown
            {
                ::IDXGIInfoQueue* _ref;
            public:
                IDXGIInfoQueue(IntPtr pointer) : IUnknown(pointer) { _ref = (::IDXGIInfoQueue*)pointer.ToPointer(); }
                IDXGIInfoQueue(void* pointer) : IUnknown(pointer) { _ref = (::IDXGIInfoQueue*)pointer; }

                long SetMessageCountLimit(Guid Producer, unsigned long long MessageCountLimit) { return (_ref)->SetMessageCountLimit(ToGUID(Producer), MessageCountLimit); }

                void ClearStoredMessages(Guid Producer) { (_ref)->ClearStoredMessages(ToGUID(Producer)); }

                long GetMessage(Guid Producer, unsigned long long MessageIndex, DXGI_INFO_QUEUE_MESSAGE^ pMessage, size_t% pMessageByteLength)
                {
                    pin_ptr<unsigned long long> pLength = &pMessageByteLength;
                    return (_ref)->GetMessage(ToGUID(Producer), MessageIndex, (::DXGI_INFO_QUEUE_MESSAGE*)pMessage, pLength);
                }

                long GetMessageLength(Guid Producer, unsigned long long MessageIndex, [Out] size_t% pMessageByteLength)
                {
                    pin_ptr<unsigned long long> pLength = &pMessageByteLength;
                    return (_ref)->GetMessage(ToGUID(Producer), MessageIndex, NULL, pLength);
                }

                unsigned long long GetNumStoredMessagesAllowedByRetrievalFilters(Guid Producer) 
                { return (_ref)->GetNumStoredMessagesAllowedByRetrievalFilters(ToGUID(Producer)); }

                unsigned long long GetNumStoredMessages(Guid Producer) { return (_ref)->GetNumStoredMessages(ToGUID(Producer)); }

                unsigned long long GetNumMessagesDiscardedByMessageCountLimit(Guid Producer) 
                { return (_ref)->GetNumMessagesDiscardedByMessageCountLimit(ToGUID(Producer)); }

                unsigned long long GetMessageCountLimit(Guid Producer) { return (_ref)->GetMessageCountLimit(ToGUID(Producer)); }

                unsigned long long GetNumMessagesAllowedByStorageFilter(Guid Producer) { return (_ref)->GetNumMessagesAllowedByStorageFilter(ToGUID(Producer)); }

                unsigned long long GetNumMessagesDeniedByStorageFilter(Guid Producer) { return (_ref)->GetNumMessagesDeniedByStorageFilter(ToGUID(Producer)); }

                long AddStorageFilterEntries(Guid Producer, DXGI_INFO_QUEUE_FILTER^ pFilter) 
                {
                    return (_ref)->AddRetrievalFilterEntries(ToGUID(Producer), (::DXGI_INFO_QUEUE_FILTER*)pFilter);
                }

                long GetStorageFilter(Guid Producer, DXGI_INFO_QUEUE_FILTER^ pFilter, size_t% pFilterByteLength)
                {
                    pin_ptr<unsigned long long> pLength = &pFilterByteLength;
                    return (_ref)->GetStorageFilter(ToGUID(Producer), (::DXGI_INFO_QUEUE_FILTER*)pFilter, pLength);
                }
                long GetStorageFilterLength(Guid Producer, [Out] size_t% pFilterByteLength)
                {
                    pin_ptr<unsigned long long> pLength = &pFilterByteLength;
                    return (_ref)->GetStorageFilter(ToGUID(Producer), NULL, pLength);
                }

                void ClearStorageFilter(Guid Producer) { (_ref)->ClearStorageFilter(ToGUID(Producer)); }

                long PushEmptyStorageFilter(Guid Producer) { return (_ref)->PushEmptyStorageFilter(ToGUID(Producer)); }

                long PushDenyAllStorageFilter(Guid Producer) { return (_ref)->PushDenyAllStorageFilter(ToGUID(Producer)); }

                long PushCopyOfStorageFilter(Guid Producer) { return (_ref)->PushCopyOfStorageFilter(ToGUID(Producer)); }

                long PushStorageFilter(Guid Producer, DXGI_INFO_QUEUE_FILTER^ pFilter) 
                {
                    return (_ref)->PushStorageFilter(ToGUID(Producer), (::DXGI_INFO_QUEUE_FILTER*)pFilter);
                }

                void PopStorageFilter(Guid Producer) { return (_ref)->PopStorageFilter(ToGUID(Producer)); }

                unsigned int GetStorageFilterStackSize(Guid Producer) { return (_ref)->GetStorageFilterStackSize(ToGUID(Producer)); }

                long AddRetrievalFilterEntries(Guid Producer,DXGI_INFO_QUEUE_FILTER^ pFilter)
                {
                    return (_ref)->AddRetrievalFilterEntries(ToGUID(Producer), (::DXGI_INFO_QUEUE_FILTER*)pFilter);
                }

                long GetRetrievalFilter(Guid Producer, DXGI_INFO_QUEUE_FILTER^ pFilter, size_t% pFilterByteLength)
                {
                    pin_ptr<unsigned long long> pLength = &pFilterByteLength;
                    return (_ref)->GetRetrievalFilter(ToGUID(Producer), (::DXGI_INFO_QUEUE_FILTER*)pFilter, pLength);
                }
                long GetRetrievalFilterLength(Guid Producer, [Out] size_t% pFilterByteLength)
                {
                    pin_ptr<unsigned long long> pLength = &pFilterByteLength;
                    return (_ref)->GetRetrievalFilter(ToGUID(Producer), NULL, pLength);
                }

                void ClearRetrievalFilter(Guid Producer) { return (_ref)->ClearRetrievalFilter(ToGUID(Producer)); }

                long PushEmptyRetrievalFilter(Guid Producer) { return (_ref)->PushEmptyRetrievalFilter(ToGUID(Producer)); }

                long PushDenyAllRetrievalFilter(Guid Producer) { return (_ref)->PushDenyAllRetrievalFilter(ToGUID(Producer)); }

                long PushCopyOfRetrievalFilter(Guid Producer) { return (_ref)->PushCopyOfRetrievalFilter(ToGUID(Producer)); }

                long PushRetrievalFilter(Guid Producer, DXGI_INFO_QUEUE_FILTER^ pFilter)
                {
                    return (_ref)->PushRetrievalFilter(ToGUID(Producer), (::DXGI_INFO_QUEUE_FILTER*)pFilter);
                }

                void PopRetrievalFilter(Guid Producer) { (_ref)->PopRetrievalFilter(ToGUID(Producer)); }

                unsigned int GetRetrievalFilterStackSize(Guid Producer) { return (_ref)->GetRetrievalFilterStackSize(ToGUID(Producer)); }

                long AddMessage(Guid Producer, DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category, DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity, int ID, String^ pDescription)
                {
                    char* pDesc = (char*)Marshal::StringToHGlobalAnsi(pDescription).ToPointer();
                    return (_ref)->AddMessage(ToGUID(Producer), (::DXGI_INFO_QUEUE_MESSAGE_CATEGORY)Category,
                        (::DXGI_INFO_QUEUE_MESSAGE_SEVERITY)Severity, ID, pDesc);
                }

                long AddApplicationMessage(DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity, String^ pDescription)
                {
                    char* pDesc = (char*)Marshal::StringToHGlobalAnsi(pDescription).ToPointer();
                    return (_ref)->AddApplicationMessage((::DXGI_INFO_QUEUE_MESSAGE_SEVERITY)Severity, pDesc);
                }

                long SetBreakOnCategory(Guid Producer, DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category, bool bEnable)
                {
                    return (_ref)->SetBreakOnCategory(ToGUID(Producer), (::DXGI_INFO_QUEUE_MESSAGE_CATEGORY)Category, bEnable);
                }

                long SetBreakOnSeverity(Guid Producer, DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity, bool bEnable)
                {
                    return (_ref)->SetBreakOnSeverity(ToGUID(Producer), (::DXGI_INFO_QUEUE_MESSAGE_SEVERITY)Severity, bEnable);
                }

                long SetBreakOnID(Guid Producer, int ID, bool bEnable)
                {
                    return (_ref)->SetBreakOnID(ToGUID(Producer), ID, bEnable);
                }

                bool GetBreakOnCategory(Guid Producer, DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category)
                {
                    return (_ref)->GetBreakOnCategory(ToGUID(Producer), (::DXGI_INFO_QUEUE_MESSAGE_CATEGORY)Category);
                }

                bool GetBreakOnSeverity(Guid Producer, DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity)
                {
                    return (_ref)->GetBreakOnSeverity(ToGUID(Producer), (::DXGI_INFO_QUEUE_MESSAGE_SEVERITY)Severity);
                }

                bool GetBreakOnID(Guid Producer, int ID)
                {
                    return (_ref)->GetBreakOnID(ToGUID(Producer), ID);
                }

                void SetMuteDebugOutput(Guid Producer, bool bMute)
                {
                    (_ref)->SetMuteDebugOutput(ToGUID(Producer), bMute);
                }

                bool GetMuteDebugOutput(Guid Producer)
                {
                    return (_ref)->GetMuteDebugOutput(ToGUID(Producer));
                }

                virtual GUID getGUID() override
                {
                    return DirectX::GetGUID<::IDXGIInfoQueue>((_ref));
                }

                static GUID GetGUID()
                {
                    return __uuidof(::IDXGIInfoQueue);
                }

                static Guid GetGuid()
                {
                    return FromGUID(GetGUID());
                }

                explicit operator ::IDXGIInfoQueue* () { return (_ref); }
            };
        }
    }
}