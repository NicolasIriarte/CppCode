set(RELEASE_BUILD_FLAGS "-Wall -Wextra -std=c++17")

set(RELEASE_EXTRA_LIBS ${RELEASE_EXTRA_LIBS})
# RELEASE link flags
set(RELEASE_LINK_FLAGS "-lsnmp++")

# Add packages here:


# List all the sources files for compile
FILE(GLOB RELEASE_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
# Include the directory with the headers files
# Set the where the binary must be generated
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# This flags is defined on the parent CMakeLists.txt. The first one are for
# build and the seconds for link
add_definitions(${RELEASE_BUILD_FLAGS})
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${RELEASE_LINK_FLAGS}" )
# Generate the binary file with the same name of the project and all the sources
# files
add_executable(${PROJECT_NAME} ${RELEASE_SOURCE_FILES})
# Link all the libraries (If there are any)
target_link_libraries(${PROJECT_NAME} ${RELEASE_EXTRA_LIBS})
