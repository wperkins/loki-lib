# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:55:16 d3g096
# -------------------------------------------------------------

add_executable(OrderedStaticTest main.cpp)
target_link_libraries(OrderedStaticTest loki)

loki_add_run_test(OrderedStatic OrderedStaticTest)
