add_library(ProjectB SHARED
    B.cpp
    B.h
)
target_include_directories(ProjectB PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ProjectB ProjectA)
