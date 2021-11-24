cmake_minimum_required(VERSION 3.0.0)
project(BinaryTree VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(BinaryTree BinaryTree.cpp)

set(CPACK_PROJECT_NAME ${APPNAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
