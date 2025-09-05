#pragma once

#include "B.h"

#ifdef PROJECTC_EXPORTS
#define PROJECTC_API __declspec(dllexport)
#else
#define PROJECTC_API __declspec(dllimport)
#endif

namespace ProjectC
{
    // Function that creates a TraceFlag and registers it
    PROJECTC_API void CallRegisterTraceFlag();
}
