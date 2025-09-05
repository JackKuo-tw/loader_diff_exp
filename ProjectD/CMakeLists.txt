add_library(ProjectD SHARED
    D.cpp
    D.h
)
target_include_directories(ProjectD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ProjectD PUBLIC ProjectB)
target_compile_definitions(ProjectD PUBLIC PROJECTD_EXPORTS)
