// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <dxgidebug.h>
#include <dxgi.h>
#include <dxgi1_2.h>
#include <dxgi1_3.h>
#include <dxgi1_4.h>
#include <dxgi1_5.h>
#include <dxgi1_6.h>

#include "Debug_classes/DXGIDebug.h"

#include "IDXGISurface1.h"
#include "IDXGIKeyedMutex.h"
#include "IDXGIResource.h"
#include "IDXGIAdapter.h"
#include "IDXGIOutput.h"
#include "IDXGISwapChain.h"
#include "IDXGIFactory.h"
#include "IDXGIDevice.h"
#include "IDXGIFactory1.h"
#include "IDXGIAdapter1.h"
#include "IDXGIDevice1.h"
#include "IDXGIDisplayControl.h"
#include "IDXGIOutputDuplication.h"
#include "IDXGISurface2.h"
#include "IDXGIResource1.h"
#include "IDXGISwapChain1.h"
#include "IDXGIFactory2.h"
#include "IDXGIAdapter2.h"
#include "IDXGIOutput1.h"
#include "DXGI.h"

#include "Debug_classes/IDXGIDebug1.h"
#include "Debug_classes/IDXGIInfoQueue.h"
#include "Debug_classes/DXGI_INFO_QUEUE_FILTER.h"

// add headers that you want to pre-compile here

#endif //PCH_H
