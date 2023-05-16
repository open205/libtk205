# Test Executable

include(GoogleTest)

set (SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/fixtures_libtk205.hpp
             ${CMAKE_CURRENT_SOURCE_DIR}/main_libtk205.cpp)

set_source_files_properties(${SOURCES} PROPERTIES GENERATED TRUE) #TODO: Check if GENERATED property is used

add_executable(${PROJECT_NAME}_tests ${SOURCES})
target_include_directories(${PROJECT_NAME}_tests PRIVATE ${gtest_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/include/libtk205)
target_link_libraries(${PROJECT_NAME}_tests PRIVATE libtk205 btwxt nlohmann_json gtest gmock)

gtest_discover_tests(${PROJECT_NAME}_tests TEST_PREFIX ${PROJECT_NAME}:)
