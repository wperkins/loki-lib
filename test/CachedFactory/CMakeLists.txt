# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:12:06 d3g096
# -------------------------------------------------------------

add_executable(CachedFactoryTest CachedFactoryTest.cpp)
target_link_libraries(CachedFactoryTest loki)

loki_add_run_test(CachedFactory CachedFactoryTest)
