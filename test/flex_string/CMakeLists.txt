# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:45:15 d3g096
# -------------------------------------------------------------

add_executable(FlexStringTest main.cpp)
target_link_libraries(FlexStringTest loki)

loki_add_run_test(flex_string FlexStringTest)
