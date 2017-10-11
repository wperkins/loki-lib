# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 08:57:56 d3g096
# -------------------------------------------------------------

add_library(foo foo.cpp)
add_executable(RegisterTest main.cpp)
target_link_libraries(RegisterTest foo loki)
