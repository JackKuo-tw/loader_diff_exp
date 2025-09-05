add_library(ProjectA STATIC
    TraceFlagList.cpp
    TraceFlagList.h
    TraceFlag.h
)
target_include_directories(ProjectA PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
