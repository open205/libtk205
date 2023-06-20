cmake_minimum_required (VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(libtk205)

# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to 'Release' as none was specified.")
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
    "MinSizeRel" "RelWithDebInfo")
endif()

find_package(Git QUIET)

include(CTest)
set(JSON_BuildTests OFF CACHE INTERNAL "")

option(${PROJECT_NAME}_BUILD_TESTING "Build ${PROJECT_NAME} testing targets" OFF)
option(${PROJECT_NAME}_COVERAGE "Add ${PROJECT_NAME} coverage reports" OFF)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
include(compiler-flags)

add_subdirectory(src)
add_subdirectory(vendor)

if (${PROJECT_NAME}_BUILD_TESTING)
  add_compile_definitions(TEST205_INPUT_EXAMPLES_DIR="${PROJECT_SOURCE_DIR}")
  enable_testing()
  add_subdirectory(test)
endif()

# look for Doxygen package
find_package(Doxygen)

if (DOXYGEN_FOUND)
    # set input and output files
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile.out)

    # request to configure the file
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message("Doxygen build started")

    # Note: using "ALL" - this builds docs together with application every time. To make 
    # documentation dependent on header changes, use custom command with a dependency 
    # output, and custom target with dependency input
    add_custom_target(docs ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)
