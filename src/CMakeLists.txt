set(CORE_LIB_SOURCES
        Result.cpp
        Calculator.cpp)

add_library(${APP_CORE_LIB} STATIC ${CORE_LIB_SOURCES})
target_include_directories(${APP_CORE_LIB} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${APP_CORE_LIB})
