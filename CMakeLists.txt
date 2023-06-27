project(mobilenetcpp)
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

include(GNUInstallDirs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

option(BUILD_TESTS "Build tests" ON)


add_subdirectory(mobilenetcpp)

if (BUILD_TESTS)
    enable_testing()
    add_subdirectory(mobilenetcpp_tests)
endif ()