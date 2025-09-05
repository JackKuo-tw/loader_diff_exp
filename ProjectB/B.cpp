#include "B.h"

namespace ProjectB
{
    void RegisterTraceFlag(TraceFlag *flag)
    {
        TraceFlagList::Add(flag);
    }
}
