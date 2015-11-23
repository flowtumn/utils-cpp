set(TEST_PROJECT_NAME ${PROJECT_NAME}-test)

set(SOURCES
  ${PROJECT_SOURCE_DIR}/test/test_main.cpp
)

add_executable(
  ${TEST_PROJECT_NAME}
  $<TARGET_OBJECTS:${PROJECT_NAME}>
  ${SOURCES}
)

include_directories (${INCLUDE_ROOT_DIR})

#target_include_directories(
#  ${TEST_PROJECT_NAME}
#  PRIVATE
#  ${INCLUDE_ROOT_DIR}
#)

add_test(test ${TEST_PROJECT_NAME})
