cmake_minimum_required(VERSION 3.10)
project(Sprout)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(GTest REQUIRED)


add_executable(main
    src/sprout.cpp
    main.cpp
)

add_executable(tests
    src/sprout.cpp
    test/test01.cpp
)

target_link_libraries(tests PRIVATE gtest gtest_main)


target_include_directories(main PRIVATE include)
target_include_directories(tests PRIVATE include)