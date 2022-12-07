cmake_minimum_required(VERSION 3.0.0)
project(A6_self VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(A6_self main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
