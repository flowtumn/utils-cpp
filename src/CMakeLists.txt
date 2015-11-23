set(SOURCES
  ${PROJECT_SOURCE_DIR}/src/dummy.cpp
)

add_library(
  ${PROJECT_NAME}
  OBJECT
  ${SOURCES}
)

include_directories (${INCLUDE_ROOT_DIR})

#target_include_directories(
#  ${PROJECT_NAME}
#  PRIVATE
#  ${INCLUDE_ROOT_DIR}
#)

