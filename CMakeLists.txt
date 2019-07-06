cmake_minimum_required(VERSION 3.10)

project(foo LANGUAGES CXX VERSION 0.0.9999)

# CMake Options

option(FOO_BUILD_TESTS "Build Unit tests." ON)
option(FOO_BUILD_EXAMPLES "Build Examples." ON)

# Add foo Library

message(STATUS 'calling??')
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src")

# Build Tests
if(FOO_BUILD_TESTS)
	add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/vendor/Catch2")
	enable_testing()
  add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/tests")
endif()

# Install Library

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
        DESTINATION include
        FILES_MATCHING PATTERN "*.hpp")
