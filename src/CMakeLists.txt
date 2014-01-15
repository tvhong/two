cmake_minimum_required(VERSION 2.8)
project(Two)

# version number
# Not used yet
set(Two_VERSION_MAJOR 1)
set(Two_VERSION_MINOR 0)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/Modules/" ${CMAKE_MODULE_PATH})
find_package(SFML 2.1 REQUIRED system window graphics network audio)
#include_directories(${SFML_INCLUDE_DIRS})

# sub directories' CMakeLists will be included
add_subdirectory(world)
add_subdirectory(screen)
add_subdirectory(graphics)
add_subdirectory(fonts)

# Name of the compiled file
set(PROGRAM_NAME two)

add_library(game STATIC game.cpp)
target_link_libraries(game ${SFML_LIBRARIES})

add_executable(${PROGRAM_NAME} main.cpp)
target_link_libraries(${PROGRAM_NAME} ${SFML_LIBRARIES} game init_screen)

# Set installation paths
install(TARGETS game DESTINATION lib)
install(TARGETS ${PROGRAM_NAME} DESTINATION bin)
