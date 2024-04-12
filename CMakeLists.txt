cmake_minimum_required(VERSION 3.15)
project(alpha CXX)

find_package(ut REQUIRED)
find_package(spdlog REQUIRED)

add_executable(${PROJECT_NAME} src/alpha.cpp src/main.cpp)

add_executable(${PROJECT_NAME}_server src/alpha.cpp src/server.cpp)

target_link_libraries(${PROJECT_NAME} 
        PRIVATE Boost::ut
        PRIVATE spdlog::spdlog)

target_link_libraries(${PROJECT_NAME}_server
        PRIVATE Boost::ut
        PRIVATE spdlog::spdlog)

install(TARGETS alpha DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
