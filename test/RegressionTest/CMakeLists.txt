# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:50:42 d3g096
# -------------------------------------------------------------

add_executable(RegressionTest Test.cpp)
target_link_libraries(RegressionTest loki)

loki_add_run_test(Regression RegressionTest)
