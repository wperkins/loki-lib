# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:52:31 d3g096
# -------------------------------------------------------------

add_executable(SingletonDependenciesTest Dependencies.cpp)
target_link_libraries(SingletonDependenciesTest loki)

add_executable(SingletonPhoenixTest Phoenix.cpp)
target_link_libraries(SingletonPhoenixTest loki)


loki_add_run_test("Singleton-Dependencies" SingletonDependenciesTest)
loki_add_run_test("Singleton-Phoenix" SingletonPhoenixTest)
