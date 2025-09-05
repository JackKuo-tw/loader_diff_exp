add_library(ProjectD SHARED
    D.cpp
    D.h
    "../ProjectB/B.h"
)
target_include_directories(ProjectD PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ProjectD PRIVATE ProjectB)
target_compile_definitions(ProjectD PRIVATE PROJECTD_EXPORTS)
