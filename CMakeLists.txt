# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 09:56:42 d3g096
# -------------------------------------------------------------


cmake_minimum_required (VERSION 2.8.8)

project(Loki)

enable_language(CXX)

include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(test)