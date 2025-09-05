add_library(ProjectB STATIC
    B.cpp
    B.h
)
target_include_directories(ProjectB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ProjectB ProjectA)
