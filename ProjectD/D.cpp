#include "D.h"
#include<iostream>

namespace ProjectD
{
    void CallRegisterTraceFlag()
    {
        static TraceFlag flag;
        ProjectB::RegisterTraceFlag(&flag);
        std::cout << "D flag addr: " << &flag << ", next: " << flag.next_tracer_ << std::endl;
    }
}
