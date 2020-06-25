option(AUTO_RUN_TESTS "Run all tests automatically after compile" OFF)
add_executable(math-lib-test test.cpp)
target_link_libraries(math-lib-test 
  PRIVATE
  math
  project_warnings
  project_options
  CONAN_PKG::gtest
  )

gtest_discover_tests(math-lib-test)

if (AUTO_RUN_TESTS)
  add_custom_command(TARGET math-lib-test
    POST_BUILD
    COMMAND ctest -C $<CONFIGURATION> --output-on-failure)
endif()

