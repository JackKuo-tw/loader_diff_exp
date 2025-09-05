#pragma once

#include "B.h"

#ifdef PROJECTD_EXPORTS
#define PROJECTD_API __declspec(dllexport)
#else
#define PROJECTD_API __declspec(dllimport)
#endif

namespace ProjectD
{
    // Function that creates a TraceFlag and registers it
    PROJECTD_API void CallRegisterTraceFlag();
}
