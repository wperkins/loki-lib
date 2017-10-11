# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:13:47 d3g096
# -------------------------------------------------------------

add_executable(ThreadLocalTest
  main.cpp
  ThreadTests.cpp
  ThreadPool.cpp
  )
target_link_libraries(ThreadLocalTest loki)

loki_add_run_test(ThreadLocal ThreadLocalTest)
