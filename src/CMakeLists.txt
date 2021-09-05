set(TARGET ${CMAKE_PROJECT_NAME}_main)
set(LIBRARY ${CMAKE_PROJECT_NAME}_lib)

find_program(GCOV_PATH gcov)
add_library(${LIBRARY} STATIC "")

# set CMAKE_BUILD_TYPE=Debug in generation step for coverage
target_compile_options(${LIBRARY} PRIVATE $<$<CONFIG:Debug>:--coverage>)
target_link_libraries(${LIBRARY} PRIVATE $<$<CONFIG:Debug>:gcov>)

add_executable(${TARGET} main.cpp)
target_link_libraries(${TARGET} PUBLIC ${LIBRARY})

add_subdirectory(position)
add_subdirectory(location)
