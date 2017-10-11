# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 08:44:45 d3g096
# -------------------------------------------------------------

add_executable(LevelMutexTest
  main.cpp
  MultiThreadTests.cpp
  ThreadPool.cpp
  Thing.cpp
  )
target_link_libraries(LevelMutexTest loki)
