# Test Executable

include_directories(${PROJECT_SOURCE_DIR}/vendor/json/single_include)
include_directories(${PROJECT_SOURCE_DIR}/vendor/json/include)
include_directories(${gtest_SOURCE_DIR}/include)

include(GoogleTest)

set (SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/fixtures_libtk205.hpp
             ${CMAKE_CURRENT_SOURCE_DIR}/main_libtk205.cpp)

#Does the following command do anything?
set_source_files_properties(${SOURCES} PROPERTIES GENERATED TRUE)

add_executable(libtk205_tests ${SOURCES})
# target_compile_features(libtk205_tests PUBLIC cxx_std_17)
target_include_directories(libtk205_tests PRIVATE ${PROJECT_SOURCE_DIR}/include/libtk205)
target_link_libraries(libtk205_tests PRIVATE libtk205 btwxt gtest gmock)

gtest_discover_tests(libtk205_tests TEST_PREFIX libtk205:)
