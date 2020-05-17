#pragma once

#include <dxgi1_2.h>
#include "IDXGIObject.h"
#include "IDXGIResource.h"
#include "DXGI_OUTDUPL_DESC.h"
#include "DXGI_OUTDUPL_MOVE_RECT.h"
#include "DXGI_OUTDUPL_POINTER_SHAPE_INFO.h"
#include "DXGI_OUTDUPL_FRAME_INFO.h"
#include "DXGI_MAPPED_RECT.h"


namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutputDuplication : IDXGIObject
        {
            ::IDXGIOutputDuplication* _ref;
        public:
            IDXGIOutputDuplication(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutputDuplication*)pointer.ToPointer(); }
            IDXGIOutputDuplication(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutputDuplication*)pointer; }

            void GetDesc([Out] DXGI_OUTDUPL_DESC% pDesc)
            {
                pin_ptr<DXGI_OUTDUPL_DESC> pDes = &pDesc;
                return _ref->GetDesc((::DXGI_OUTDUPL_DESC*)pDes);
            }

            long AcquireNextFrame(unsigned int TimeoutInMilliseconds, [Out] DXGI_OUTDUPL_FRAME_INFO% pFrameInfo, [Out] IDXGIResource^% ppDesktopResource)
            {
                pin_ptr<DXGI_OUTDUPL_FRAME_INFO> pFInf = &pFrameInfo;
                ::IDXGIResource** ppOut;
                long ret = _ref->AcquireNextFrame(TimeoutInMilliseconds, (::DXGI_OUTDUPL_FRAME_INFO*)pFInf, ppOut);
                ppDesktopResource = gcnew IDXGIResource(*ppOut);
                return ret;
            }

            long GetFrameDirtyRects(unsigned int DirtyRectsBufferSize, array<RECT>^ pDirtyRectsBuffer, [Out]  unsigned int% pDirtyRectsBufferSizeRequired)
            {
                pin_ptr<RECT> pBuffer = &pDirtyRectsBuffer[0];
                pin_ptr<unsigned int> pSize = &pDirtyRectsBufferSizeRequired;
                return _ref->GetFrameDirtyRects(DirtyRectsBufferSize, (::RECT*)pBuffer, pSize);
            }

            long GetFrameMoveRects(unsigned int MoveRectsBufferSize, array<DXGI_OUTDUPL_MOVE_RECT>^ pMoveRectBuffer, [Out]  unsigned int% pMoveRectsBufferSizeRequired)
            {
                pin_ptr<DXGI_OUTDUPL_MOVE_RECT> pBuffer = &pMoveRectBuffer[0];
                pin_ptr<unsigned int> pSize = &pMoveRectsBufferSizeRequired;
                return _ref->GetFrameMoveRects(MoveRectsBufferSize, (::DXGI_OUTDUPL_MOVE_RECT*)pBuffer, pSize);
            }

            long GetFramePointerShape(unsigned int PointerShapeBufferSize, array<IntPtr>^ pPointerShapeBuffer, 
                [Out] unsigned int% pPointerShapeBufferSizeRequired, [Out]  DXGI_OUTDUPL_POINTER_SHAPE_INFO% pPointerShapeInfo)
            {
                pin_ptr<IntPtr> pBuffer = &pPointerShapeBuffer[0];
                pin_ptr<unsigned int> pSize = &pPointerShapeBufferSizeRequired;
                pin_ptr<DXGI_OUTDUPL_POINTER_SHAPE_INFO> pPInfo = &pPointerShapeInfo;
                return _ref->GetFramePointerShape(PointerShapeBufferSize, (void*)pBuffer, pSize, (::DXGI_OUTDUPL_POINTER_SHAPE_INFO*)pPInfo);
            }

            long MapDesktopSurface([Out] DXGI_MAPPED_RECT% pLockedRect)
            {
                pin_ptr<DXGI_MAPPED_RECT> pLocked = &pLockedRect;
                return _ref->MapDesktopSurface((::DXGI_MAPPED_RECT*)pLocked);
            }

            long UnMapDesktopSurface()
            {
                return _ref->UnMapDesktopSurface();
            }

            long ReleaseFrame()
            {
                return _ref->ReleaseFrame();
            }

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutputDuplication>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutputDuplication);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutputDuplication* () { return (_ref); }
        };
    }
}