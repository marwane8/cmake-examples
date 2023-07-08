
add_executable( math_app_tests
    adder_test.cpp
)

target_link_libraries( math_app_tests
    math_app
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(math_app_tests)