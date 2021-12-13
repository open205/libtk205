# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(libtk205)

include(CTest)
set(JSON_BuildTests OFF CACHE INTERNAL "")

file(GLOB lib_headers "${PROJECT_SOURCE_DIR}/include/libtk205/*.h")
file(GLOB lib_src "${PROJECT_SOURCE_DIR}/src/libtk205/*.cpp")

set (SOURCES "${lib_headers}"
             "${lib_src}")

add_library(libtk205 ${SOURCES})
target_include_directories(libtk205 ${CMAKE_CURRENT_SOURCE_DIR}/vendor/btwxt/src)
target_include_directories(libtk205 ${CMAKE_CURRENT_SOURCE_DIR}/vendor/json/single_include)
target_include_directories(libtk205 ${CMAKE_CURRENT_SOURCE_DIR}/vendor/json/include)

add_subdirectory(vendor)

if (LIBTK205_BUILD_TESTING)
  add_compile_definitions(TEST205_INPUT_EXAMPLES_DIR="${PROJECT_SOURCE_DIR}/vendor")
  add_subdirectory(test)
endif()

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
