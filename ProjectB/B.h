#pragma once

#include "../ProjectA/TraceFlagList.h"

namespace ProjectB
{
    // Example function to expose ProjectA functionality
    void RegisterTraceFlag(TraceFlag *flag);
}
