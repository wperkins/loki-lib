# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:45:36 d3g096
# -------------------------------------------------------------

add_executable(FunctionTest FunctionTest.cpp)
target_link_libraries(FunctionTest loki)

loki_add_run_test(Function FunctionTest)
