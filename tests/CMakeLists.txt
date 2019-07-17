

macro(foo_add_test TESTNAME)
  add_executable(${TESTNAME} ${ARGN})
  target_link_libraries(${TESTNAME} PRIVATE ${PROJECT_NAME}::${PROJECT_NAME})
  target_link_libraries(${TESTNAME} PRIVATE Catch2)
  add_test(NAME ${TESTNAME} COMMAND ${TESTNAME})
  set_target_properties(${TESTNAME} PROPERTIES FOLDER tests) 
endmacro()

foo_add_test(test_utils "test_utils.cpp")
foo_add_test(test_foo "test_foo.cpp")

target_link_libraries(test_utils PRIVATE foo_internal_for_tdd)
