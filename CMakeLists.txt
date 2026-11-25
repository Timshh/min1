cmake_minimum_required(VERSION 3.11)

project(Test1 LANGUAGES CXX)

add_executable(${PROJECT_NAME}
    code/main.cpp
)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

target_include_directories(${PROJECT_NAME} PRIVATE
    code
    data
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    "${CMAKE_SOURCE_DIR}/data/vec3lib.lib"
)

add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_SOURCE_DIR}/data/vec3lib.dll"
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>"
)