add_library(ProjectC SHARED
    C.cpp
    C.h
)
target_include_directories(ProjectC PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ProjectC PUBLIC ProjectB)
target_compile_definitions(ProjectC PUBLIC PROJECTC_EXPORTS)
