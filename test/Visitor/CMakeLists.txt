# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:09:50 d3g096
# -------------------------------------------------------------

add_executable(VisitorTest main.cpp)
target_link_libraries(VisitorTest loki)

loki_add_run_test(Visitor VisitorTest)
