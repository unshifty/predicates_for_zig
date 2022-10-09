cmake_minimum_required(VERSION 3.16)

project(
    predicates
    LANGUAGES C
    VERSION 1996.05.18
    DESCRIPTION "Adaptive Precision Floating-Point Arithmetic and Fast Robust Predicates for Computational Geometry"
    HOMEPAGE_URL "https://www.cs.cmu.edu/~quake/robust.html")

add_library(${PROJECT_NAME} STATIC "${CMAKE_CURRENT_SOURCE_DIR}/predicates.c")

target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
                                                  $<INSTALL_INTERFACE:include>)

target_compile_options(${PROJECT_NAME} PRIVATE $<$<NOT:$<C_COMPILER_ID:MSVC>>:-msse4.2 -Wall -Wextra>
                                               $<$<C_COMPILER_ID:MSVC>:/arch:AVX /W4>)

if(BUILD_TESTING)
    add_executable(test test.c)

    target_link_libraries(test PRIVATE ${PROJECT_NAME})
endif()

install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    LIBRARY DESTINATION lib
    INCLUDES
    DESTINATION include/${PROJECT_NAME})

install(
    EXPORT ${PROJECT_NAME}Targets
    NAMESPACE ${PROJECT_NAME}::
    FILE ${PROJECT_NAME}Config.cmake
    DESTINATION share/${PROJECT_NAME})

install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/predicates.h" DESTINATION include/${PROJECT_NAME})
