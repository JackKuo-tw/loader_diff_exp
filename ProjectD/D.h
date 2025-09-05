#pragma once

#include "../ProjectB/B.h"

#ifdef PROJECTD_EXPORTS
#define PROJECTD_API __declspec(dllexport)
#else
#define PROJECTD_API __declspec(dllimport)
#endif

#ifndef WIN32
#undef PROJECTD_API
#define PROJECTD_API
#endif

namespace ProjectD
{
    // Function that creates a TraceFlag and registers it
    PROJECTD_API void CallRegisterTraceFlag();
}
