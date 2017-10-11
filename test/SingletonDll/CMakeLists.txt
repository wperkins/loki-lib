# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 09:19:55 d3g096
# -------------------------------------------------------------

add_library(lib1 SHARED foo.cpp)
add_library(lib2 SHARED singletondll.cpp)
target_link_libraries(lib2 lib1 loki)

add_executable(SingletonDllTest client.cpp)
target_link_libraries(SingletonDllTest lib1 lib2 loki)
