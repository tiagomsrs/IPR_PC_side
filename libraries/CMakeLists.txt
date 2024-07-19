set(TARGET_LIB rg_utilities)
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/random_generator.cpp
)
set(PUBLIC_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/random_generator.hpp
)

add_library(${TARGET_LIB} SHARED ${SOURCES})

target_include_directories(${TARGET_LIB}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#install(TARGETS ${TARGET_LIB} LIBRARY DESTINATION $ENV{libdir} COMPONENT lib)
#install(FILES ${PUBLIC_HEADERS} DESTINATION $ENV{includedir} COMPONENT includes)
