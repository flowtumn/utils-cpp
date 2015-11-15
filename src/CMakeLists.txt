set(SOURCES
  dummy.cpp
)

add_library(
  ${PROJECT_NAME}
  OBJECT
  ${SOURCES}
)

target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
  ${INCLUDE_ROOT_DIR}
)

