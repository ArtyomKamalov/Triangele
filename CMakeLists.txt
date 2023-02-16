cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp)
# Installing sfml
include_directories(./SFML-2.5.1/include)
set(SFML_DIR ./SFML-2.5.1/lib/cmake/SFML)
set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(untitled sfml-system sfml-window sfml-graphics sfml-audio sfml-network)