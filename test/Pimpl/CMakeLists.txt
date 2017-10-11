# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:54:58 d3g096
# -------------------------------------------------------------

add_executable(PimplTest main.cpp)
target_link_libraries(PimplTest loki)

loki_add_run_test(Pimpl PimplTest)
