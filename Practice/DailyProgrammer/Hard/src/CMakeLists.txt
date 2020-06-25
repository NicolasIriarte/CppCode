add_executable(${PROJECT_NAME}
  main.cpp
  func.cpp
  )

target_link_libraries(${PROJECT_NAME}
  PRIVATE
  project_options
  project_warnings
  CONAN_PKG::fmt CONAN_PKG::spdlog
  )

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  )
