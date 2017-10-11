# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 09:27:42 d3g096
# -------------------------------------------------------------

add_executable(SmallObjBenchTest SmallObjBench.cpp)
target_link_libraries(SmallObjBenchTest loki)

add_executable(SmallObjSingletonTest SmallObjSingleton.cpp)
target_link_libraries(SmallObjSingletonTest loki)

add_executable(SmallObjDefaultAllocTest DefaultAlloc.cpp)
target_link_libraries(SmallObjDefaultAllocTest loki)



