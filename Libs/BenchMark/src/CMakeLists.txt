include_directories(${PROJECT_SOURCE_DIR}/include)
add_definitions("-Wall -Wextra -std=c++17 -O3")
add_executable(${PROJECT_NAME} main.cpp timer.cpp)
