add_library(ProjectC SHARED
    C.cpp
    C.h
    "../ProjectB/B.h"
)
target_include_directories(ProjectC PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ProjectC PRIVATE ProjectB)
target_compile_definitions(ProjectC PRIVATE PROJECTC_EXPORTS)
