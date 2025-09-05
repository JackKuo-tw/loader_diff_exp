#include "C.h"
#include <iostream>

namespace ProjectC
{
    void CallRegisterTraceFlag()
    {
        static TraceFlag flag;
        ProjectB::RegisterTraceFlag(&flag);
        std::cout << "C flag addr: " << &flag << ", next: " << flag.next_tracer_ << std::endl;
    }
}
