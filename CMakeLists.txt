cmake_minimum_required(VERSION 3.14)
project(SumaProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(suma_lib src/suma.cpp)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)


set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(runTests test/test_suma.cpp)

target_link_libraries(runTests PRIVATE suma_lib gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
