cmake_minimum_required(VERSION 3.20)
project(test_link)

set(CMAKE_CXX_STANDARD 14)

find_package(TkUtil 5 REQUIRED)
add_executable(test_link  main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE TkUtil::TkUtil)


enable_testing()
add_test(
        NAME link_on_lib
        COMMAND $<TARGET_FILE:test_link>
)