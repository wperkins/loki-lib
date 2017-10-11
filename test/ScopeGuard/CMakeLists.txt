# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:51:44 d3g096
# -------------------------------------------------------------

add_executable(ScopeGuardTest main.cpp)
target_link_libraries(ScopeGuardTest loki)

loki_add_run_test(ScopeGuard ScopeGuardTest)
