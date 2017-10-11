# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:40:42 d3g096
# -------------------------------------------------------------

add_executable(SmartPtrTest
  main.cpp
  strong.cpp
  LockTest.cpp
  colvin_gibbons_trick.cpp
  )
target_link_libraries(SmartPtrTest loki)

# This hangs
loki_add_run_test(SmartPtr SmartPtrTest)
