set(TARGET ${CMAKE_PROJECT_NAME}_main)
set(LIBRARY ${CMAKE_PROJECT_NAME}_lib)

find_program(GCOV_PATH gcov)
add_library(${LIBRARY} STATIC "")
target_compile_options(${LIBRARY} PRIVATE "--coverage")
target_link_libraries(${LIBRARY} PRIVATE gcov)

add_executable(${TARGET} main.cpp)
target_link_libraries(${TARGET} PUBLIC ${LIBRARY})

add_subdirectory(position)
add_subdirectory(location)
