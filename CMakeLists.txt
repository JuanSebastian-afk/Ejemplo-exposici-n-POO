cmake_minimum_required(VERSION 3.14)
project(ExposicionPOO)

set(CMAKE_CXX_STANDARD 17)

add_library(suma STATIC src/suma.cpp)
enable_testing()

# Usando FetchContent para GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(runTests test/test_suma.cpp)
target_link_libraries(runTests PRIVATE mathlib gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
