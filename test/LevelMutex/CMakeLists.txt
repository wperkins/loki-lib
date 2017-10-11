# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:46:00 d3g096
# -------------------------------------------------------------

add_executable(LevelMutexTest
  main.cpp
  MultiThreadTests.cpp
  ThreadPool.cpp
  Thing.cpp
  )
target_link_libraries(LevelMutexTest loki)

loki_add_run_test(LevelMutex LevelMutexTest)
