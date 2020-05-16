#pragma once

#include "IDXGIObject.h"

namespace DirectX
{
    namespace DXGI
    {
        public ref class IDXGIOutput : IDXGIObject
        {
            ::IDXGIOutput* _ref;
        public:
            IDXGIOutput(IntPtr pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutput*)pointer.ToPointer(); }
            IDXGIOutput(void* pointer) : IDXGIObject(pointer) { _ref = (::IDXGIOutput*)pointer; }

            virtual HRESULT STDMETHODCALLTYPE GetDesc(
                /* [annotation][out] */
                _Out_  DXGI_OUTPUT_DESC* pDesc) = 0;

            virtual HRESULT STDMETHODCALLTYPE GetDisplayModeList(
                /* [in] */ DXGI_FORMAT EnumFormat,
                /* [in] */ UINT Flags,
                /* [annotation][out][in] */
                _Inout_  UINT* pNumModes,
                /* [annotation][out] */
                _Out_writes_to_opt_(*pNumModes, *pNumModes)  DXGI_MODE_DESC* pDesc) = 0;

            virtual HRESULT STDMETHODCALLTYPE FindClosestMatchingMode(
                /* [annotation][in] */
                _In_  const DXGI_MODE_DESC* pModeToMatch,
                /* [annotation][out] */
                _Out_  DXGI_MODE_DESC* pClosestMatch,
                /* [annotation][in] */
                _In_opt_  IUnknown* pConcernedDevice) = 0;

            virtual HRESULT STDMETHODCALLTYPE WaitForVBlank(void) = 0;

            virtual HRESULT STDMETHODCALLTYPE TakeOwnership(
                /* [annotation][in] */
                _In_  IUnknown* pDevice,
                BOOL Exclusive) = 0;

            virtual void STDMETHODCALLTYPE ReleaseOwnership(void) = 0;

            virtual HRESULT STDMETHODCALLTYPE GetGammaControlCapabilities(
                /* [annotation][out] */
                _Out_  DXGI_GAMMA_CONTROL_CAPABILITIES* pGammaCaps) = 0;

            virtual HRESULT STDMETHODCALLTYPE SetGammaControl(
                /* [annotation][in] */
                _In_  const DXGI_GAMMA_CONTROL* pArray) = 0;

            virtual HRESULT STDMETHODCALLTYPE GetGammaControl(
                /* [annotation][out] */
                _Out_  DXGI_GAMMA_CONTROL* pArray) = 0;

            virtual HRESULT STDMETHODCALLTYPE SetDisplaySurface(
                /* [annotation][in] */
                _In_  IDXGISurface* pScanoutSurface) = 0;

            virtual HRESULT STDMETHODCALLTYPE GetDisplaySurfaceData(
                /* [annotation][in] */
                _In_  IDXGISurface* pDestination) = 0;

            virtual HRESULT STDMETHODCALLTYPE GetFrameStatistics(
                /* [annotation][out] */
                _Out_  DXGI_FRAME_STATISTICS* pStats) = 0;

            GUID getGUID() override
            {
                return DirectX::GetGUID<::IDXGIOutput>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::IDXGIOutput);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::IDXGIOutput* () { return (_ref); }
        };
    }
}