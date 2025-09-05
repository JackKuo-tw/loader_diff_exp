#include "TraceFlagList.h"

TraceFlag *TraceFlagList::root_tracer_ = nullptr;

void TraceFlagList::Add(TraceFlag *flag)
{
    flag->next_tracer_ = root_tracer_;
    root_tracer_ = flag;
}
