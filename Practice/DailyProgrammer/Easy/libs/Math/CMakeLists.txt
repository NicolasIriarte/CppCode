option(ENABLE_MATH_LIB_TEST "Enable tests for the Math library" ON)

add_library(math Factorial.cpp)

target_include_directories(math PUBLIC ./)

target_link_libraries(math 
  PRIVATE 
  project_options project_warnings
  )


if (ENABLE_MATH_LIB_TEST)
    enable_testing()
    include(GoogleTest)
    add_subdirectory(test)
endif()


install(TARGETS math
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  )

