add_library(foo foo.cpp)
add_library(foo::foo ALIAS foo)

target_include_directories(foo
  INTERFACE
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  PRIVATE
      ${CMAKE_SOURCE_DIR}/include
      ${CMAKE_CURRENT_SOURCE_DIR}

)

if(FOO_BUILD_TESTS)
  add_library(foo_internal_for_tdd INTERFACE)
  target_include_directories(foo_internal_for_tdd
      INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
endif()

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)
