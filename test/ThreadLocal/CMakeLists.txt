# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 09:32:04 d3g096
# -------------------------------------------------------------

add_executable(ThreadLocalTest
  main.cpp
  ThreadTests.cpp
  ThreadPool.cpp
  )
target_link_libraries(ThreadLocalTest loki)
