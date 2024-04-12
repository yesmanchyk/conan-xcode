cmake_minimum_required(VERSION 3.15)
project(alpha CXX)

find_package(ut)

add_executable(${PROJECT_NAME} src/alpha.cpp src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Boost::ut)

install(TARGETS alpha DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
