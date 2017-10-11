# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 09:09:06 d3g096
# -------------------------------------------------------------

add_executable(SafeFormatTest main.cpp ThreadPool.cpp)
target_link_libraries(SafeFormatTest loki)
