# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:44:21 d3g096
# -------------------------------------------------------------

add_executable(CheckReturnTest main.cpp)
target_link_libraries(CheckReturnTest loki)

loki_add_run_test(CheckReturn CheckReturnTest)
