include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main
)
FetchContent_MakeAvailable(googletest)

set(TEST_APP_NAME ${PROJECT_NAME}-tests)
set(TEST_SOURCES
        CalcualtorTest.cpp)

add_executable(${TEST_APP_NAME} ${TEST_SOURCES})
target_link_libraries(${TEST_APP_NAME} ${APP_CORE_LIB} gmock_main)
