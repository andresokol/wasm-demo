cmake_minimum_required(VERSION 3.10)
project(wasm_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE on)

message("EMSCRIPTEN_ROOT_PATH=${EMSCRIPTEN_ROOT_PATH}")

include_directories(${PROJECT_SOURCE_DIR})

file(GLOB SOURCES "*/*.cpp")
file(GLOB HEADERS "*/*.hpp")

add_executable(${PROJECT_NAME} main.cpp ${HEADERS} ${SOURCES})
