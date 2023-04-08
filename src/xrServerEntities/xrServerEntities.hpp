#pragma once
#include "Common/Platform.hpp"

#ifdef XRAY_STATIC_BUILD
#define XRSE_API
#else
#   ifdef XRSERVERENTITIES_EXPORTS
#      define XRSE_API XR_EXPORT
#   else
#      define XRSE_API XR_IMPORT
#   endif
#endif
