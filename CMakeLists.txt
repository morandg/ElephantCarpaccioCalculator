cmake_minimum_required(VERSION 3.18)

project(elephant-calculator
        LANGUAGES CXX
        VERSION 0.0.0)

set(APP_CORE_LIB ${PROJECT_NAME}-core)

add_subdirectory(src)
add_subdirectory(tests)
