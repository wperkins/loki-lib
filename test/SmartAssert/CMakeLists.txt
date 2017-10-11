# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:16:08 d3g096
# -------------------------------------------------------------

add_executable(SmartAssertTest main.cpp)
target_link_libraries(SmartAssertTest loki)

loki_add_run_test(SmartAssert SmartAssertTest)
