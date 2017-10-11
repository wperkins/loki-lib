# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 08:46:00 d3g096
# -------------------------------------------------------------

add_executable(LockableTest main.cpp ThreadPool.cpp)
target_link_libraries(LockableTest loki)
