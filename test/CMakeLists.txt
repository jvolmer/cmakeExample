set(TARGET ${CMAKE_PROJECT_NAME}_test)

add_executable(${TARGET} ${SOURCES} main_test.cpp)

find_package(turtle REQUIRED)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
target_link_libraries (${TARGET} PRIVATE ${CMAKE_PROJECT_NAME}_lib Boost::unit_test_framework turtle::turtle)

add_custom_target(test COMMAND ${TARGET}
  COMMENT "Execute tests")

find_program(GCOVR_PATH gcovr)
add_custom_target(coverage
  COMMAND ${GCOVR_PATH} --xml=coverage.xml --txt -r ${PROJECT_SOURCE_DIR}
  DEPENDS test
  BYPRODUCTS coverage.xml
  COMMENT "Check test coverage")

add_subdirectory(position)
add_subdirectory(location)
