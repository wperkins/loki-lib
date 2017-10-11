# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:51:25 d3g096
# -------------------------------------------------------------

add_executable(SafeFormatTest main.cpp ThreadPool.cpp)
target_link_libraries(SafeFormatTest loki)

loki_add_run_test(SafeFormat SafeFormatTest)
