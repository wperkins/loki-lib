# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:46:24 d3g096
# -------------------------------------------------------------

add_executable(LockableTest main.cpp ThreadPool.cpp)
target_link_libraries(LockableTest loki)

loki_add_run_test(Lockable LockableTest)
