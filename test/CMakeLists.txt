file(GLOB_RECURSE ALL_TESTS CONFIGURE_DEPENDS "*.cpp" )

# Be sure to give a name that is separate from the project name
add_executable(
        unit_tests
        ${ALL_TESTS}
        Boost/Boost.cpp)

target_link_libraries(
        unit_tests
        PRIVATE
        gtest_main
)

#if(BUILD_SHARED_LIBS)
#    target_compile_definitions(Boost_Test PRIVATE -DGTEST_LINKED_AS_SHARED_LIBRARY )
#endif()
#if (MSVC)
#    target_compile_options (Boost_Test PRIVATE /wd4251 /wd4101)
#endif()

include(GoogleTest)

# Use the same name as we used in add_executable
gtest_discover_tests(unit_tests
        #EXTRA_ARGS --gtest_output=xml:${WORKSPACE}/xml/{}.xml \;
        PROPERTIES
        LABELS "unit"
        DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
        60
        XML_OUTPUT_DIR reports

        )
enable_testing()