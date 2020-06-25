cmake_minimum_required(VERSION 3.16)
project(myproject)

option(ENABLE_CLANG_TIDY "Enable static analysis with clang-tidy" ON)
option(ENABLE_CPPCHECK "Enable static analysis with cppcheck" ON)
option(ENABLE_DOXYGEN "Enable doxygen doc builds of source" OFF)
option(ENABLE_IPO "Enable Iterprocedural Optimization, aka Link Time Optimization (LTO)" OFF)
option(ENABLE_PCH "Enable Precompiled Headers" OFF)
option(ENABLE_SANITIZER_ADDRESS "Enable address sanitizer" OFF)
option(ENABLE_SANITIZER_MEMORY "Enable memory sanitizer" OFF)
option(ENABLE_SANITIZER_UNDEFINED_BEHAVIOR "Enable undefined behavior sanitizer" OFF)
option(ENABLE_SANITIZER_THREAD "Enable thread sanitizer" OFF)
option(ENABLE_PROJECT_TESTING "Enable Test Builds" ON)
option(EXTRA_GCC_WARNINGS "Add extra GCC warnings not supported by Clang" OFF)
option(WARNINGS_AS_ERRORS "Treat compiler warnings as errors" OFF)

# Set up some extra Conan dependencies based on our needs
# before loading Conan
set(CONAN_EXTRA_REQUIRES "")
set(CONAN_EXTRA_OPTIONS "")

include(cmake/ProjectSettings.cmake)
include(cmake/CompilerWarnings.cmake)
# include(cmake/PrecompiledHeaders.cmake)
include(cmake/Sanitizers.cmake)
include(cmake/StaticAnalyzers.cmake)
include(cmake/Doxygen.cmake)
include(cmake/Conan.cmake)

enable_doxygen()

add_library(project_warnings INTERFACE)
set_project_warnings(project_warnings)

add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_17)
enable_sanitizers(project_options)

if (ENABLE_PCH)
  # This sets a global PCH parameter, each project will build its own PCH, which
  # is a good idea if any #define's change
  target_precompile_headers(project_options INTERFACE <vector> <string> <map> <utility>)
endif()


add_subdirectory(libs)
add_subdirectory(src)

if (ENABLE_PROJECT_TESTING)
  enable_testing()
  include(GoogleTest)
  add_subdirectory(test)
endif()
