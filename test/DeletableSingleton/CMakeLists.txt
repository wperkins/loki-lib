# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:44:50 d3g096
# -------------------------------------------------------------

add_executable(DeletableSingletonTest DeletableSingleton.cpp)
target_link_libraries(DeletableSingletonTest loki)

loki_add_run_test(DeletableSingleton DeletableSingletonTest)
