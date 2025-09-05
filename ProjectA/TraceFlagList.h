#pragma once
#include "TraceFlag.h"

class TraceFlagList
{
public:
    static void Add(TraceFlag *flag);

private:
    static TraceFlag *root_tracer_;
};
