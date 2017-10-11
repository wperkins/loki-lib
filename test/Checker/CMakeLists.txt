# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:43:56 d3g096
# -------------------------------------------------------------

add_executable(CheckerTest main.cpp)
target_link_libraries(CheckerTest loki)

loki_add_run_test(Checker CheckerTest)
