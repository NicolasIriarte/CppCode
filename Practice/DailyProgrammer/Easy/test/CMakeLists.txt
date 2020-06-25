option(AUTO_RUN_TESTS "Run all tests automatically after compile" OFF)

add_executable(tests
  test.cpp
  func.cpp
  ${PROJECT_SOURCE_DIR}/src/func.cpp
  )
include_directories("${PROJECT_SOURCE_DIR}/src")

target_link_libraries(tests
  PRIVATE
  project_warnings
  project_options
  CONAN_PKG::gtest
  )

gtest_discover_tests(tests)


if (AUTO_RUN_TESTS)
  add_custom_command(TARGET tests
    POST_BUILD
    COMMAND ctest -C $<CONFIGURATION> --output-on-failure)
endif()
