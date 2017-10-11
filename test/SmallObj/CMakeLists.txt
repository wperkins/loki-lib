# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:15:30 d3g096
# -------------------------------------------------------------

add_executable(SmallObjBenchTest SmallObjBench.cpp)
target_link_libraries(SmallObjBenchTest loki)

add_executable(SmallObjSingletonTest SmallObjSingleton.cpp)
target_link_libraries(SmallObjSingletonTest loki)

add_executable(SmallObjDefaultAllocTest DefaultAlloc.cpp)
target_link_libraries(SmallObjDefaultAllocTest loki)


loki_add_run_test(SmallObject-Singleton SmallObjSingletonTest)
loki_add_run_test(SmallObject-DefaultAlloc SmallObjDefaultAllocTest)
