
## Minimum version of cmake required build
cmake_minimum_required(VERSION 3.14 FATAL_ERROR)


project(
  mproc 
  VERSION 1.0
  LANGUAGES CXX
)


if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(
    FATAL_ERROR
      "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there."
  )
endif()


set(SOURCES 
    src/main.cpp
    src/sysinfo.cpp
    src/utils.cpp
)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(mproc ${SOURCES})

target_include_directories(mproc PRIVATE ${PROJECT_SOURCE_DIR}/include)

