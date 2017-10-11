# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 09:12:25 d3g096
# -------------------------------------------------------------

add_executable(SingletonDependenciesTest Dependencies.cpp)
target_link_libraries(SingletonDependenciesTest loki)

add_executable(SingletonPhoenixTest Phoenix.cpp)
target_link_libraries(SingletonPhoenixTest loki)
