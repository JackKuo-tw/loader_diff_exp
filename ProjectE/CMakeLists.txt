add_executable(ProjectE
    main.cpp
)
target_include_directories(ProjectE PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/ProjectC
    ${CMAKE_SOURCE_DIR}/ProjectD
)
target_link_libraries(ProjectE PUBLIC ProjectC ProjectD)
