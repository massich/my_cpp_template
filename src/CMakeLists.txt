add_library(foo foo.cpp)
add_library(foo::foo ALIAS foo)

target_include_directories(foo 
  INTERFACE
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  PRIVATE
      ${CMAKE_SOURCE_DIR}/include  # XXX: This should not be here, BUILD_INTERFACE should be enough, I'm doing something wrong.
      ${CMAKE_CURRENT_SOURCE_DIR}

)

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)
