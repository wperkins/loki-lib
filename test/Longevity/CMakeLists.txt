# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 08:50:49 d3g096
# -------------------------------------------------------------

add_executable(LongevityTest1 main.cpp)
target_link_libraries(LongevityTest1 loki)

add_executable(LongevityTest2 main2.cpp)
target_link_libraries(LongevityTest2 loki)
