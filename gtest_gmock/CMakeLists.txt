cmake_minimum_required(VERSION 3.19)
project(gtest_gmock)

include_directories(./inc DIR_INC)

link_directories(./lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(gtest_gmock src/main.cpp inc/user.hpp stubs/MockUser.hpp)

target_link_libraries(gtest_gmock libgtest.a libgtest_main.a libgmock.a libgmock_main.a)