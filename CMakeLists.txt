# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 10:47:40 d3g096
# -------------------------------------------------------------


cmake_minimum_required (VERSION 2.8.8)

project(Loki)

enable_language(CXX)

# make building and running tests optional

include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(include)


# -------------------------------------------------------------
# loki_add_run_test
# Add a test that only check the return status (0=pass)
# -------------------------------------------------------------
if (NOT LOKI_TEST_TIMEOUT)
  set(LOKI_TEST_TIMEOUT  15.0)
endif()
function(loki_add_run_test test_name test_target)
  add_test("${test_name}" "${test_target}")
  set_tests_properties("${test_name}"
    PROPERTIES 
    TIMEOUT ${LOKI_TEST_TIMEOUT}
  )

endfunction(loki_add_run_test)

option(LOKI_ENABLE_TESTING "Enable tests" ON)

if (LOKI_ENABLE_TESTING) 
  enable_testing()
  add_subdirectory(test)
endif()