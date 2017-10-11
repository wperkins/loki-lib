# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:51:03 d3g096
# -------------------------------------------------------------

add_executable(SafeBitTest SafeBitTest.cpp)
target_link_libraries(SafeBitTest loki)

loki_add_run_test(SafeBit SafeBitTest)
